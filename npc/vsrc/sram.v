import "DPI-C" function int pmem_read(input int raddr, input int rmask);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input int wmask);
module ysyx_25050136_SRAM
    #(
         ADDR_WIDTH = 32,
         DATA_WIDTH = 32
     )
     (
         input                            clk,
         input                          reset,
         // 写端口 
         input      [ADDR_WIDTH-1:0]  waddr_i,
         input      [DATA_WIDTH-1:0]  wdata_i,
         input      [3:0]              mask_i,
         input                          wen_i,
         // 读端口 
         input      [ADDR_WIDTH-1:0]  raddr_i,
         output     [DATA_WIDTH-1:0]  rdata_o,
         input                       rready_i,
         output                      rvalid_o
     );
    // 中间变量
    reg [DATA_WIDTH-1:0] rdata_dpic;
    reg rvalid;
    wire [DATA_WIDTH-1:0] wdata_dpic;
    wire [DATA_WIDTH-1:0] mask_full;
    // DPI-C操作
    always @(posedge clk) begin
        if(reset) begin
            rdata_dpic <= 0;
            rvalid <= 0;
        end else begin
        if (rready_i)  begin
            rdata_dpic <= pmem_read(raddr_i, mask_full);
            rvalid <= 1;
        end else begin
            rvalid <= 0;
        end
        end
    end
    always @(*) begin
        if (wen_i) begin // 有写请求时
            pmem_write(waddr_i, wdata_dpic, mask_full);
        end
    end
    assign rdata_o = rdata_dpic;
    assign rvalid_o = rvalid;
    // 写操作无延迟
    assign wdata_dpic = wdata_i;
    assign mask_full = {{8{mask_i[3]}}, {8{mask_i[2]}}, {8{mask_i[1]}}, {8{mask_i[0]}}};
endmodule
