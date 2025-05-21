`include "../vsrc/config.v"
module ysyx_25050136_EX
    #(
         DATA_WIDTH = 32
     )
     (
         input  [`ysyx_25050136_FU_NUM-1:0]         fu_i,
         input  [`ysyx_25050136_ALU_OP_NUM-1:0] alu_op_i,
         input  [DATA_WIDTH-1:0]                   op1_i,
         input  [DATA_WIDTH-1:0]                   op2_i,
         input  [DATA_WIDTH-1:0]             mem_rdata_i,
         output                                mem_ren_o,
         output                                mem_wen_o,
         output [2:0]                          mem_len_o,
         output [DATA_WIDTH-1:0]             mem_wdata_o,
         output [DATA_WIDTH-1:0]              mem_addr_o,
         output [DATA_WIDTH-1:0]              gpr_data_o,
         output                                jump_en_o,
         output [DATA_WIDTH-1:0]             jump_addr_o
     );
    // 选择功能部件
    //=========================================
    wire alu_en = fu_i[`ysyx_25050136_ALU];
    // output declaration of module ysyx_25050136_ALU
    wire [DATA_WIDTH-1:0] alu_out_o;
    
    ysyx_25050136_ALU u_ysyx_25050136_ALU(
        .op1_i       	(op1_i        ),
        .op2_i       	(op2_i        ),
        .operation_i 	(alu_op_i     ),
        .en_i        	(alu_en       ),
        .out_o       	(alu_out_o    )
    );
    
    assign mem_addr_o = 0;
    assign gpr_data_o = alu_out_o;
    assign jump_addr_o = 0;
    assign jump_en_o = 0;
    assign mem_wdata_o = mem_rdata_i;
    assign mem_wen_o = 0;
    assign mem_ren_o = 0;
    assign mem_len_o = 3'd4;

endmodule //ysyx_25050136_EX

