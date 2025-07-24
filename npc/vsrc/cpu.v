`include "config.v"
import "DPI-C" function void find_ebreak();
module ysyx_25050136_NPC
#(
    ADDR_WIDTH = 5,
    DATA_WIDTH = 32
)
(
    input                                   clk,
    input                                 reset,
    input  [31:0]                        inst_i,
    input  [DATA_WIDTH-1:0]         mem_rdata_i,
    output [DATA_WIDTH-1:0]         mem_wdata_o,
    output [DATA_WIDTH-1:0]          mem_addr_o,
    output                            mem_wen_o,
    output [3:0]                    mem_mask_o,
    output [DATA_WIDTH-1:0]                pc_o,
    output                             iready_o,
    input                              ivalid_i,
    output                             mready_o,
    input                              mvalid_i
);
//========================================
// 顶层信号定义
//========================================
// IF输出
wire [DATA_WIDTH-1:0] if2id_static_npc_o;
wire [31:0] if2id_inst_o;
wire if2id_bvalid_o;
// ID输出
wire [ADDR_WIDTH-1:0] id2reg_raddr1_o,id2reg_raddr2_o,id2reg_rd_o;
wire id2reg_rd_en_o;
wire [`ysyx_25050136_FU_NUM-1:0] id2ex_fu_o;
wire [`ysyx_25050136_ALU_OP_NUM-1:0]  id2ex_alu_op_o;
wire [`ysyx_25050136_LSU_OP_NUM-1:0]  id2ex_lsu_op_o;
wire [`ysyx_25050136_BQU_OP_NUM-1:0]  id2ex_bqu_op_o;
wire [`ysyx_25050136_CSRU_OP_NUM-1:0] id2ex_csru_op_o;
wire [DATA_WIDTH-1:0] id2ex_alu_opd1_o, id2ex_alu_opd2_o, id2ex_lsu_opd1_o,
                          id2ex_bqu_opd1_o, id2ex_bqu_opd2_o, id2ex_csru_opd1_o;
wire [11:0]               id2ex_csru_opd2_o;
wire [DATA_WIDTH-1:0] id2ex_pc_o;
wire id2ex_mem_signed_o, id2ex_csru_wen_o, id2ex_csru_ren_o;
wire id2if_fready_o, id2ex_bvalid_o;
// REG输出
wire [DATA_WIDTH-1:0] reg2id_rdata1_o,reg2id_rdata2_o;
// EX输出
wire [DATA_WIDTH-1:0] ex2reg_gpr_data_o;
wire [DATA_WIDTH-1:0] ex2if_jump_addr_o;
wire ex2if_jump_en_o;
wire ex2id_fready_o;
wire ex2reg_gpr_wen_o;
wire ex2if_pc_updata_o;
//========================================
// 使用DPI-C实现的取指和访存操作, 以及寻找ebreak
//========================================
always @(*) begin
    if(id2ex_csru_op_o[`ysyx_25050136_CSRU_EBREAK])
        find_ebreak();
end
//========================================
// 子模块
//========================================
ysyx_25050136_IF #(
    .DATA_WIDTH(DATA_WIDTH)
)
u_ysyx_25050136_IF(
    .clk             	(clk                ),
    .reset           	(reset              ),
    .inst_i             (inst_i             ),
    .dynamic_valid_i 	(ex2if_jump_en_o    ),
    .dynamic_npc_i   	(ex2if_jump_addr_o  ),
    .static_npc_o       (if2id_static_npc_o ),
    .pc_o            	(pc_o               ),
    .inst_o             (if2id_inst_o       ),
    .pc_updata_i        (ex2if_pc_updata_o),
    .fvalid_i           (ivalid_i           ),
    .fready_o           (iready_o           ),
    .bvalid_o           (if2id_bvalid_o     ),
    .bready_i           (id2if_fready_o     )
);

ysyx_25050136_ID #(
    .ADDR_WIDTH(ADDR_WIDTH),
    .DATA_WIDTH(DATA_WIDTH)
)
u_ysyx_25050136_ID(
    .inst_i   	    (if2id_inst_o         ),
    .pc_i           (pc_o                 ),
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
    .mem_mask_o   	(mem_mask_o          ),
    .mem_signed_o  	(id2ex_mem_signed_o   ),
    .rd_o          	(id2reg_rd_o          ),
    .rd_en_o       	(id2reg_rd_en_o       ),
    .pc_o           (id2ex_pc_o           ),
    .fvalid_i       (if2id_bvalid_o       ),
    .fready_o       (id2if_fready_o       ),
    .bvalid_o       (id2ex_bvalid_o       ),
    .bready_i       (ex2id_fready_o       )
);

ysyx_25050136_EX #(
    .DATA_WIDTH(DATA_WIDTH)
)
u_ysyx_25050136_EX(
    .clk          	(clk                 ),
    .reset        	(reset               ),
    .pc_i         	(id2ex_pc_o          ),
    .rd_en_i        (id2reg_rd_en_o      ),
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
    .mem_mask_i    (mem_mask_o         ),
    .mem_signed_i 	(id2ex_mem_signed_o  ),
    .mem_rdata_i  	(mem_rdata_i         ),
    .mem_wen_o    	(mem_wen_o           ),
    .mem_wdata_o  	(mem_wdata_o         ),
    .mem_addr_o   	(mem_addr_o          ),
    .gpr_data_o   	(ex2reg_gpr_data_o   ),
    .gpr_wen_o      (ex2reg_gpr_wen_o    ),
    .jump_en_o    	(ex2if_jump_en_o     ),
    .jump_addr_o  	(ex2if_jump_addr_o   ),
    .mvalid_i       (mvalid_i            ),
    .mready_o       (mready_o            ),
    .fvalid_i       (id2ex_bvalid_o      ),
    .fready_o       (ex2id_fready_o      ),
    .pc_updata_o    (ex2if_pc_updata_o   )
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
