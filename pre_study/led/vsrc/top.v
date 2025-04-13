module top(
  input clk,
  input rst,
  output reg [15:0] led
);
  reg [31:0] count;
  always @(posedge clk) begin
    if (rst) begin led <= 3; count <= 0; end
    else begin
      if (count == 0) led <= {led[13:0], led[15:14]};
      count <= (count >= 5000000 ? 32'b0 : count + 1);
    end
  end
endmodule
