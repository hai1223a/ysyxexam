`include "config.v"
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
    wire [DATA_WIDTH-1:0] add_sub_op2 = op2_i;
    assign add_sub_result = add_sub_op1 + add_sub_op2;

    reg [DATA_WIDTH-1:0] out;
    always @(*) begin
        out = 0;
        case (1'b1)
            operation_i[`ysyx_25050136_ALU_ADD]: out = add_sub_result[DATA_WIDTH-1:0];
        endcase
    end

    assign out_o = en_i ? out : 0;
endmodule //ysyx_25050136_ALU
