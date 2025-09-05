`include "config.v"
import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);
import "DPI-C" function void find_ebreak();

module ysyx_25050136_NPC
#(
    TOP_ADDR_WIDTH = 5,
    TOP_DATA_WIDTH = 32
)
(
    input                                   clk,
    input                                 reset,
    // input  [TOP_DATA_WIDTH-1:0]          inst_i,
    // input  [TOP_DATA_WIDTH-1:0]     mem_rdata_i,
    output [TOP_DATA_WIDTH-1:0]     mem_wdata_o,
    output [TOP_DATA_WIDTH-1:0]      mem_addr_o,
    output                            mem_ren_o,
    output                            mem_wen_o,
    output [3:0]                    mem_wmask_o,
    output [TOP_DATA_WIDTH-1:0]            pc_o
);
//========================================
// 顶层信号定义
//========================================
// IF输出
wire [31:0] if2id_static_npc_o;
// ID输出
wire [TOP_ADDR_WIDTH-1:0] id2reg_raddr1_o,id2reg_raddr2_o,id2reg_rd_o;
wire id2reg_rd_en_o;
wire [`ysyx_25050136_FU_NUM-1:0] id2ex_fu_o;
wire [`ysyx_25050136_ALU_OP_NUM-1:0]  id2ex_alu_op_o;
wire [`ysyx_25050136_LSU_OP_NUM-1:0]  id2ex_lsu_op_o;
wire [`ysyx_25050136_BQU_OP_NUM-1:0]  id2ex_bqu_op_o;
wire [`ysyx_25050136_CSRU_OP_NUM-1:0] id2ex_csru_op_o;
wire [TOP_DATA_WIDTH-1:0] id2ex_alu_opd1_o, id2ex_alu_opd2_o, id2ex_lsu_opd1_o,
                          id2ex_bqu_opd1_o, id2ex_bqu_opd2_o, id2ex_csru_opd1_o;
wire [11:0]               id2ex_csru_opd2_o;
wire id2ex_mem_signed_o, id2ex_csru_wen_o, id2ex_csru_ren_o;
// REG输出
wire [TOP_DATA_WIDTH-1:0] reg2id_rdata1_o,reg2id_rdata2_o;
// EX输出
wire [TOP_DATA_WIDTH-1:0] ex2reg_gpr_data_o;
wire [TOP_DATA_WIDTH-1:0] ex2if_jump_addr_o;
wire ex2if_jump_en_o;
//========================================
// 使用DPI-C实现的取指和访存操作, 以及寻找ebreak
//========================================
reg [TOP_DATA_WIDTH-1:0] mem_rdata;
always @(*) begin
    if (mem_ren_o) begin // 有读写请求时
        mem_rdata = pmem_read(mem_addr_o);
    end else begin
        mem_rdata = 0;
    end
    if (mem_wen_o) begin // 有写请求时
        pmem_write(mem_addr_o, mem_wdata_o, {4'b0, mem_wmask_o});
    end
end
reg [31:0] inst;
always @(*) begin
    inst = pmem_read(pc_o);
end
always @(*) begin
    if(id2ex_csru_op_o[`ysyx_25050136_CSRU_EBREAK])
        find_ebreak();
end
//========================================
// 子模块
//========================================
ysyx_25050136_IF u_ysyx_25050136_IF(
    .clk             	(clk                ),
    .reset           	(reset              ),
    .dynamic_valid_i 	(ex2if_jump_en_o    ),
    .dynamic_npc_i   	(ex2if_jump_addr_o  ),
    .static_npc_o       (if2id_static_npc_o ),
    .pc_o            	(pc_o               )
);

ysyx_25050136_ID #(
    .ADDR_WIDTH(TOP_ADDR_WIDTH),
    .DATA_WIDTH(TOP_DATA_WIDTH)
)
u_ysyx_25050136_ID(
    .inst_i   	    (inst                 ),
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
    .mem_wmask_o   	(mem_wmask_o          ),
    .mem_signed_o  	(id2ex_mem_signed_o   ),
    .rd_o          	(id2reg_rd_o          ),
    .rd_en_o       	(id2reg_rd_en_o       )
);

ysyx_25050136_EX #(
    .DATA_WIDTH(TOP_DATA_WIDTH)
)
u_ysyx_25050136_EX(
    .clk          	(clk                 ),
    .reset        	(reset               ),
    .pc_i         	(pc_o                ),
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
    .mem_wmask_i    (mem_wmask_o         ),
    .mem_signed_i 	(id2ex_mem_signed_o  ),
    .mem_rdata_i  	(mem_rdata           ),
    .mem_ren_o    	(mem_ren_o           ),
    .mem_wen_o    	(mem_wen_o           ),
    .mem_wdata_o  	(mem_wdata_o         ),
    .mem_addr_o   	(mem_addr_o          ),
    .gpr_data_o   	(ex2reg_gpr_data_o   ),
    .jump_en_o    	(ex2if_jump_en_o     ),
    .jump_addr_o  	(ex2if_jump_addr_o   )
);


ysyx_25050136_RegisterFile#(
    .ADDR_WIDTH(TOP_ADDR_WIDTH),
    .DATA_WIDTH(TOP_DATA_WIDTH)
) 
u_ysyx_25050136_RegisterFile(
    .clk      	(clk                ),
    .reset      (reset              ),
    .wdata_i  	(ex2reg_gpr_data_o  ),
    .waddr_i  	(id2reg_rd_o        ),
    .wen_i      (id2reg_rd_en_o     ),
    .raddr1_i 	(id2reg_raddr1_o    ),
    .rdata1_o 	(reg2id_rdata1_o    ),
    .raddr2_i 	(id2reg_raddr2_o    ),
    .rdata2_o 	(reg2id_rdata2_o    )
);

endmodule
