module ysyx_25050136_WB
    #(
       parameter ADDR_WIDTH = 4
    )
    (
        input                                         clk,
        input                                       reset,
        input [31:0]                              wdata_i,
        input [ADDR_WIDTH-1:0]                    waddr_i,
        input                                       wen_i,
        input [ADDR_WIDTH-1:0]                   raddr1_i,
        input [ADDR_WIDTH-1:0]                   raddr2_i,
        output [31:0]                            rdata1_o,
        output [31:0]                            rdata2_o
    );

    ysyx_25050136_RegisterFile#(
        .ADDR_WIDTH(ADDR_WIDTH)
    ) 
    u_ysyx_25050136_RegisterFile(
        .clk      	(clk      ),
        .wdata_i  	(wdata_i  ),
        .waddr_i  	(waddr_i  ),
        .wen_i      (wen_i    ),
        .raddr1_i 	(raddr1_i ),
        .raddr2_i 	(raddr2_i ),
        .rdata1_o 	(rdata1_o ),
        .rdata2_o 	(rdata2_o )
    );

endmodule //moduleName
