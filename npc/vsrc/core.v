module ysyx_25050136_NPCCORE
#(
    parameter ADDR_WIDTH = 4
)
(
    input                                     clk,
    input                                   reset,
    // 指令相关
    input   [31:0]               inst_req_rdata_i,
    input                        inst_req_ready_i,
    output  [31:0]               inst_req_addr_o ,
    output                       inst_req_valid_o,
    output                       inst_req_use_o  ,
    output                       inst_req_flush_o,
    // 数据相关
    input    [31:0]               mem_req_rdata_i,
    input                         mem_req_ready_i,
    output   [31:0]               mem_req_addr_o ,
    output                        mem_req_valid_o,
    output                        mem_req_ren_o  ,
    output                        mem_req_wen_o  ,
    output   [3:0]                mem_req_mask_o ,
    output   [2:0]                mem_req_size_o ,
    output                        mem_req_use_o  ,
    output   [31:0]               mem_req_wdata_o
);
//========================================
// 顶层信号定义
//========================================
wire [31:0] if_pc;
wire [31:0] if_inst;

wire [ADDR_WIDTH-1:0] id_raddr1;
wire [ADDR_WIDTH-1:0] id_raddr2;
wire [31:0] wb_rdata1;
wire [31:0] wb_rdata2;

wire [31:0] id_pc;
wire [31:0] id_rdata1;
wire [31:0] id_rdata2;
wire [31:0] id_imm;
wire [`ysyx_25050136_ALU_OP_NUM-1:0]   id_alu_op;
wire [`ysyx_25050136_CSRU_OP_NUM-1:0]  id_csru_op;
wire        id_alu_op1_use_pc;
wire        id_alu_op2_use_imm;
wire        id_alu_op2_use_4;
wire        id_is_jalr;
wire        id_unconditional_jump;
wire        id_conditional_jump;
wire        id_lsu_ren;
wire        id_lsu_wen;
wire [3:0]  id_lsu_mask;
wire        id_lsu_signed;
wire [11:0] id_csr_addr;
wire        id_csr_ren;
wire        id_csr_wen;
wire        id_csr_wdata_use_rs1;
wire [4:0]  id_rs1;
wire [ADDR_WIDTH-1:0] id_rd;
wire        id_rd_en;

wire        ex_branch_valid;
wire [31:0] ex_branch_npc;
wire [ADDR_WIDTH-1:0] ex_rd;
wire        ex_rd_en;
wire [31:0] ex_gpr_wdata;
wire        ex_lsu_ren;
wire        ex_lsu_wen;
wire [3:0]  ex_lsu_mask;
wire        ex_lsu_signed;
wire [31:0] ex_lsu_addr;
wire [31:0] ex_lsu_wdata;

wire        mem_lsu_valid;
wire [ADDR_WIDTH-1:0] mem_rd;
wire        mem_rd_en;
wire [31:0] mem_gpr_wdata;

