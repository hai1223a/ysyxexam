module ysyx_25050136_RegisterFile
    #(
        parameter ADDR_WIDTH = 5
     )
     (
         input                         clk,
         // 写端口
         input   [31:0]            wdata_i,
         input   [ADDR_WIDTH-1:0]  waddr_i,
         input                       wen_i,
         // 读端口1
         input   [ADDR_WIDTH-1:0] raddr1_i,
         input                      ren1_i,
         output  [31:0]           rdata1_o,
         // 读端口2
         input   [ADDR_WIDTH-1:0] raddr2_i,
         input                      ren2_i,
         output  [31:0]           rdata2_o
     );
    reg [31:0] gpr [2**ADDR_WIDTH-1:0];
    always @(posedge clk) begin
        if(wen_i & (|waddr_i))
            gpr[waddr_i] <= wdata_i;
    end

    assign rdata1_o = (ren1_i || raddr1_i == 0) ? 0 :gpr[raddr1_i];
    assign rdata2_o = (ren2_i || raddr2_i == 0) ? 0 :gpr[raddr2_i];
endmodule
