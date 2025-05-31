module top(
        input clk,
        input reset,
        input  [7:0] data1_i,
        output reg [7:0] data1_reg_o,
        output [7:0] data1_o
    );
    always @(posedge clk) begin
        if (reset) begin
            data1_reg_o <=  8'd4;
        end
        else begin
            data1_reg_o <= data1_i;
        end
    end
    assign data1_o = data1_i;
endmodule //top
