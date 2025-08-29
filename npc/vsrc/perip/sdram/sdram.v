// SDRAM控制器模块
module sdram(
  input        clk,      // 时钟信号
  input        cke,      // 时钟使能
  input        cs,       // 片选
  input        ras,      // 行地址选通
  input        cas,      // 列地址选通
  input        we,       // 写使能
  input [12:0] a,        // 地址总线
  input [ 1:0] ba,       // Bank地址
  input [ 1:0] dqm,      // 数据掩码
  inout [15:0] dq        // 数据总线
);

  // ==================== 命令定义 ====================
  localparam CMD_ACTIVE    = 4'b0011;  
  localparam CMD_READ      = 4'b0101;  
  localparam CMD_WRITE     = 4'b0100;  
  localparam CMD_LOAD_MODE = 4'b0000;  

  // ==================== 状态机状态定义 ====================
  localparam IDLE      = 2'b00; 
  localparam WRITE     = 2'b01; 
  localparam READ_WAIT = 2'b10; 
  localparam READ      = 2'b11; 

  // ==================== 内部信号声明 ====================
  // 数据接口信号
  reg         dq_en;              // 数据输出使能
  wire [15:0] dq_in;              // 数据输入
  wire [15:0] dq_out;             // 数据输出
  wire [15:0] dq_out_0, dq_out_1, dq_out_2, dq_out_3; // 各Bank数据输出
  
  // 控制信号
  reg [15:0]  wdata;
  reg [1:0]   wmask;          
  reg         wen;            
  reg         ren;            
  reg [1:0]   count;          
  reg [1:0]   count_r;        
  reg [1:0]   state;          
  
  // SDRAM配置参数
  reg [1:0]   cas_latency;   
  reg [3:0]   burst_len;     
  
  // 地址信号
  reg [12:0]  row_addr [0:3];       
  reg [8:0]   col_addr;       
  reg [8:0]   col_real_addr;  
  reg [3:0]   bank_sel;       
  
  // 命令解码
  wire [3:0] cmd = {cs, ras, cas, we};

  // ==================== 命令解析逻辑 ====================
  always @(posedge clk) begin
    if (!cke) begin
      burst_len   <= 0;
      cas_latency <= 0;
      row_addr[0] <= 0;
      row_addr[1] <= 0;
      row_addr[2] <= 0;
      row_addr[3] <= 0;
      col_addr    <= 0;
      bank_sel    <= 0;
    end else begin
      case (cmd)
        CMD_ACTIVE: begin
          row_addr[ba] <= a;                
          bank_sel <= 4'd1 << ba;       
        end
        CMD_READ: begin
          col_addr <= {a[8:1], 1'b0};          
          bank_sel <= 4'd1 << ba;      
        end
        CMD_WRITE: begin
          col_addr <= {a[8:1], 1'b0};      
          bank_sel <= 4'd1 << ba;  
        end
        CMD_LOAD_MODE: begin
          cas_latency <= a[5:4];        
          burst_len   <= 3'd1 << a[1:0];
        end
        default: ; 
      endcase
    end
  end

  // ==================== 主状态机 ====================
  always @(posedge clk) begin
    if (!cke) begin
      state <= IDLE;  
    end else begin
      case (state)
        IDLE: begin
          if (cmd == CMD_WRITE) begin
            state <= WRITE;  
          end else if (cmd == CMD_READ) begin
            state <= READ_WAIT; 
          end            
        end
        WRITE: begin
          state <= IDLE;        
        end 
        READ_WAIT: begin
          if (count == count_r - 2) begin
            state <= READ;   
          end
        end
        READ: begin
          state <= IDLE;        
        end
        default: state <= IDLE; 
      endcase
    end
  end
  
  // ==================== 组合逻辑输出 ====================
  always @(*) begin
    // 默认值
    dq_en         = 0;
    col_real_addr = 0;
    wen           = 0;
    ren           = 0;
    count_r       = 0;
    
    case (state)
      WRITE: begin
        col_real_addr = col_addr;  
        wen           = 1;         
      end
      READ_WAIT: begin
        count_r = cas_latency;  
        dq_en   = 1;            
      end 
      READ: begin
        col_real_addr = col_addr; 
        dq_en         = 1;        
        ren           = 1;        
      end
      default: ; 
    endcase
  end

  // ==================== 时序逻辑 ====================
  always @(posedge clk) begin
    if (!cke) begin
      wdata <= 0;
      wmask <= 0;   
      count <= 0;  
    end else begin
      wdata <= dq_in;
      wmask <= ~dqm; 
      if (count != count_r) begin
        count <= count + 1; 
      end
    end 
  end

  // ==================== 数据总线控制 ====================
  // Bank选择输出
  assign dq_out = bank_sel[0] ? dq_out_0 : 
                  bank_sel[1] ? dq_out_1 : 
                  bank_sel[2] ? dq_out_2 : 
                  bank_sel[3] ? dq_out_3 : 16'b0;
  
  // 三态数据总线
  assign dq     = dq_en ? dq_out : 16'bz;  
  assign dq_in  = dq;                     
  
  mem_8192x512x16 u0(
    .clk      	(clk           ),
    .en       	(bank_sel[0]   ),
    .wen      	(wen           ),
    .ren      	(ren           ),
    .row_addr 	(row_addr[0]   ),
    .col_addr 	(col_real_addr ),
    .wdata    	(wdata         ),
    .wmask    	(wmask         ),
    .rdata    	(dq_out_0      )
  );
  mem_8192x512x16 u1(
    .clk      	(clk           ),
    .en       	(bank_sel[1]   ),
    .wen      	(wen           ),
    .ren      	(ren           ),
    .row_addr 	(row_addr[1]   ),
    .col_addr 	(col_real_addr ),
    .wdata    	(wdata         ),
    .wmask    	(wmask         ),
    .rdata    	(dq_out_1      )
  );
  mem_8192x512x16 u2(
    .clk      	(clk           ),
    .en       	(bank_sel[2]   ),
    .wen      	(wen           ),
    .ren      	(ren           ),
    .row_addr 	(row_addr[2]   ),
    .col_addr 	(col_real_addr ),
    .wdata    	(wdata         ),
    .wmask    	(wmask        ),
    .rdata    	(dq_out_2      )
  );
  mem_8192x512x16 u3(
    .clk      	(clk           ),
    .en       	(bank_sel[3]   ),
    .wen      	(wen           ),
    .ren      	(ren           ),
    .row_addr 	(row_addr[3]   ),
    .col_addr 	(col_real_addr ),
    .wdata    	(wdata         ),
    .wmask    	(wmask         ),
    .rdata    	(dq_out_3      )
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
