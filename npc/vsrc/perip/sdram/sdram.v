module sdram(
  input        clk,
  input        cke,
  input        cs,
  input        ras,
  input        cas,
  input        we,
  input [12:0] a,
  input [ 1:0] ba,
  input [ 1:0] dqm,
  inout [15:0] dq
);
  // 命令识别
  localparam CMD_ACTIVE        = 4'b0011;
  localparam CMD_READ          = 4'b0101;
  localparam CMD_WRITE         = 4'b0100;
  localparam CMD_LOAD_MODE     = 4'b0000;
  // 状态机
  localparam IDLE = 3'b000;
  localparam WRITE_00 = 3'b001;
  localparam WRITE_01 = 3'b010;
  localparam READ_WAIT = 3'b011;
  localparam READ_00 = 3'b100;
  localparam READ_01 = 3'b101;
  // 数据接口
  reg dq_en;
  wire [15:0] dq_in;
  wire [15:0] dq_out;
  wire [15:0] dq_out_0, dq_out_1, dq_out_2, dq_out_3; 
  reg [15:0] wdata;
  reg wen, ren;
  reg [1:0] count, count_r;
  reg [2:0] state;
  reg [1:0] cas_latency;
  reg [3:0] burst_len;
  reg [12:0] row_addr;
  reg [8:0] col_addr;
  reg [8:0] col_real_addr;
  reg [3:0] bank_sel;
  wire [3:0] cmd = {cs, ras, cas, we};
  
  always @(posedge clk) begin
    if (!cke) begin
        burst_len <= 0;
        cas_latency <= 0;
        row_addr <= 0;
        col_addr <= 0;
        bank_sel <= 0;
    end else begin
      case (cmd)
        CMD_ACTIVE: begin
          row_addr <= a;
          bank_sel <= 4'd1 << ba;
        end
        CMD_READ: begin
          col_addr <= a[9:1];
          bank_sel <= 4'd1 << ba;
        end
        CMD_WRITE: begin
          col_addr <= a[9:1];
          bank_sel <= 4'd1 << ba;
        end
        CMD_LOAD_MODE: begin
          cas_latency <= a[5:4];
          burst_len <= 3'd1 << a[1:0];
        end
        default: ;
      endcase
    end
  end

  always @(posedge clk) begin
    if (!cke) begin
      state <= IDLE;        
    end else begin
      case (state)
          IDLE: begin
            if (cmd == CMD_WRITE) begin
              state <= WRITE_00;
            end else if(cmd == CMD_READ) begin
              state <= READ_WAIT;
            end            
          end
          WRITE_00: begin
            state <= WRITE_01;
          end
          WRITE_01: begin
            state <= IDLE;
          end 
          READ_WAIT: begin
            if(count == count_r - 2) begin
              state <= READ_00;
            end
          end
          READ_00: begin
            state <= READ_01;
          end
          READ_01: begin
            state <= IDLE;
          end
        default: ;
      endcase
    end
  end
  
  always @(*) begin
    dq_en = 0;
    col_real_addr = 0;
    wen = 0;
    ren = 0;
    count_r = 0;
    case (state)
        WRITE_00: begin
          col_real_addr = col_addr;
          wen = 1;
        end
        WRITE_01: begin
          col_real_addr = col_addr + 9'd1;
          wen = 1;
        end
        READ_WAIT: begin
          count_r = cas_latency;
          dq_en = 1;
        end 
        READ_00: begin
          col_real_addr = col_addr;
          dq_en = 1;
          ren = 1;
        end
        READ_01: begin
          col_real_addr = col_addr + 9'd1;
          dq_en = 1;
          ren = 1;
        end
      default: ;
    endcase
  end

  always @(posedge clk) begin
    if(!cke) begin
      wdata <= 0;
      count <= 0;
    end else begin
      wdata <= dq_in;
      if (count != count_r) begin
          count <= count + 1;
      end
    end 
  end

  assign dq_out = bank_sel[0] ? dq_out_0 : (bank_sel[1] ? dq_out_1 : (bank_sel[2] ? dq_out_2 : (bank_sel[3] ? dq_out_3 : 0)));
  assign dq = dq_en ? dq_out : 16'bz;
  assign dq_in = dq;
  
  mem_8192x512x16 u0(
    .clk      	(clk         ),
    .en       	(bank_sel[0] ),
    .wen      	(wen         ),
    .ren      	(ren         ),
    .row_addr 	(row_addr    ),
    .col_addr 	(col_real_addr    ),
    .wdata    	(wdata       ),
    .wmask    	(~dqm       ),
    .rdata    	(dq_out_0       )
  );
  mem_8192x512x16 u1(
    .clk      	(clk         ),
    .en       	(bank_sel[1] ),
    .wen      	(wen         ),
    .ren      	(ren         ),
    .row_addr 	(row_addr    ),
    .col_addr 	(col_real_addr    ),
    .wdata    	(wdata       ),
    .wmask    	(~dqm       ),
    .rdata    	(dq_out_1       )
  );
  mem_8192x512x16 u2(
    .clk      	(clk         ),
    .en       	(bank_sel[2] ),
    .wen      	(wen         ),
    .ren      	(ren         ),
    .row_addr 	(row_addr    ),
    .col_addr 	(col_real_addr    ),
    .wdata    	(wdata       ),
    .wmask    	(~dqm       ),
    .rdata    	(dq_out_2       )
  );
  mem_8192x512x16 u3(
    .clk      	(clk         ),
    .en       	(bank_sel[3] ),
    .wen      	(wen         ),
    .ren      	(ren         ),
    .row_addr 	(row_addr    ),
    .col_addr 	(col_real_addr    ),
    .wdata    	(wdata       ),
    .wmask    	(~dqm       ),
    .rdata    	(dq_out_3       )
  );
endmodule

module mem_8192x512x16(
  input           clk      ,
  input           en       ,
  input           wen      ,
  input           ren      ,
  input   [12:0]  row_addr ,
  input   [ 8:0]  col_addr ,
  input   [15:0]  wdata    ,
  input   [ 1:0]  wmask    ,
  output  [15:0]  rdata    
);  
  reg [15:0] mem [0:8191][0:511];
  
  always @(posedge clk) begin
    if(en & wen) begin
      mem[row_addr][col_addr][7:0] <= wmask[0] ? wdata[7:0] : mem[row_addr][col_addr][7:0];
      mem[row_addr][col_addr][15:8] <= wmask[1] ? wdata[15:8] : mem[row_addr][col_addr][15:8];
    end
  end

  assign rdata = (en & ren) ? mem[row_addr][col_addr] : 0;

endmodule
