module ysyx_25050136_WB
    #(
       parameter ADDR_WIDTH = 4
    )
    (
        input                                         clk,
        input                                       reset,
        input                                  in_valid_i,
        input  [ADDR_WIDTH-1:0]                   in_rd_i,
        input                                  in_rd_en_i,
        input  [31:0]                      in_gpr_wdata_i,
        output                                 in_ready_o,
`ifdef ysyx_25050136_VERILATOR_DPIC
        input  [31:0]                         in_dbg_pc_i,
        input  [31:0]                       in_dbg_inst_i,
        input                          in_dbg_is_device_i,
`endif
        input  [ADDR_WIDTH-1:0]                  raddr1_i,
        input  [ADDR_WIDTH-1:0]                  raddr2_i,
        output [31:0]                            rdata1_o,
        output [31:0]                            rdata2_o
    );
    // ==== 信号定义 ====
    wire in_fire = in_valid_i & in_ready_o;
    wire real_wen;
    // ==== 逻辑实现 ====
    assign in_ready_o = 1;
    assign real_wen = in_fire & in_rd_en_i;
`ifdef ysyx_25050136_VERILATOR_DPIC
    (* keep = "true" *) reg [31:0] wb_dbg_pc;    /* verilator public */;
    (* keep = "true" *) reg [31:0] wb_dbg_inst;  /* verilator public */;
    always @(posedge clk) begin
        if(reset) begin
            wb_dbg_pc <= 0;
            wb_dbg_inst <= 0;
        end else begin
            if(in_fire) begin
                if(in_dbg_is_device_i) find_diff_skip();
                wb_dbg_pc <= in_dbg_pc_i;
                wb_dbg_inst <= in_dbg_inst_i;
            end
        end
    end
`endif

    ysyx_25050136_RegisterFile #(
        .ADDR_WIDTH(ADDR_WIDTH)
    ) u_ysyx_25050136_RegisterFile (
        .clk      	(clk             ),
        .wdata_i  	(in_gpr_wdata_i  ),
        .waddr_i  	(in_rd_i         ),
        .wen_i      (real_wen        ),
        .raddr1_i 	(raddr1_i        ),
        .raddr2_i 	(raddr2_i        ),
        .rdata1_o 	(rdata1_o        ),
        .rdata2_o 	(rdata2_o        )
    );

endmodule //ysyx_25050136_WB