`ifdef ysyx_25050136_VERILATOR_DPIC
wire [`ysyx_25050136_DBG_NUM-1:0]  id_dbg_op;
wire [31:0]                        id_dbg_pc;
wire [31:0]                      id_dbg_inst;
wire [`ysyx_25050136_DBG_NUM-1:0]  ex_dbg_op;
wire [31:0]                        ex_dbg_pc;
wire [31:0]                      ex_dbg_inst;
wire [`ysyx_25050136_DBG_NUM-1:0] mem_dbg_op;
wire [31:0]                       mem_dbg_pc;
wire [31:0]                     mem_dbg_inst;
`endif
//========================================
// 使用DPI-C实现的取指和访存操作, 以及寻找ebreak
//========================================
`ifdef ysyx_25050136_VERILATOR_DPIC
always @(*) begin
    if(mem_dbg_op[`ysyx_25050136_DBG_EBREAK]) begin
        find_ebreak();
    end
end
// always @(posedge clk) begin
//     if(!reset) begin
//         if(if2ex_bvalid_o) begin
//             if(id2ex_fu_o[`ysyx_25050136_CSRU]) begin
//                 csru_get();
//             end else if(id2ex_fu_o[`ysyx_25050136_LSU]) begin
//                 lsu_get();
//             end else if(id2ex_fu_o[`ysyx_25050136_BQU]) begin
//                 bqu_get();
//             end else if(id2ex_fu_o[`ysyx_25050136_ALU]) begin
//                 alu_get();
//             end
//         end
//     end
// end
`endif
//========================================
// 子模块
//========================================
ysyx_25050136_IF 
u_ysyx_25050136_IF(
    .clk            	(clk                 ),
    .reset          	(reset               ),
    .req_rdata_i    	(inst_req_rdata_i    ),
    .req_ready_i    	(inst_req_ready_i    ),
    .req_addr_o     	(inst_req_addr_o     ),
    .req_valid_o    	(inst_req_valid_o    ),
    .req_use_o      	(inst_req_use_o      ),
    .stall_i        	(0),
    .flush_i        	(0),
    .branch_valid_i 	(ex_branch_valid     ),
    .branch_npc_i   	(ex_branch_npc       ),
    .pc_o           	(if_pc               ),
    .inst_o         	(if_inst             )
);


ysyx_25050136_ID #(
    .ADDR_WIDTH 	(ADDR_WIDTH  )
) u_ysyx_25050136_ID (
    .clk                  	(clk                    ),
    .reset                	(reset                  ),
    .inst_i               	(if_inst                ),
    .pc_i                 	(if_pc                  ),
    .stall_i              	(0),
    .flush_i              	(0),
    .rdata1_i             	(wb_rdata1              ),
    .raddr1_o             	(id_raddr1              ),
    .rdata2_i             	(wb_rdata2              ),
    .raddr2_o             	(id_raddr2              ),
`ifdef ysyx_25050136_VERILATOR_DPIC
    .dbg_op_o               (id_dbg_op              ),
    .dbg_pc_o               (id_dbg_pc              ),
    .dbg_inst_o             (id_dbg_inst            ),
`endif
    .pc_o                 	(id_pc                  ),
    .rdata1_o             	(id_rdata1              ),
    .rdata2_o             	(id_rdata2              ),
    .imm_o                	(id_imm                 ),
    .alu_op_o             	(id_alu_op              ),
    .csru_op_o            	(id_csru_op             ),
    .alu_op1_use_pc_o     	(id_alu_op1_use_pc      ),
    .alu_op2_use_imm_o    	(id_alu_op2_use_imm     ),
    .alu_op2_use_4_o      	(id_alu_op2_use_4       ),
    .is_jalr_o            	(id_is_jalr             ),
    .unconditional_jump_o 	(id_unconditional_jump  ),
    .conditional_jump_o     (id_conditional_jump    ),
    .lsu_ren_o            	(id_lsu_ren             ),
    .lsu_wen_o            	(id_lsu_wen             ),
    .lsu_mask_o           	(id_lsu_mask            ),
    .lsu_signed_o         	(id_lsu_signed          ),
    .csr_addr_o           	(id_csr_addr            ),
    .csr_ren_o            	(id_csr_ren             ),
    .csr_wen_o            	(id_csr_wen             ),
    .csr_wdata_use_rs1_o    (id_csr_wdata_use_rs1   ),
    .rs1_o                  (id_rs1                 ),
    .rd_o                 	(id_rd                  ),
    .rd_en_o              	(id_rd_en               )
);
ysyx_25050136_EX #(
    .ADDR_WIDTH 	(ADDR_WIDTH  )
) u_ysyx_25050136_EX (
    .clk                  	(clk                   ),
    .reset                	(reset                 ),
    .stall_i              	( 0),
    .flush_i              	( 0),
    .pc_i                 	(id_pc                 ),
    .rdata1_i             	(id_rdata1             ),
    .rdata2_i             	(id_rdata2             ),
    .imm_i                	(id_imm                ),
    .alu_op_i             	(id_alu_op             ),
    .csru_op_i            	(id_csru_op            ),
    .alu_op1_use_pc_i     	(id_alu_op1_use_pc     ),
    .alu_op2_use_imm_i    	(id_alu_op2_use_imm    ),
    .alu_op2_use_4_i      	(id_alu_op2_use_4      ),
    .is_jalr_i            	(id_is_jalr            ),
    .unconditional_jump_i 	(id_unconditional_jump ),
    .conditional_jump_i   	(id_conditional_jump   ),
    .lsu_ren_i            	(id_lsu_ren            ),
    .lsu_wen_i            	(id_lsu_wen            ),
    .lsu_mask_i           	(id_lsu_mask           ),
    .lsu_signed_i         	(id_lsu_signed         ),
    .csr_addr_i           	(id_csr_addr           ),
    .csr_ren_i            	(id_csr_ren            ),
    .csr_wen_i            	(id_csr_wen            ),
    .csr_wdata_use_rs1_i  	(id_csr_wdata_use_rs1  ),
    .rs1_i                	(id_rs1                ),
    .rd_i                 	(id_rd                 ),
    .rd_en_i              	(id_rd_en              ),
`ifdef ysyx_25050136_VERILATOR_DPIC
    .dbg_op_i               (id_dbg_op             ),
    .dbg_pc_i               (id_dbg_pc             ),
    .dbg_inst_i             (id_dbg_inst           ),
    .dbg_op_o               (ex_dbg_op             ),
    .dbg_pc_o               (ex_dbg_pc             ),
    .dbg_inst_o             (ex_dbg_inst           ),
