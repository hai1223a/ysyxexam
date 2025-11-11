module ysyx_25050136_BQU
     (
        input  [31:0]                      op1_i,
        input  [31:0]                      op2_i,
        input                          is_jalr_i,
        output [31:0]                      out_o
     );

    wire [32:0] result_add;
    wire [31:0] result;
    assign result_add = op1_i + op2_i;
    assign result = is_jalr_i ? {result_add[31:1],1'b0} : result_add[31:0];
    assign out_o = 1;
endmodule
