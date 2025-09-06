// 通用寄存器文件
// ADDR_WIDTH 表示寄存器地址位宽,5表示32个寄存器
// DATA_WIDTH 表示寄存器数据位宽,32表示寄存器32bits
module ysyx_25050136_RegisterFile
    #(
        parameter ADDR_WIDTH = 5,
        parameter DATA_WIDTH = 32
     )
     (
         input                         clk,
         input                       reset,
         // 写端口
         input   [DATA_WIDTH-1:0]  wdata_i,
         input   [ADDR_WIDTH-1:0]  waddr_i,
         input                       wen_i,
         // 读端口1
         input   [ADDR_WIDTH-1:0] raddr1_i,
         output  [DATA_WIDTH-1:0] rdata1_o,
         // 读端口2
         input   [ADDR_WIDTH-1:0] raddr2_i,
         output  [DATA_WIDTH-1:0] rdata2_o
     );
    reg [DATA_WIDTH-1:0] gpr [2**ADDR_WIDTH-1:0];
    always @(posedge clk) begin
        if(reset)
            gpr[waddr_i] <= 0;
        else if(wen_i & (|waddr_i))
            gpr[waddr_i] <= wdata_i;
    end

    assign rdata1_o = gpr[raddr1_i];
    assign rdata2_o = gpr[raddr2_i];
endmodule
