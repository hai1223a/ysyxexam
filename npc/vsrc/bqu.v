module ysyx_25050136_BQU
    #(
        parameter DATA_WIDTH = 32
     )
     (
         input  [DATA_WIDTH-1:0]                      op1_i,
         input  [DATA_WIDTH-1:0]                      op2_i,
         input  [`ysyx_25050136_BQU_OP_NUM-1:0] operation_i,
         input                                         en_i,
         output [DATA_WIDTH-1:0]                      out_o
     );

    wire [DATA_WIDTH:0] result_add = op1_i + op2_i;
    wire [DATA_WIDTH-1:0] result = operation_i[`ysyx_25050136_BQU_JALR] ? 
                                  {result_add[DATA_WIDTH-1:1],1'b0} : result_add[DATA_WIDTH-1:0];
    assign out_o =  en_i ? result : 0;
endmodule
