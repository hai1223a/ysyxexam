module top(
  input [7:0] data_i,
  input en_i,
  output valid_o,
  output [7:0] seg_o
);
  wire [2:0] encoder_out_o;
  wire encoder_valid_o;
  encoder u_encoder(
    .data_i(data_i),
    .en_i(en_i),
    .out_o(encoder_out_o),
    .valid_o(encoder_valid_o)
  );
  decoder u_decoder(
    .data_i  	(encoder_out_o   ),
    .en_i    	(encoder_valid_o     ),
    .out_o   	(seg_o    ),
    .valid_o 	(valid_o  )
  );
  
endmodule

module encoder(
  input [7:0] data_i,
  input en_i,
  output reg [2:0] out_o,
  output valid_o
);
  integer i;
  assign valid_o = en_i;
  
  always @(*) begin
    if (en_i) begin
      out_o = 0;
      for(i = 0; i < 8; i = i + 1)begin
        // out_o = data_i[i] ? i[2:0] : 0;
        if(data_i[i]) out_o = i[2:0];
      end
    end
    else
      out_o = 0;
  end
endmodule

module decoder(
  input [2:0] data_i,
  input en_i,
  output reg [7:0] out_o,
  output valid_o
);
  assign valid_o = en_i;

  always @(*) begin
    if (en_i) begin
      case(data_i)
        3'd0: out_o = 8'b0000_0011;
        3'd1: out_o = 8'b1001_1111;
        3'd2: out_o = 8'b0010_0101;
        3'd3: out_o = 8'b0000_1101;
        3'd4: out_o = 8'b1001_1001;
        3'd5: out_o = 8'b0100_1001;
        3'd6: out_o = 8'b0100_0001;
        3'd7: out_o = 8'b0001_1111;
      endcase
    end else begin
        out_o = 0;
    end
  end
endmodule
