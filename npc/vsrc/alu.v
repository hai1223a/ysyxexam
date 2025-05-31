`include "../vsrc/config.v"
module ysyx_25050136_ALU
    #(
         DATA_WIDTH = 32
     )
     (
         input  [DATA_WIDTH-1:0]                      op1_i,
         input  [DATA_WIDTH-1:0]                      op2_i,
         input  [`ysyx_25050136_ALU_OP_NUM-1:0] operation_i,
         input                                         en_i,
         output [DATA_WIDTH-1:0]                      out_o
     );
    wire [DATA_WIDTH:0] add_sub_result;
    wire [DATA_WIDTH-1:0] add_sub_op1 = op1_i;
    wire [DATA_WIDTH-1:0] add_sub_op2 = operation_i[`ysyx_25050136_ALU_SUB] ? ~op2_i + 1 : op2_i;
    assign add_sub_result = $signed(add_sub_op1) + $signed(add_sub_op2);

    wire [DATA_WIDTH-1:0] op1_xor_op2 = op1_i ^ op2_i;
    wire [DATA_WIDTH-1:0] sra_result = $signed(op1_i) >>> op2_i[4:0];
    wire [DATA_WIDTH-1:0] sll_result = op1_i << op2_i[4:0];
    wire [DATA_WIDTH-1:0] srl_result = op1_i >> op2_i[4:0];

    reg [DATA_WIDTH-1:0] out;
    always @(*) begin
        out = 0;
        case (1'b1)
            operation_i[`ysyx_25050136_ALU_NOP  ]: out = op1_i;
            operation_i[`ysyx_25050136_ALU_ADD  ]: out = add_sub_result[DATA_WIDTH-1:0];
            operation_i[`ysyx_25050136_ALU_SUB  ]: out = add_sub_result[DATA_WIDTH-1:0];
            operation_i[`ysyx_25050136_ALU_XOR  ]: out = op1_xor_op2;
            operation_i[`ysyx_25050136_ALU_OR   ]: out = add_sub_op1 | add_sub_op2;
            operation_i[`ysyx_25050136_ALU_AND  ]: out = add_sub_op1 & add_sub_op2;
            operation_i[`ysyx_25050136_ALU_EQ   ]: out = !op1_xor_op2;
            operation_i[`ysyx_25050136_ALU_NEQ  ]: out = op1_xor_op2;
            operation_i[`ysyx_25050136_ALU_LEQ_U]: out = op1_i < op2_i;
            operation_i[`ysyx_25050136_ALU_GEQ_U]: out = op1_i >= op2_i;
            operation_i[`ysyx_25050136_ALU_LEQ  ]: out = $signed(op1_i) < $signed(op2_i);
            operation_i[`ysyx_25050136_ALU_GEQ  ]: out = $signed(op1_i) >= $signed(op2_i);
            operation_i[`ysyx_25050136_ALU_SRA  ]: out = sra_result;
            operation_i[`ysyx_25050136_ALU_SLL  ]: out = sll_result;
            operation_i[`ysyx_25050136_ALU_SRL  ]: out = srl_result;     
        endcase
    end

    assign out_o = en_i ? out : 0;
endmodule //ysyx_25050136_ALU
