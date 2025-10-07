module ysyx_25050136_ALU
     (
         input  [31:0]                          op1_i,
         input  [31:0]                          op2_i,
         input  [`ysyx_25050136_ALU_OP_NUM-1:0] op_i,
         output [31:0]                          out_o
     );
    wire [32:0] add_sub_result;
    wire [31:0] add_sub_op1 = op1_i;
    wire [31:0] add_sub_op2 = op_i[`ysyx_25050136_ALU_SUB] ? ~op2_i + 1 : op2_i;
    assign add_sub_result = $signed(add_sub_op1) + $signed(add_sub_op2);

    wire [31:0] op1_xor_op2 = op1_i ^ op2_i;
    wire [31:0] sra_result = $signed(op1_i) >>> op2_i[4:0];
    wire [31:0] sll_result = op1_i << op2_i[4:0];
    wire [31:0] srl_result = op1_i >> op2_i[4:0];
    
    reg [31:0] out;
    always @(*) begin
        case (1'b1)
            op_i[`ysyx_25050136_ALU_ADD  ]: out = add_sub_result[31:0];
            op_i[`ysyx_25050136_ALU_SUB  ]: out = add_sub_result[31:0];
            op_i[`ysyx_25050136_ALU_XOR  ]: out = op1_xor_op2;
            op_i[`ysyx_25050136_ALU_OR   ]: out = add_sub_op1 | add_sub_op2;
            op_i[`ysyx_25050136_ALU_AND  ]: out = add_sub_op1 & add_sub_op2;
            op_i[`ysyx_25050136_ALU_EQ   ]: out = {{31{1'b0}}, (~|op1_xor_op2)};
            op_i[`ysyx_25050136_ALU_NEQ  ]: out = {{31{1'b0}}, (|op1_xor_op2)};
            op_i[`ysyx_25050136_ALU_LEQ_U]: out = {{31{1'b0}},(op1_i < op2_i)};
            op_i[`ysyx_25050136_ALU_GEQ_U]: out = {{31{1'b0}},(op1_i >= op2_i)};
            op_i[`ysyx_25050136_ALU_LEQ  ]: out = {{31{1'b0}},($signed(op1_i) < $signed(op2_i))};
            op_i[`ysyx_25050136_ALU_GEQ  ]: out = {{31{1'b0}},($signed(op1_i) >= $signed(op2_i))};
            op_i[`ysyx_25050136_ALU_SRA  ]: out = sra_result;
            op_i[`ysyx_25050136_ALU_SLL  ]: out = sll_result;
            op_i[`ysyx_25050136_ALU_SRL  ]: out = srl_result;
            op_i[`ysyx_25050136_ALU_OPD2 ]: out = op2_i;
            default:                        out = 0;     
        endcase
    end
    assign out_o = out;
endmodule //ysyx_25050136_ALU
