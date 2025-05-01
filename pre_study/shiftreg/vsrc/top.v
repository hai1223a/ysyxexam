module top(
  input clk_p,
  input reset,
  output [7:0] seg0_o,
  output [7:0] seg1_o
);

  reg [7:0] regs;
  wire feedback = regs[7]^regs[5]^regs[4]^regs[3];
  always @(posedge clk_p) begin
    if(reset) begin
      regs <= 8'h01;
    end else begin
      if(|regs)
        regs <= {feedback,regs[7:1]}; 
      else
        regs <= 8'h14;
    end
  end
  
  decoder u_decoder0(
    .data_i  	(regs[3:0] ),
    .en_i    	(~reset    ),
    .out_o   	(seg0_o    )
  );
  
  decoder u_decoder1(
    .data_i  	(regs[7:4] ),
    .en_i    	(~reset    ),
    .out_o   	(seg1_o    )
  );
endmodule //top


