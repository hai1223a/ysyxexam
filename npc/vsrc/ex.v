module ysyx_25050136_EX
    #(
        parameter ADDR_WIDTH = 4
     )
     (
        // 内部
        input                                                clk,
        input                                              reset,
        input                                            stall_i,
        input                                            flush_i,
        input     [31:0]                                    pc_i,
        input     [31:0]                                rdata1_i,
        input     [31:0]                                rdata2_i,
        input     [31:0]                                   imm_i,
        input     [`ysyx_25050136_ALU_OP_NUM-1:0]       alu_op_i,
        input     [`ysyx_25050136_CSRU_OP_NUM-1:0]     csru_op_i,
        input                                   alu_op1_use_pc_i,
        input                                  alu_op2_use_imm_i,
        input                                    alu_op2_use_4_i,
        input                                          is_jalr_i,
        input                               unconditional_jump_i,
        input                                 conditional_jump_i,
        input                                          lsu_ren_i,
        input                                          lsu_wen_i,
        input     [3:0]                               lsu_mask_i,
        input                                       lsu_signed_i,
        input     [11:0]                              csr_addr_i,
        input                                          csr_ren_i,
        input                                          csr_wen_i,
        input                                csr_wdata_use_rs1_i,
        input     [4:0]                                    rs1_i,
        input     [ADDR_WIDTH-1:0]                          rd_i,
        input                                            rd_en_i,
`ifdef ysyx_25050136_VERILATOR_DPIC
        input      [`ysyx_25050136_DBG_NUM-1:0]         dbg_op_i,
        input      [31:0]                               dbg_pc_i,
        input      [31:0]                             dbg_inst_i,
        output reg [`ysyx_25050136_DBG_NUM-1:0]         dbg_op_o,
        output reg [31:0]                               dbg_pc_o,
        output reg [31:0]                             dbg_inst_o,
`endif
        output                                    branch_valid_o,
        output    [31:0]                            branch_npc_o,
        output    [ADDR_WIDTH-1:0]                          rd_o,
        output                                           rd_en_o,
        output    [31:0]                             gpr_wdata_o,
        output                                         lsu_ren_o,
        output                                         lsu_wen_o,
        output    [3:0]                               lsu_mask_o,
        output                                      lsu_signed_o,
        output    [31:0]                              lsu_addr_o,
        output    [31:0]                             lsu_wdata_o
     );    
    //===================================================
    // ALU
    //===================================================
    wire [31:0] alu_opd1;
    wire [31:0] alu_opd2;
    wire [31:0] alu_out; 
    assign alu_opd1 = alu_op1_use_pc_i ? pc_i : rdata1_i;
    assign alu_opd2 = alu_op2_use_imm_i ? imm_i :
                     (alu_op2_use_4_i) ? 32'd4 : rdata2_i;
    ysyx_25050136_ALU u_ysyx_25050136_ALU(
        .op1_i          (alu_opd1    ),
        .op2_i          (alu_opd2    ),
        .operation_i 	(alu_op_i    ),
        .out_o       	(alu_out     )
    );
    //===================================================
    // BQU
    //===================================================
    wire [31:0] bqu_opd1;
    wire [31:0] bqu_opd2;
    wire [31:0] bqu_out;
    assign bqu_opd1 = is_jalr_i ? rdata2_i : pc_i;
    assign bqu_opd2 = imm_i;
    ysyx_25050136_BQU u_ysyx_25050136_BQU(
        .op1_i          (bqu_opd1    ),
        .op2_i          (bqu_opd2    ),
        .is_jalr_i      (is_jalr_i   ),
        .out_o       	(bqu_out     )
    );
    //===================================================
    // CSRU
    //=================================================== 
    wire [31:0] csru_wdata;
    wire [31:0] csru_out;
    assign csru_wdata = csr_wdata_use_rs1_i ? {{32-5{1'b0}},rs1_i} : rdata1_i;
    ysyx_25050136_CSRU u_ysyx_25050136_CSRU(
        .clk          	(clk         ),
        .reset        	(reset       ),
        .pc_i         	(pc_i        ),
        .operation_i  	(csru_op_i   ),
        .csru_wdata_i 	(csru_wdata  ),
        .csru_addr_i  	(csr_addr_i  ),
        .csru_ren_i   	(csr_ren_i   ),
        .csru_wen_i   	(csr_wen_i   ),
        .csru_rdata_o 	(csru_out    )
    );
    //===================================================
    // 跳转路径
    //=================================================== 
    assign branch_valid_o = unconditional_jump_i | csru_op_i[`ysyx_25050136_CSRU_ECALL] |
                            csru_op_i[`ysyx_25050136_CSRU_MRET] | (conditional_jump_i & alu_out[0]);
    assign branch_npc_o = (csru_op_i[`ysyx_25050136_CSRU_ECALL] | csru_op_i[`ysyx_25050136_CSRU_MRET]) ?
                           csru_out : bqu_out;
    //===================================================
    // 中间信号定义
    //=================================================== 
    wire [31:0] gpr_wdata_t = csr_ren_i ? csru_out : alu_out;

`ifdef ysyx_25050136_VERILATOR_DPIC
    always @(posedge clk) begin
        if(reset) begin
            dbg_op_o <= 0;
            dbg_pc_o <= 0;
            dbg_inst_o <= 0;
        end else begin
            if(!stall_i) begin
                dbg_op_o <= dbg_op_i;
                dbg_pc_o <= dbg_pc_i;
                dbg_inst_o <= dbg_inst_i;
            end
        end
    end
`endif
    ysyx_25050136_EX_REG #(
        .ADDR_WIDTH(ADDR_WIDTH)
    ) EX_REG (
        .clk          	(clk           ),
        .reset        	(reset         ),
        .en           	(!stall_i      ),
        .flush        	(flush_i       ),
        .rd_i         	(rd_i          ),
        .rd_en_i      	(rd_en_i       ),
        .gpr_wdata_i  	(gpr_wdata_t   ),
        .lsu_ren_i    	(lsu_ren_i     ),
        .lsu_wen_i    	(lsu_wen_i     ),
        .lsu_mask_i   	(lsu_mask_i    ),
        .lsu_signed_i 	(lsu_signed_i  ),
        .lsu_addr_i   	(alu_out       ),
        .lsu_wdata_i  	(rdata2_i      ),
        .rd_o         	(rd_o          ),
        .rd_en_o      	(rd_en_o       ),
        .gpr_wdata_o  	(gpr_wdata_o   ),
        .lsu_ren_o    	(lsu_ren_o     ),
        .lsu_wen_o    	(lsu_wen_o     ),
        .lsu_mask_o   	(lsu_mask_o    ),
        .lsu_signed_o 	(lsu_signed_o  ),
        .lsu_addr_o   	(lsu_addr_o    ),
        .lsu_wdata_o  	(lsu_wdata_o   )
    );
    
endmodule //ysyx_25050136_EX

module ysyx_25050136_EX_REG
    #(
        parameter ADDR_WIDTH = 4
    )
    (
        input                        clk,
        input                        reset,
        input                        en,
        input                        flush,
        input      [ADDR_WIDTH-1:0]  rd_i,
        input                        rd_en_i,
        input      [31:0]            gpr_wdata_i,
        input                        lsu_ren_i,
        input                        lsu_wen_i,
        input      [3:0]             lsu_mask_i,
        input                        lsu_signed_i,
        input      [31:0]            lsu_addr_i,
        input      [31:0]            lsu_wdata_i,
        output reg [ADDR_WIDTH-1:0]  rd_o,
        output reg                   rd_en_o,
        output reg [31:0]            gpr_wdata_o,
        output reg                   lsu_ren_o,
        output reg                   lsu_wen_o,
        output reg [3:0]             lsu_mask_o,
        output reg                   lsu_signed_o,
        output reg [31:0]            lsu_addr_o,
        output reg [31:0]            lsu_wdata_o
    );

    always @(posedge clk) begin
        if (reset) begin
            rd_o        <= 0;
            rd_en_o     <= 0;
            gpr_wdata_o <= 0;
            lsu_ren_o   <= 0;
            lsu_wen_o   <= 0;
            lsu_mask_o  <= 0;
            lsu_signed_o<= 0;
            lsu_addr_o  <= 0;
            lsu_wdata_o <= 0;
        end else begin
            if (flush) begin
                rd_o        <= 0;
                rd_en_o     <= 0;
                gpr_wdata_o <= 0;
                lsu_ren_o   <= 0;
                lsu_wen_o   <= 0;
                lsu_mask_o  <= 0;
                lsu_signed_o<= 0;
                lsu_addr_o  <= 0;
                lsu_wdata_o <= 0;
            end else if (en) begin
                rd_o        <= rd_i;
                rd_en_o     <= rd_en_i;
                gpr_wdata_o <= gpr_wdata_i;
                lsu_ren_o   <= lsu_ren_i;
                lsu_wen_o   <= lsu_wen_i;
                lsu_mask_o  <= lsu_mask_i;
                lsu_signed_o<= lsu_signed_i;
                lsu_addr_o  <= lsu_addr_i;
                lsu_wdata_o <= lsu_wdata_i;
            end
        end
    end

endmodule
