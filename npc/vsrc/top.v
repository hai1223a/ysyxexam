`include "config.v"
import "DPI-C" function void find_ebreak(input bit find);
module ysyx_25050136_NPC
#(
    TOP_ADDR_WIDTH = 5,
    TOP_DATA_WIDTH = 32
)
(
    input                                   clk,
    input                                 reset,
    input  [TOP_DATA_WIDTH-1:0]          inst_i,
    input  [TOP_DATA_WIDTH-1:0]     mem_rdata_i,
    output [TOP_DATA_WIDTH-1:0]     mem_wdata_o,
    output [TOP_DATA_WIDTH-1:0]      mem_addr_o,
    output                            mem_ren_o,
    output                            mem_wen_o,
    output [2:0]                      mem_len_o,
    output [TOP_DATA_WIDTH-1:0]            pc_o
);
//========================================
// 顶层信号定义
//========================================
// ID输出
wire [TOP_ADDR_WIDTH-1:0] id2reg_raddr1_o,id2reg_raddr2_o,id2reg_rd_o;
wire [`ysyx_25050136_FU_NUM-1:0] id2ex_fu_o;
wire [`ysyx_25050136_ALU_OP_NUM-1:0] id2ex_alu_op_o;
wire [TOP_DATA_WIDTH-1:0] id2ex_op1_o,id2ex_op2_o;
wire find_ebreak_o;
// REG输出
wire [TOP_DATA_WIDTH-1:0] reg2id_rdata1_o,reg2id_rdata2_o;
// EX输出
wire [TOP_DATA_WIDTH-1:0] ex2reg_gpr_data_o;
wire [TOP_DATA_WIDTH-1:0] ex2if_jump_addr_o;
wire ex2if_jump_en_o;

//========================================
// 顶层一些操作
//========================================
always @(*) begin
    find_ebreak(find_ebreak_o);
end
//========================================
ysyx_25050136_IF u_ysyx_25050136_IF(
    .clk             	(clk              ),
    .reset           	(reset            ),
    .dynamic_valid_i 	(ex2if_jump_en_o  ),
    .dynamic_npc_i   	(ex2if_jump_addr_o),
    .pc_o            	(pc_o             )
);

ysyx_25050136_ID #(
    .ADDR_WIDTH(TOP_ADDR_WIDTH),
    .DATA_WIDTH(TOP_DATA_WIDTH)
)
u_ysyx_25050136_ID(
    .inst_i   	    (inst_i    ),
    .rdata1_i 	    (reg2id_rdata1_o  ),
    .raddr1_o 	    (id2reg_raddr1_o  ),
    .rdata2_i 	    (reg2id_rdata2_o  ),
    .raddr2_o 	    (id2reg_raddr2_o  ),
    .fu_o     	    (id2ex_fu_o      ),
    .alu_op_o 	    (id2ex_alu_op_o  ),
    .op1_o    	    (id2ex_op1_o     ),
    .op2_o    	    (id2ex_op2_o     ),
    .rd_o     	    (id2reg_rd_o      ),
    .find_ebreak_o  (find_ebreak_o  )
);

ysyx_25050136_EX #(
    .DATA_WIDTH(TOP_DATA_WIDTH)
)
u_ysyx_25050136_EX(
    .fu_i       	(id2ex_fu_o        ),
    .alu_op_i   	(id2ex_alu_op_o    ),
    .op1_i      	(id2ex_op1_o       ),
    .op2_i      	(id2ex_op2_o       ),
    .mem_rdata_i    (mem_rdata_i       ),
    .mem_wdata_o    (mem_wdata_o       ),
    .mem_addr_o 	(mem_addr_o        ),
    .mem_ren_o      (mem_ren_o),
    .mem_wen_o      (mem_wen_o),
    .mem_len_o      (mem_len_o),
    .gpr_data_o 	(ex2reg_gpr_data_o ),
    .jump_en_o      (ex2if_jump_en_o   ),
    .jump_addr_o    (ex2if_jump_addr_o )
);

ysyx_25050136_RegisterFile#(
    .ADDR_WIDTH(TOP_ADDR_WIDTH),
    .DATA_WIDTH(TOP_DATA_WIDTH)
) 
u_ysyx_25050136_RegisterFile(
    .clk      	(clk       ),
    .wdata_i  	(ex2reg_gpr_data_o   ),
    .waddr_i  	(id2reg_rd_o   ),
    .raddr1_i 	(id2reg_raddr1_o  ),
    .rdata1_o 	(reg2id_rdata1_o  ),
    .raddr2_i 	(id2reg_raddr2_o  ),
    .rdata2_o 	(reg2id_rdata2_o  )
);

endmodule
