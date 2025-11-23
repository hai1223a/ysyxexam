module add(
    input  clk,
    input  reset,
    input  [31:0] a,
    input  [31:0] b,
    output [31:0] y
    );
    reg [31:0] a_r;
    reg [31:0] b_r;
    reg [31:0] y_r;
    always @(posedge clk) begin
        if (reset) begin
            a_r <= 32'b0;
            b_r <= 32'b0;
            y_r <= 32'b0;
        end
        else begin
            a_r <= a;
            b_r <= b;
            y_r <= a_r + b_r;
        end
    end
    assign y = y_r;
    
endmodule //add

module alu(
    input  clk,
    input  reset,
    input  [31:0] a,
    input  [31:0] b,
    input  [2:0]  op,
    output reg    y
    );

    parameter OP_EQ  = 3'b000; 
    parameter OP_NE  = 3'b001; 
    parameter OP_SLT = 3'b010; 
    parameter OP_SGE = 3'b011; 
    parameter OP_ULT = 3'b100; 
    parameter OP_UGE = 3'b101; 

    reg [31:0] a_r, b_r;
    reg [2:0]  op_r;
    reg y_r, y_temp;
    always @(posedge clk) begin
        if (reset) begin
            a_r <= 32'b0;
            b_r <= 32'b0;
            op_r <= 3'b0;
            y_r <= 1'b0;
        end
        else begin
            a_r <= a;
            b_r <= b;
            op_r <= op;
            y_r <= y_temp;
        end
    end    
    
    wire is_equal = (a_r == b_r);
    wire is_slt   = ($signed(a_r) < $signed(b_r));
    wire is_ult   = (a_r < b_r);
    always @(*) begin
        case (op_r)
            OP_EQ:  y_temp = is_equal;
            OP_NE:  y_temp = ~is_equal;
            OP_SLT: y_temp = is_slt;
            OP_SGE: y_temp = ~is_slt;
            OP_ULT: y_temp = is_ult;
            OP_UGE: y_temp = ~is_ult;
            default: y_temp = 1'b0;
        endcase
    end
    assign y = y_r;
endmodule //alu
