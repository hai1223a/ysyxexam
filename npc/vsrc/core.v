module ysyx_25050136_NPCCORE
#(
    parameter ADDR_WIDTH = 4,
    parameter DATA_WIDTH = 32
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
// IF输出
wire [DATA_WIDTH-1:0] if2id_static_npc_o, if2id_pc_o;
wire [31:0] if2id_inst_o;
wire if2ex_bvalid_o;
// ID输出
wire [ADDR_WIDTH-1:0] id2reg_raddr1_o,id2reg_raddr2_o,id2reg_rd_o;
wire [DATA_WIDTH-1:0] id2ex_pc_o;
wire id2reg_rd_en_o;
wire [`ysyx_25050136_FU_NUM-1:0] id2ex_fu_o;
wire [`ysyx_25050136_ALU_OP_NUM-1:0]  id2ex_alu_op_o;
wire [`ysyx_25050136_LSU_OP_NUM-1:0]  id2ex_lsu_op_o;
wire [`ysyx_25050136_BQU_OP_NUM-1:0]  id2ex_bqu_op_o;
wire [`ysyx_25050136_CSRU_OP_NUM-1:0] id2ex_csru_op_o;
wire [DATA_WIDTH-1:0] id2ex_alu_opd1_o, id2ex_alu_opd2_o, id2ex_lsu_opd1_o,
                          id2ex_bqu_opd1_o, id2ex_bqu_opd2_o, id2ex_csru_opd1_o;
wire [11:0]               id2ex_csru_opd2_o;
wire id2ex_mem_signed_o, id2ex_csru_wen_o, id2ex_csru_ren_o;
wire [3:0] id2ex_mem_mask_o;
// REG输出
wire [DATA_WIDTH-1:0] reg2id_rdata1_o,reg2id_rdata2_o;
// EX输出
wire [DATA_WIDTH-1:0] ex2reg_gpr_data_o;
wire [DATA_WIDTH-1:0] ex2if_jump_addr_o;
wire ex2if_jump_en_o;
wire ex2if_fready_o;
wire ex2reg_gpr_wen_o;
wire ex2if_pc_updata_o;
//========================================
// 使用DPI-C实现的取指和访存操作, 以及寻找ebreak
//========================================
`ifdef ysyx_25050136_VERILATOR_DPIC
always @(*) begin
    if(id2ex_csru_op_o[`ysyx_25050136_CSRU_EBREAK]) begin
        find_ebreak();
    end
end
always @(posedge clk) begin
    if(!reset) begin
        if(if2ex_bvalid_o) begin
            if(id2ex_fu_o[`ysyx_25050136_CSRU]) begin
                csru_get();
            end else if(id2ex_fu_o[`ysyx_25050136_LSU]) begin
                lsu_get();
            end else if(id2ex_fu_o[`ysyx_25050136_BQU]) begin
                bqu_get();
            end else if(id2ex_fu_o[`ysyx_25050136_ALU]) begin
                alu_get();
            end
        end
    end
end
`endif
//========================================
// 子模块
//========================================
ysyx_25050136_IF #(
    .DATA_WIDTH(DATA_WIDTH)
)
u_ysyx_25050136_IF(
    .clk             	(clk                 ),
    .reset          	(reset               ),
    .req_addr_o         (inst_req_addr_o     ),
    .req_rdata_i        (inst_req_rdata_i    ),
    .req_ready_i        (inst_req_ready_i    ),
    .req_valid_o        (inst_req_valid_o    ),
    .req_use_o          (inst_req_use_o      ),
    .dynamic_valid_i 	(ex2if_jump_en_o     ),
    .dynamic_npc_i   	(ex2if_jump_addr_o   ),
    .static_npc_o    	(if2id_static_npc_o  ),
    .inst_o          	(if2id_inst_o        ),
    .pc_o               (if2id_pc_o          ),
    .bready_i        	(ex2if_fready_o      ),
    .bvalid_o        	(if2ex_bvalid_o      )
);


ysyx_25050136_ID #(
    .ADDR_WIDTH(ADDR_WIDTH),
    .DATA_WIDTH(DATA_WIDTH)
)
u_ysyx_25050136_ID(
    .clk            (clk                  ),
    .reset          (reset                ),
    .inst_i   	    (if2id_inst_o         ),
    .pc_i           (if2id_pc_o           ),
    .static_npc_i   (if2id_static_npc_o   ),
    .rdata1_i 	    (reg2id_rdata1_o      ),
    .raddr1_o 	    (id2reg_raddr1_o      ),
    .rdata2_i 	    (reg2id_rdata2_o      ),
    .raddr2_o 	    (id2reg_raddr2_o      ),
    .fu_o     	    (id2ex_fu_o           ),
    .alu_op_o 	    (id2ex_alu_op_o       ),
    .lsu_op_o       (id2ex_lsu_op_o       ),
    .bqu_op_o       (id2ex_bqu_op_o       ),
    .csru_op_o    	(id2ex_csru_op_o      ),
    .alu_opd1_o     (id2ex_alu_opd1_o     ),
    .alu_opd2_o     (id2ex_alu_opd2_o     ),
    .bqu_opd1_o     (id2ex_bqu_opd1_o     ),
    .bqu_opd2_o     (id2ex_bqu_opd2_o     ),
    .lsu_opd1_o   	(id2ex_lsu_opd1_o     ),
    .csru_opd1_o  	(id2ex_csru_opd1_o    ),
    .csru_opd2_o  	(id2ex_csru_opd2_o    ),
    .csru_ren_o   	(id2ex_csru_ren_o     ),
    .csru_wen_o   	(id2ex_csru_wen_o     ),
    .mem_mask_o   	(id2ex_mem_mask_o     ),
    .mem_signed_o  	(id2ex_mem_signed_o   ),
    .cache_flush_o  (inst_req_flush_o     ),
    .rd_o          	(id2reg_rd_o          ),
    .rd_en_o       	(id2reg_rd_en_o       ),
    .pc_o           (id2ex_pc_o           )
);

// output declaration of module ysyx_25050136_EX
wire m_awvalid_o;
wire [DATA_WIDTH-1:0] m_awaddr_o;
wire m_wvalid_o;
wire [DATA_WIDTH-1:0] m_wdata_o;
wire [3:0] m_wstrb_o;
wire m_bready_o;
wire m_arvalid_o;
wire [DATA_WIDTH-1:0] m_araddr_o;
wire m_rready_o;
wire gpr_wen_o;
wire [DATA_WIDTH-1:0] gpr_data_o;
wire jump_en_o;
wire [DATA_WIDTH-1:0] jump_addr_o;
wire fready_o;

ysyx_25050136_EX #(
    .DATA_WIDTH(DATA_WIDTH)
)
u_ysyx_25050136_EX(
    .clk          	(clk                 ),
    .reset        	(reset               ),
    .req_rdata_i    (mem_req_rdata_i     ),
    .req_ready_i    (mem_req_ready_i     ),
    .req_addr_o     (mem_req_addr_o      ),
    .req_valid_o    (mem_req_valid_o     ),
    .req_ren_o      (mem_req_ren_o       ),
    .req_wen_o      (mem_req_wen_o       ),
    .req_mask_o     (mem_req_mask_o      ),
    .req_size_o     (mem_req_size_o      ),
    .req_use_o      (mem_req_use_o       ),
    .req_wdata_o    (mem_req_wdata_o     ),
    .pc_i         	(id2ex_pc_o          ),
    .rd_en_i      	(id2reg_rd_en_o      ),
    .fu_i         	(id2ex_fu_o          ),
    .alu_op_i     	(id2ex_alu_op_o      ),
    .lsu_op_i     	(id2ex_lsu_op_o      ),
    .bqu_op_i     	(id2ex_bqu_op_o      ),
    .csru_op_i    	(id2ex_csru_op_o     ),
    .alu_opd1_i   	(id2ex_alu_opd1_o    ),
    .alu_opd2_i   	(id2ex_alu_opd2_o    ),
    .bqu_opd1_i   	(id2ex_bqu_opd1_o    ),
    .bqu_opd2_i   	(id2ex_bqu_opd2_o    ),
    .lsu_opd1_i   	(id2ex_lsu_opd1_o    ),
    .csru_opd1_i  	(id2ex_csru_opd1_o   ),
    .csru_opd2_i  	(id2ex_csru_opd2_o   ),
    .csru_wen_i   	(id2ex_csru_wen_o    ),
    .csru_ren_i   	(id2ex_csru_ren_o    ),
    .mem_mask_i   	(id2ex_mem_mask_o    ),
    .mem_signed_i 	(id2ex_mem_signed_o  ),
    .gpr_wen_o    	(ex2reg_gpr_wen_o    ),
    .gpr_data_o   	(ex2reg_gpr_data_o   ),
    .jump_en_o    	(ex2if_jump_en_o     ),
    .jump_addr_o  	(ex2if_jump_addr_o   ),
    .fvalid_i     	(if2ex_bvalid_o      ),
    .fready_o     	(ex2if_fready_o      )
);


ysyx_25050136_RegisterFile#(
    .ADDR_WIDTH(ADDR_WIDTH),
    .DATA_WIDTH(DATA_WIDTH)
) 
u_ysyx_25050136_RegisterFile(
    .clk      	(clk                ),
    .reset      (reset              ),
    .wdata_i  	(ex2reg_gpr_data_o  ),
    .waddr_i  	(id2reg_rd_o        ),
    .wen_i      (ex2reg_gpr_wen_o   ),
    .raddr1_i 	(id2reg_raddr1_o    ),
    .rdata1_o 	(reg2id_rdata1_o    ),
    .raddr2_i 	(id2reg_raddr2_o    ),
    .rdata2_o 	(reg2id_rdata2_o    )
);

endmodule
