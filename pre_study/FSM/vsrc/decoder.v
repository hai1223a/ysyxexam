`timescale 1ns/1ns
module decoder(
  input [3:0] data_i,
  input en_i,
  output reg [7:0] out_o
);

  always @(*) begin
    if (en_i) begin
      case(data_i)
        4'h0: out_o = 8'b0000_0011;
        4'h1: out_o = 8'b1001_1111;
        4'h2: out_o = 8'b0010_0101;
        4'h3: out_o = 8'b0000_1101;
        4'h4: out_o = 8'b1001_1001;
        4'h5: out_o = 8'b0100_1001;
        4'h6: out_o = 8'b0100_0001;
        4'h7: out_o = 8'b0001_1111;
        4'h8: out_o = 8'b0000_0001;
        4'h9: out_o = 8'b0000_1001;
        4'ha: out_o = 8'b0001_0001; // A
        4'hb: out_o = 8'b1100_0001; // b
        4'hc: out_o = 8'b0110_0011; // C
        4'hd: out_o = 8'b1000_0101; // d
        4'he: out_o = 8'b0110_0001; // E
        4'hf: out_o = 8'b0111_0001; // F
      endcase
    end else begin
        out_o = 0;
    end
  end
endmodule
