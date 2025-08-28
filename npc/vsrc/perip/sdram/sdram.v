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
  assign dq = 16'dz;
  // // 命令识别
  // localparam CMD_ACTIVE        = 4'b0011;
  // localparam CMD_READ          = 4'b0101;
  // localparam CMD_WRITE         = 4'b0100;
  // localparam CMD_LOAD_MODE     = 4'b0000;
  // // 状态机
  // localparam IDLE = 3'b000;
  // localparam WRITE_00 = 3'b001;
  // localparam WRITE_01 = 3'b010;
  // localparam READ_WAIT = 3'b011;
  // localparam READ_00 = 3'b100;
  // localparam READ_01 = 3'b101;
  // // 数据接口
  // reg dq_en;
  // wire [15:0] dq_in;
  // wire [15:0] dq_out;
  // wire [15:0] dq_out_0, dq_out_1, dq_out_2, dq_out_3; 
  // reg wen, ren;
  // reg [1:0] count, count_r;
  // reg [2:0] state;
  // reg [1:0] cas_latency;
  // reg [3:0] burst_len;
  // reg [12:0] row_addr;
  // reg [8:0] col_addr;
  // reg [8:0] col_real_addr;
  // reg [3:0] bank_sel;
  // wire [3:0] cmd = {cs, ras, cas, we};
  
  // always @(posedge clk) begin
  //   if (!cke) begin
  //       burst_len <= 0;
  //       cas_latency <= 0;
  //       row_addr <= 0;
  //       col_addr <= 0;
  //       bank_sel <= 0;
  //   end else begin
  //     case (cmd)
  //       CMD_ACTIVE: begin
  //         row_addr <= a;
  //         bank_sel <= 4'd1 << ba;
  //       end
  //       CMD_READ: begin
  //         col_addr <= a[9:1];
  //         bank_sel <= 4'd1 << ba;
  //       end
  //       CMD_WRITE: begin
  //         col_addr <= a[9:1];
  //         bank_sel <= 4'd1 << ba;
  //       end
  //       CMD_LOAD_MODE: begin
  //         cas_latency <= a[5:4];
  //         burst_len <= 3'd1 << a[1:0];
  //       end
  //       default: ;
  //     endcase
  //   end
  // end

  // always @(posedge clk) begin
  //   if (!cke) begin
  //     state <= IDLE;        
  //   end else begin
  //     case (state)
  //         IDLE: begin
  //           if (cmd == CMD_WRITE) begin
  //             state <= WRITE_00;
  //           end else if(cmd == CMD_READ) begin
  //             state <= READ_WAIT;
  //           end            
  //         end
  //         WRITE_00: begin
  //           state <= WRITE_01;
  //         end
  //         WRITE_01: begin
  //           state <= IDLE;
  //         end 
  //         READ_WAIT: begin
  //           if(count == count_r - 1) begin
  //             state <= READ_00;
  //           end
  //         end
  //         READ_00: begin
  //           state <= READ_01;
  //         end
  //         READ_01: begin
  //           state <= IDLE;
  //         end
  //       default: ;
  //     endcase
  //   end
  // end
  
  // always @(*) begin
  //   col_real_addr = 0;
  //   wen = 0;
  //   ren = 0;
  //   count_r = 0;
  //   case (state)
  //       WRITE_00: begin
  //         col_real_addr = col_addr;
  //         wen = 1;
  //       end
  //       WRITE_01: begin
  //         col_real_addr = col_addr + 9'd1;
  //         wen = 1;
  //       end
  //       READ_WAIT: begin
  //         count_r = cas_latency;
  //       end 
  //       READ_00: begin
  //         col_real_addr = col_addr;
  //         ren = 1;
  //       end
  //       READ_01: begin
  //         col_real_addr = col_addr + 9'd1;
  //         ren = 1;
  //       end
  //     default: ;
  //   endcase
  // end

  // always @(posedge clk) begin
  //   if(!cke) begin
  //     count <= 0;
  //   end else begin
  //     if (count != count_r) begin
  //         count <= count + 1;
  //     end
  //   end 
  // end

  // assign dq_out = bank_sel[0] ? dq_out_0 : (bank_sel[1] ? dq_out_1 : (bank_sel[2] ? dq_out_2 : (bank_sel[3] ? dq_out_3 : 0)));
  // assign dq = dq_en ? dq_out : 16'bz;
  // assign dq_in = dq;
  
  // mem_8192x512x16 u0(
  //   .clk      	(clk         ),
  //   .en       	(bank_sel[0] ),
  //   .wen      	(wen         ),
  //   .ren      	(ren         ),
  //   .row_addr 	(row_addr    ),
  //   .col_addr 	(col_real_addr    ),
  //   .wdata    	(dq_in       ),
  //   .wmask    	(dqm       ),
  //   .rdata    	(dq_out_0       )
  // );
  // mem_8192x512x16 u1(
  //   .clk      	(clk         ),
  //   .en       	(bank_sel[1] ),
  //   .wen      	(wen         ),
  //   .ren      	(ren         ),
  //   .row_addr 	(row_addr    ),
  //   .col_addr 	(col_real_addr    ),
  //   .wdata    	(dq_in       ),
  //   .wmask    	(dqm       ),
  //   .rdata    	(dq_out_1       )
  // );
  // mem_8192x512x16 u2(
  //   .clk      	(clk         ),
  //   .en       	(bank_sel[2] ),
  //   .wen      	(wen         ),
  //   .ren      	(ren         ),
  //   .row_addr 	(row_addr    ),
  //   .col_addr 	(col_real_addr    ),
  //   .wdata    	(dq_in       ),
  //   .wmask    	(dqm       ),
  //   .rdata    	(dq_out_2       )
  // );
  // mem_8192x512x16 u3(
  //   .clk      	(clk         ),
  //   .en       	(bank_sel[3] ),
  //   .wen      	(wen         ),
  //   .ren      	(ren         ),
  //   .row_addr 	(row_addr    ),
  //   .col_addr 	(col_real_addr    ),
  //   .wdata    	(dq_in       ),
  //   .wmask    	(dqm       ),
  //   .rdata    	(dq_out_3       )
  // );


  // 测试控制信号
  reg         en;
  reg         wen;
  reg         ren;
  reg  [12:0] row_addr;
  reg  [ 8:0] col_addr;
  reg  [15:0] wdata;
  reg  [ 1:0] wmask;
  wire [15:0] rdata;

  // 实例化被测试的存储器
  mem_8192x512x16 u_mem(
    .clk      (clk),
    .en       (en),
    .wen      (wen),
    .ren      (ren),
    .row_addr (row_addr),
    .col_addr (col_addr),
    .wdata    (wdata),
    .wmask    (wmask),
    .rdata    (rdata)
  );

  // 测试状态机
  reg [3:0] test_state;
  reg [31:0] test_counter;
  reg [15:0] expected_data;

  localparam STATE_IDLE    = 4'd0;
  localparam STATE_WRITE   = 4'd1;
  localparam STATE_READ    = 4'd2;
  localparam STATE_VERIFY  = 4'd3;
  localparam STATE_DONE    = 4'd4;

  always @(posedge clk) begin
    if (!cke) begin
      test_state <= STATE_IDLE;
      en <= 1'b0;
      wen <= 1'b0;
      ren <= 1'b0;
      row_addr <= 13'b0;
      col_addr <= 9'b0;
      wdata <= 16'b0;
      wmask <= 2'b11;
      test_counter <= 32'b0;
      expected_data <= 16'b0;
    end else begin
      case (test_state)
        STATE_IDLE: begin
          test_counter <= test_counter + 1;
          if (test_counter > 10) begin // 等待复位稳定
            test_state <= STATE_WRITE;
            test_counter <= 0;
          end
        end

        STATE_WRITE: begin
          en <= 1'b1;
          wen <= 1'b1;
          ren <= 1'b0;
          row_addr <= test_counter[12:0]; // 使用计数器作为地址
          col_addr <= test_counter[20:12];
          wdata <= test_counter[15:0];   // 使用计数器高位作为数据
          wmask <= 2'b11;                 // 写所有位

          test_counter <= test_counter + 1;
          if (test_counter == 100) begin  // 写100个数据
            test_state <= STATE_READ;
            test_counter <= 0;
          end
        end

        STATE_READ: begin
          en <= 1'b1;
          wen <= 1'b0;
          ren <= 1'b1;
          row_addr <= test_counter[12:0];
          col_addr <= test_counter[20:12];
          expected_data <= test_counter[31:16]; // 记录期望值

          test_counter <= test_counter + 1;
          if (test_counter == 100) begin
            test_state <= STATE_VERIFY;
            test_counter <= 0;
          end
        end

        STATE_VERIFY: begin
          // 这里主要靠C++ testbench来验证，Verilog层只是标记完成
          test_state <= STATE_DONE;
        end

        STATE_DONE: begin
        end

        default: test_state <= STATE_IDLE;
      endcase
    end
  end
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
