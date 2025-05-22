`include "../vsrc/config.v"
module ysyx_25050136_EX
    #(
         DATA_WIDTH = 32
     )
     (
         input  [`ysyx_25050136_FU_NUM-1:0]         fu_i,
         input  [`ysyx_25050136_ALU_OP_NUM-1:0] alu_op_i,
         input  [`ysyx_25050136_LSU_OP_NUM-1:0] lsu_op_i,
         input  [`ysyx_25050136_BQU_OP_NUM-1:0] bqu_op_i,
         input  [DATA_WIDTH-1:0]                   op1_i,
         input  [DATA_WIDTH-1:0]                   op2_i,
         input  [DATA_WIDTH-1:0]                   op3_i,
         input  [DATA_WIDTH-1:0]                   op4_i,
         input  [DATA_WIDTH-1:0]                   op5_i,
         input  [2:0]                          mem_len_i,
         input                              mem_signed_i,
         input  [DATA_WIDTH-1:0]             mem_rdata_i,
         output                                mem_ren_o,
         output                                mem_wen_o,
         output [DATA_WIDTH-1:0]             mem_wdata_o,
         output [DATA_WIDTH-1:0]              mem_addr_o,
         output [DATA_WIDTH-1:0]              gpr_data_o,
         output                                jump_en_o,
         output [DATA_WIDTH-1:0]             jump_addr_o
     );
    //===================================================
    // ALU
    //===================================================
    wire alu_en = fu_i[`ysyx_25050136_ALU];
    wire [DATA_WIDTH-1:0] alu_out_o;

    ysyx_25050136_ALU u_ysyx_25050136_ALU(
        .op1_i       	(op1_i        ),
        .op2_i       	(op2_i        ),
        .operation_i 	(alu_op_i     ),
        .en_i        	(alu_en       ),
        .out_o       	(alu_out_o    )
    );
    //===================================================
    // LSU
    //===================================================
    wire lsu_en = fu_i[`ysyx_25050136_LSU];
    wire [DATA_WIDTH-1:0] load_data_o;
    assign mem_ren_o = lsu_en & lsu_op_i[`ysyx_25050136_LSU_LOAD];
    assign mem_wen_o = lsu_en & lsu_op_i[`ysyx_25050136_LSU_STORE];
    assign mem_addr_o = alu_out_o;

    ysyx_25050136_LSU u_ysyx_25050136_LSU(
        .mem_len_i    	(mem_len_i     ),
        .mem_signed_i 	(mem_signed_i  ),
        .store_data_i 	(op5_i         ),
        .mem_rdata_i  	(mem_rdata_i   ),
        .mem_wdata_o  	(mem_wdata_o   ),
        .load_data_o  	(load_data_o   )
    );
    //===================================================
    // BQU
    //===================================================
    wire bqu_en = fu_i[`ysyx_25050136_BQU];
    assign jump_en_o = bqu_op_i[`ysyx_25050136_BQU_JALR] | bqu_op_i[`ysyx_25050136_BQU_JAL] |
                       (bqu_en & |alu_out_o) ;

    ysyx_25050136_BQU u_ysyx_25050136_BQU(
        .op1_i       	(op3_i         ),
        .op2_i       	(op4_i         ),
        .operation_i 	(bqu_op_i      ),
        .en_i        	(bqu_en        ),
        .out_o       	(jump_addr_o   )
    );
    //===================================================
    // 寄存器
    //===================================================
    assign gpr_data_o = lsu_op_i[`ysyx_25050136_LSU_LOAD] ? load_data_o : alu_out_o;

endmodule //ysyx_25050136_EX
