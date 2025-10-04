module ysyx_25050136_WB
    #(
       parameter ADDR_WIDTH = 4
    )
    (
        input                                         clk,
        input                                       reset,
`ifdef ysyx_25050136_VERILATOR_DPIC
        input [`ysyx_25050136_DBG_NUM]           dbg_op_i,
        input [31:0]                             dbg_pc_i,
        input [31:0]                           dbg_inst_i,
`endif
        input [31:0]                              wdata_i,
        input [ADDR_WIDTH-1:0]                    waddr_i,
        input                                       wen_i,
        input [ADDR_WIDTH-1:0]                   raddr1_i,
        input [ADDR_WIDTH-1:0]                   raddr2_i,
        output [31:0]                            rdata1_o,
        output [31:0]                            rdata2_o
    );

`ifdef ysyx_25050136_VERILATOR_DPIC
    reg [`ysyx_25050136_DBG_NUM-1:0] dbg_op; 
    reg [31:0] dbg_pc;
    reg [31:0] dbg_inst;
    always @(posedge clk) begin
        if (reset) begin
            dbg_op <= 0;
            dbg_pc <= 0;
            dbg_inst <= 0;
        end else begin
            dbg_op <= dbg_op_i;
            dbg_pc <= dbg_pc_i;
            dbg_inst <= dbg_inst_i;
        end
    end
`endif

    ysyx_25050136_RegisterFile#(
        .ADDR_WIDTH(ADDR_WIDTH)
    ) 
    u_ysyx_25050136_RegisterFile(
        .clk      	(clk      ),
        .wdata_i  	(wdata_i  ),
        .waddr_i  	(waddr_i  ),
        .wen_i      (wen_i    ),
        .raddr1_i 	(raddr1_i ),
        .rdata1_o 	(rdata1_o ),
        .raddr2_i 	(raddr2_i ),
        .rdata2_o 	(rdata2_o )
    );

endmodule //moduleName
