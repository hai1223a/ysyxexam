// 通用寄存器文件
// ADDR_WIDTH 表示寄存器地址位宽,5表示32个寄存器
// DATA_WIDTH 表示寄存器数据位宽,32表示寄存器32bits
module ysyx_25050136_RegisterFile
    #(
         ADDR_WIDTH = 5,
         DATA_WIDTH = 32
     )
     (
         input                         clk,
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
        if (wen_i)
            if(waddr_i != 0)
                gpr[waddr_i] <= wdata_i;
    end

    assign rdata1_o = raddr1_i ? gpr[raddr1_i] : 0;
    assign rdata2_o = raddr2_i ? gpr[raddr2_i] : 0;

endmodule
