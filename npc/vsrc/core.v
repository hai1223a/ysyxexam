module ysyx_25050136_NPCCORE
#(
    parameter ADDR_WIDTH = 4
)
(
    input                                     clk,
    input                                   reset,
    // 指令相关
    input                         inst_req_ready_i,
    output  [31:0]                inst_req_addr_o ,
    output                        inst_req_valid_o,
    input                         inst_ret_valid_i,
    input   [31:0]                inst_ret_addr_i ,
    input   [31:0]                inst_ret_rdata_i,
    output                        inst_ret_ready_o,
    output                            inst_flush_o,
    // 数据相关
    input    [31:0]               mem_ret_rdata_i,
    input                         mem_ret_ready_i,
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
// === 跳转 ===
wire flush0;
wire branch_valid;
wire [31:0] branch_npc;
// === 取操作数 ===
wire [ADDR_WIDTH-1:0]   raddr1;
wire [ADDR_WIDTH-1:0]   raddr2;
wire [31:0]             rdata1;
wire [31:0]             rdata2;
// === DBG ===
`ifdef ysyx_25050136_VERILATOR_DPIC
(* keep *) wire [31:0]                      id_dbg_inst;/* verilator public_flat */
(* keep *) wire [31:0]                        ex_dbg_pc;/* verilator public_flat */
(* keep *) wire [31:0]                      ex_dbg_inst;/* verilator public_flat */
(* keep *) wire [31:0]                       mem_dbg_pc;/* verilator public_flat */
(* keep *) wire [31:0]                     mem_dbg_inst;/* verilator public_flat */
(* keep *) wire                       mem_dbg_is_device;/* verilator public_flat */
`endif
// === 数据冒险 ===
wire [ADDR_WIDTH-1:0]   ex_waddr;
wire [ADDR_WIDTH-1:0]   mem_waddr;
// === ID和EX ===
wire                    id_ex_ready;
wire [31:0]             id_ex_dbg_inst;
wire [31:0]             id_ex_rdata1;
wire [ADDR_WIDTH-1:0]   id_ex_raddr1;
wire [31:0]             id_ex_rdata2;
wire [ADDR_WIDTH-1:0]   id_ex_raddr2;
wire [31:0]             id_ex_pc;
wire [31:0]             id_ex_imm;
wire [`ysyx_25050136_ALU_OP_NUM-1:0]  id_ex_alu_op;
wire [`ysyx_25050136_CSRU_OP_NUM-1:0] id_ex_csru_op;
wire                    id_ex_alu_op1_use_pc;
wire                    id_ex_alu_op2_use_imm;
wire                    id_ex_alu_op2_use_4;
wire                    id_ex_is_jalr;
wire                    id_ex_unconditional_jump;
wire                    id_ex_conditional_jump;
wire                    id_ex_lsu_ren;
wire                    id_ex_lsu_wen;
wire [3:0]              id_ex_lsu_mask;
wire                    id_ex_lsu_signed;
wire [11:0]             id_ex_csr_addr;
wire                    id_ex_csr_ren;
wire                    id_ex_csr_wen;
wire                    id_ex_csr_wdata_use_rs1;
wire [4:0]              id_ex_rs1;
wire [ADDR_WIDTH-1:0]   id_ex_rd;
wire                    id_ex_rd_en;
wire                    id_ex_valid;
// === EX和MEM ===
wire                    ex_mem_ready;
wire [ADDR_WIDTH-1:0]   ex_mem_rd;
wire                    ex_mem_rd_en;
wire [31:0]             ex_mem_gpr_wdata;
wire                    ex_mem_lsu_ren;
wire                    ex_mem_lsu_wen;
wire [3:0]              ex_mem_lsu_mask;
wire                    ex_mem_lsu_signed;
wire [31:0]             ex_mem_lsu_addr;
wire [31:0]             ex_mem_lsu_wdata;
wire                    ex_mem_valid;
// === MEM和WB ===
wire                    mem_wb_ready;
wire [ADDR_WIDTH-1:0]   mem_wb_rd;
wire                    mem_wb_rd_en;
wire [31:0]             mem_wb_gpr_wdata;
wire                    mem_wb_valid;

assign flush0 = branch_valid;
assign inst_flush_o = flush0;
//========================================
// 使用DPI-C实现的取指和访存操作, 以及寻找ebreak
//========================================
`ifdef ysyx_25050136_VERILATOR_DPIC
always @(*) begin
    if(mem_wb_valid & mem_wb_ready & (mem_dbg_inst == 32'h00100073)) begin
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

ysyx_25050136_IF u_ysyx_25050136_IF(
    .clk         	(clk              ),
    .reset       	(reset            ),
    .flush       	(flush0           ),
    .branch_npc  	(branch_npc       ),
    .out_ready_i 	(inst_req_ready_i ),
    .out_pc_o    	(inst_req_addr_o  ),
    .out_valid_o 	(inst_req_valid_o )
);

ysyx_25050136_ID #(
    .ADDR_WIDTH 	(ADDR_WIDTH)
) u_ysyx_25050136_ID (
    .clk                      	(clk                       ),
    .reset                    	(reset                     ),
    .flush                    	(flush0                    ),
    .in_valid_i               	(inst_ret_valid_i          ),
    .in_inst_i                	(inst_ret_rdata_i          ),
    .in_pc_i                  	(inst_ret_addr_i           ),
    .in_ready_o               	(inst_ret_ready_o          ),
    .ex_waddr_i               	(ex_waddr                  ),
    .mem_waddr_i              	(mem_waddr                 ),
    .out_ready_i              	(id_ex_ready               ),
    .out_raddr1_o             	(raddr1                    ),
    .out_raddr2_o             	(raddr2                    ),
    .out_rdata1_i             	(rdata1                    ),
    .out_rdata2_i             	(rdata2                    ),
`ifdef ysyx_25050136_VERILATOR_DPIC
    .out_dbg_inst_o           	(id_dbg_inst               ),
`endif
    .out_pc_o                 	(id_ex_pc                  ),
    .out_rdata1_o             	(id_ex_rdata1              ),
    .out_rdata2_o             	(id_ex_rdata2              ),
    .out_imm_o                	(id_ex_imm                 ),
    .out_alu_op_o             	(id_ex_alu_op              ),
    .out_csru_op_o            	(id_ex_csru_op             ),
    .out_alu_op1_use_pc_o     	(id_ex_alu_op1_use_pc      ),
    .out_alu_op2_use_imm_o    	(id_ex_alu_op2_use_imm     ),
    .out_alu_op2_use_4_o      	(id_ex_alu_op2_use_4       ),
    .out_is_jalr_o            	(id_ex_is_jalr             ),
    .out_unconditional_jump_o 	(id_ex_unconditional_jump  ),
    .out_conditional_jump_o   	(id_ex_conditional_jump    ),
    .out_lsu_ren_o            	(id_ex_lsu_ren             ),
    .out_lsu_wen_o            	(id_ex_lsu_wen             ),
    .out_lsu_mask_o           	(id_ex_lsu_mask            ),
    .out_lsu_signed_o         	(id_ex_lsu_signed          ),
    .out_csr_addr_o           	(id_ex_csr_addr            ),
    .out_csr_ren_o            	(id_ex_csr_ren             ),
    .out_csr_wen_o            	(id_ex_csr_wen             ),
    .out_csr_wdata_use_rs1_o  	(id_ex_csr_wdata_use_rs1   ),
    .out_rs1_o                	(id_ex_rs1                 ),
    .out_rd_o                 	(id_ex_rd                  ),
    .out_rd_en_o              	(id_ex_rd_en               ),
    .out_valid_o              	(id_ex_valid               )
);

ysyx_25050136_EX #(
    .ADDR_WIDTH 	(ADDR_WIDTH)
) u_ysyx_25050136_EX (
    .clk                     	(clk                      ),
    .reset                   	(reset                    ),
    .flush                   	(0                    ),
    .in_valid_i              	(id_ex_valid              ),
    .in_pc_i                 	(id_ex_pc                 ),
    .in_rdata1_i             	(id_ex_rdata1             ),
    .in_rdata2_i             	(id_ex_rdata2             ),
    .in_imm_i                	(id_ex_imm                ),
    .in_alu_op_i             	(id_ex_alu_op             ),
    .in_csru_op_i            	(id_ex_csru_op            ),
    .in_alu_op1_use_pc_i     	(id_ex_alu_op1_use_pc     ),
    .in_alu_op2_use_imm_i    	(id_ex_alu_op2_use_imm    ),
    .in_alu_op2_use_4_i      	(id_ex_alu_op2_use_4      ),
    .in_is_jalr_i            	(id_ex_is_jalr            ),
    .in_unconditional_jump_i 	(id_ex_unconditional_jump ),
    .in_conditional_jump_i   	(id_ex_conditional_jump   ),
    .in_lsu_ren_i            	(id_ex_lsu_ren            ),
    .in_lsu_wen_i            	(id_ex_lsu_wen            ),
    .in_lsu_mask_i           	(id_ex_lsu_mask           ),
    .in_lsu_signed_i         	(id_ex_lsu_signed         ),
    .in_csr_addr_i           	(id_ex_csr_addr           ),
    .in_csr_ren_i            	(id_ex_csr_ren            ),
    .in_csr_wen_i            	(id_ex_csr_wen            ),
    .in_csr_wdata_use_rs1_i  	(id_ex_csr_wdata_use_rs1  ),
    .in_rs1_i                	(id_ex_rs1                ),
    .in_rd_i                 	(id_ex_rd                 ),
    .in_rd_en_i              	(id_ex_rd_en              ),
    .in_ready_o              	(id_ex_ready              ),
`ifdef ysyx_25050136_VERILATOR_DPIC
    .in_dbg_inst_i           	(id_dbg_inst              ),
    .out_dbg_pc_o            	(ex_dbg_pc                ),
    .out_dbg_inst_o          	(ex_dbg_inst              ),
`endif
    .out_ready_i             	(ex_mem_ready             ),
    .out_rd_o                	(ex_mem_rd                ),
    .out_rd_en_o             	(ex_mem_rd_en             ),
    .out_gpr_wdata_o         	(ex_mem_gpr_wdata         ),
    .out_lsu_ren_o           	(ex_mem_lsu_ren           ),
    .out_lsu_wen_o           	(ex_mem_lsu_wen           ),
    .out_lsu_mask_o          	(ex_mem_lsu_mask          ),
    .out_lsu_signed_o        	(ex_mem_lsu_signed        ),
    .out_lsu_addr_o          	(ex_mem_lsu_addr          ),
    .out_lsu_wdata_o         	(ex_mem_lsu_wdata         ),
    .out_valid_o             	(ex_mem_valid             ),
    .branch_valid_o          	(branch_valid             ),
    .branch_npc_o            	(branch_npc               ),
    .waddr_o                 	(ex_waddr                 )
);


ysyx_25050136_MEM #(
    .ADDR_WIDTH 	(ADDR_WIDTH)
) u_ysyx_25050136_MEM (
    .clk             	(clk                ),
    .reset           	(reset              ),
    .flush           	(0              ),
    .in_valid_i      	(ex_mem_valid       ),
    .in_rd_i         	(ex_mem_rd          ),
    .in_rd_en_i      	(ex_mem_rd_en       ),
    .in_gpr_wdata_i  	(ex_mem_gpr_wdata   ),
    .in_req_ren_i    	(ex_mem_lsu_ren     ),
    .in_req_wen_i    	(ex_mem_lsu_wen     ),
    .in_req_mask_i   	(ex_mem_lsu_mask    ),
    .in_lsu_signed_i 	(ex_mem_lsu_signed  ),
    .in_req_addr_i   	(ex_mem_lsu_addr    ),
    .in_lsu_wdata_i  	(ex_mem_lsu_wdata   ),
    .in_ready_o      	(ex_mem_ready       ),
`ifdef ysyx_25050136_VERILATOR_DPIC
    .in_dbg_pc_i     	(ex_dbg_pc          ),
    .in_dbg_inst_i   	(ex_dbg_inst        ),
    .out_dbg_pc_o    	(mem_dbg_pc         ),
    .out_dbg_inst_o  	(mem_dbg_inst       ),
    .out_dbg_is_device_o(mem_dbg_is_device  ),
`endif
    .out_ready_i     	(mem_wb_ready       ),
    .out_rd_o        	(mem_wb_rd          ),
    .out_rd_en_o     	(mem_wb_rd_en       ),
    .out_gpr_wdata_o 	(mem_wb_gpr_wdata   ),
    .out_valid_o     	(mem_wb_valid       ),
    .waddr_o         	(mem_waddr          ),
    .ret_rdata_i     	(mem_ret_rdata_i    ),
    .ret_ready_i     	(mem_ret_ready_i    ),
    .req_addr_o      	(mem_req_addr_o     ),
    .req_valid_o     	(mem_req_valid_o    ),
    .req_ren_o       	(mem_req_ren_o      ),
    .req_wen_o       	(mem_req_wen_o      ),
    .req_mask_o      	(mem_req_mask_o     ),
    .req_size_o      	(mem_req_size_o     ),
    .req_use_o       	(mem_req_use_o      ),
    .req_wdata_o     	(mem_req_wdata_o    )
);

ysyx_25050136_WB #(
    .ADDR_WIDTH 	(4  )
) u_ysyx_25050136_WB (
    .clk             	(clk              ),
    .reset           	(reset            ),
    .in_valid_i      	(mem_wb_valid     ),
    .in_rd_i         	(mem_wb_rd        ),
    .in_rd_en_i      	(mem_wb_rd_en     ),
    .in_gpr_wdata_i  	(mem_wb_gpr_wdata ),
    .in_ready_o      	(mem_wb_ready     ),
`ifdef ysyx_25050136_VERILATOR_DPIC
    .in_dbg_pc_i     	(mem_dbg_pc       ),
    .in_dbg_inst_i   	(mem_dbg_inst     ),
    .in_dbg_is_device_i (mem_dbg_is_device),
`endif
    .raddr1_i  	        (raddr1           ),
    .raddr2_i     	    (raddr2           ),
    .rdata1_o           (rdata1           ),
    .rdata2_o     	    (rdata2           )
);

endmodule
