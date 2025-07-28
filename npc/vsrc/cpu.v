`include "config.v"
import "DPI-C" function void find_ebreak();
module ysyx_25050136_NPC
#(
    ADDR_WIDTH = 5,
    DATA_WIDTH = 32
)
(
    input                                     clk,
    input                                   reset,
    // 指令相关
    // 读地址               
    output                         inst_arvalid_o,
    input                          inst_arready_i,
    output    [DATA_WIDTH-1:0]      inst_araddr_o,
    // 读数据                
    input                           inst_rvalid_i,
    output                          inst_rready_o,
    input     [DATA_WIDTH-1:0]       inst_rdata_i,
    input     [1:0]                  inst_rresp_i, 
    // 数据相关
    // 写地址
    output                          mem_awvalid_o,
    input                           mem_awready_i,
    output    [DATA_WIDTH-1:0]       mem_awaddr_o,
    // 写数据             
    output                           mem_wvalid_o,
    input                            mem_wready_i,
    output    [DATA_WIDTH-1:0]        mem_wdata_o,
    output    [3:0]                   mem_wstrb_o,
    // 写响应               
    input                            mem_bvalid_i,
    output                           mem_bready_o,
    input     [1:0]                   mem_bresp_i,
    // 读地址               
    output                          mem_arvalid_o,
    input                           mem_arready_i,
    output    [DATA_WIDTH-1:0]       mem_araddr_o,
    // 读数据                
    input                            mem_rvalid_i,
    output                           mem_rready_o,
    input     [DATA_WIDTH-1:0]        mem_rdata_i,
    input     [1:0]                   mem_rresp_i
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
wire [3:0] id2ex_mem_mask_o;
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
    .clk             	(clk                 ),
    .resetn          	(~reset              ),
    .m_arvalid_o     	(inst_arvalid_o      ),
    .m_arready_i     	(inst_arready_i      ),
    .m_araddr_o      	(inst_araddr_o       ),
    .m_rvalid_i      	(inst_rvalid_i       ),
    .m_rready_o      	(inst_rready_o       ),
    .m_rdata_i       	(inst_rdata_i        ),
    .m_rresp_i       	(inst_rresp_i        ),
    .dynamic_valid_i 	(ex2if_jump_en_o     ),
    .dynamic_npc_i   	(ex2if_jump_addr_o   ),
    .static_npc_o    	(if2id_static_npc_o  ),
    .inst_o          	(if2id_inst_o        ),
    .bready_i        	(id2if_fready_o      ),
    .bvalid_o        	(if2id_bvalid_o      )
);



ysyx_25050136_ID #(
    .ADDR_WIDTH(ADDR_WIDTH),
    .DATA_WIDTH(DATA_WIDTH)
)
u_ysyx_25050136_ID(
    .inst_i   	    (if2id_inst_o         ),
    .pc_i           (inst_araddr_o        ),
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
    .rd_o          	(id2reg_rd_o          ),
    .rd_en_o       	(id2reg_rd_en_o       ),
    .pc_o           (id2ex_pc_o           ),
    .fvalid_i       (if2id_bvalid_o       ),
    .fready_o       (id2if_fready_o       ),
    .bvalid_o       (id2ex_bvalid_o       ),
    .bready_i       (ex2id_fready_o       )
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
    .m_awvalid_o  	(mem_awvalid_o       ),
    .m_awready_i  	(mem_awready_i       ),
    .m_awaddr_o   	(mem_awaddr_o        ),
    .m_wvalid_o   	(mem_wvalid_o        ),
    .m_wready_i   	(mem_wready_i        ),
    .m_wdata_o    	(mem_wdata_o         ),
    .m_wstrb_o    	(mem_wstrb_o         ),
    .m_bvalid_i   	(mem_bvalid_i        ),
    .m_bready_o   	(mem_bready_o        ),
    .m_bresp_i    	(mem_bresp_i         ),
    .m_arvalid_o  	(mem_arvalid_o       ),
    .m_arready_i  	(mem_arready_i       ),
    .m_araddr_o   	(mem_araddr_o        ),
    .m_rvalid_i   	(mem_rvalid_i        ),
    .m_rready_o   	(mem_rready_o        ),
    .m_rdata_i    	(mem_rdata_i         ),
    .m_rresp_i    	(mem_rresp_i         ),
    .mem_mask_i   	(id2ex_mem_mask_o    ),
    .mem_signed_i 	(id2ex_mem_signed_o  ),
    .gpr_wen_o    	(ex2reg_gpr_wen_o    ),
    .gpr_data_o   	(ex2reg_gpr_data_o   ),
    .jump_en_o    	(ex2if_jump_en_o     ),
    .jump_addr_o  	(ex2if_jump_addr_o   ),
    .fvalid_i     	(id2ex_bvalid_o      ),
    .fready_o     	(ex2id_fready_o      )
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