`endif
    .branch_valid_o       	(ex_branch_valid       ),
    .branch_npc_o         	(ex_branch_npc         ),
    .rd_o                 	(ex_rd                 ),
    .rd_en_o              	(ex_rd_en              ),
    .gpr_wdata_o          	(ex_gpr_wdata          ),
    .lsu_ren_o            	(ex_lsu_ren            ),
    .lsu_wen_o            	(ex_lsu_wen            ),
    .lsu_mask_o           	(ex_lsu_mask           ),
    .lsu_signed_o         	(ex_lsu_signed         ),
    .lsu_addr_o           	(ex_lsu_addr           ),
    .lsu_wdata_o          	(ex_lsu_wdata          )
);

ysyx_25050136_MEM #(
    .ADDR_WIDTH 	(ADDR_WIDTH  )
) u_ysyx_25050136_MEM (
    .clk          	(clk               ),
    .reset        	(reset             ),
    .stall_i      	(0),
    .flush_i      	(0),
    .rd_i         	(ex_rd             ),
    .rd_en_i      	(ex_rd_en          ),
    .gpr_wdata_i  	(ex_gpr_wdata      ),
    .lsu_ren_i    	(ex_lsu_ren        ),
    .lsu_wen_i    	(ex_lsu_wen        ),
    .lsu_mask_i   	(ex_lsu_mask       ),
    .lsu_signed_i 	(ex_lsu_signed     ),
    .lsu_addr_i   	(ex_lsu_addr       ),
    .lsu_wdata_i  	(ex_lsu_wdata      ),
`ifdef ysyx_25050136_VERILATOR_DPIC
    .dbg_op_i       (ex_dbg_op         ),
    .dbg_pc_i       (ex_dbg_pc         ),
    .dbg_inst_i     (ex_dbg_inst       ),
    .dbg_op_o       (mem_dbg_op        ),
    .dbg_pc_o       (mem_dbg_pc        ),
    .dbg_inst_o     (mem_dbg_inst      ),
`endif
    .lsu_en_o       (mem_lsu_en        ),
    .lsu_valid_o    (mem_lsu_valid     ),
    .rd_o         	(mem_rd            ),
    .rd_en_o      	(mem_rd_en         ),
    .gpr_wdata_o  	(mem_gpr_wdata     ),
    .req_rdata_i  	(mem_req_rdata_i   ),
    .req_ready_i  	(mem_req_ready_i   ),
    .req_addr_o   	(mem_req_addr_o    ),
    .req_valid_o  	(mem_req_valid_o   ),
    .req_ren_o    	(mem_req_ren_o     ),
    .req_wen_o    	(mem_req_wen_o     ),
    .req_mask_o   	(mem_req_mask_o    ),
    .req_size_o   	(mem_req_size_o    ),
    .req_use_o    	(mem_req_use_o     ),
    .req_wdata_o  	(mem_req_wdata_o   )
);

ysyx_25050136_WB #(
    .ADDR_WIDTH 	(ADDR_WIDTH  )
) u_ysyx_25050136_WB(
    .clk      	(clk            ),
    .reset      (reset          ),
`ifdef ysyx_25050136_VERILATOR_DPIC
    .dbg_op_i   (mem_dbg_op     ),
    .dbg_pc_i   (mem_dbg_pc     ),
    .dbg_inst_i (mem_dbg_inst   ),
`endif
    .wdata_i  	(mem_gpr_wdata  ),
    .waddr_i  	(mem_rd         ),
    .wen_i    	(mem_rd_en      ),
    .raddr1_i 	(id_raddr1      ),
    .raddr2_i 	(id_raddr2      ),
    .rdata1_o 	(wb_rdata1      ),
    .rdata2_o 	(wb_rdata2      )
);

endmodule
