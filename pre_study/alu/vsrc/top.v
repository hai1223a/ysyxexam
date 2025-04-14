module top(
  input [2:0] op_i,
  input [3:0] A_i,
  input [3:0] B_i,
  output reg [3:0] out_o,
  output reg zero_o,
  output reg overflow_o,
  output reg carry_o
);
    wire [4:0] out0,out1;
    wire [3:0] N_B = ~B_i + 4'h1;
    assign out0 = $signed(A_i) + $signed(B_i);
    assign out1 = $signed(A_i) + $signed(N_B);
    wire [3:0] out2 = ~A_i;
    wire [3:0] out3 = A_i & B_i;
    wire [3:0] out4 = A_i | B_i;
    wire [3:0] out5 = A_i ^ B_i;
    wire [3:0] out6 = (A_i < B_i) ? 4'h1 : 0;
    wire [3:0] out7 = (A_i == B_i) ? 4'h1 : 0;
 
    always @(*) begin
      zero_o = 0;
      overflow_o = 0;
      carry_o = 0;
      out_o = 0;
      case (op_i)
          3'd0: begin
            zero_o = ~(|out0[3:0]);
            overflow_o = (A_i[3] == B_i[3])&&(out0[3] != A_i[3]);
            carry_o = out0[4];
            out_o = out0[3:0];
          end
          3'd1: begin
            zero_o = ~(|out1[3:0]);
            overflow_o = (A_i[3] == N_B[3])&&(out1[3] != A_i[3]);
            carry_o = out1[4];
            out_o = out1[3:0];
          end
          3'd2: out_o = out2;
          3'd3: out_o = out3;
          3'd4: out_o = out4;
          3'd5: out_o = out5;
          3'd6: out_o = out6;
          3'd7: out_o = out7;
      endcase
    end
endmodule //top
