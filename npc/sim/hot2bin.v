module hot2bin_wrapper 
#(
    parameter  ONE_HOT_WIDTH    = 4
)
(
    input clk,
    input reset,
    input [ONE_HOT_WIDTH-1 : 0] one_hot_code,
    output [$clog2(ONE_HOT_WIDTH)-1 : 0] bin_code
);
    reg [ONE_HOT_WIDTH-1 : 0] one_hot_code_r;
    reg [$clog2(ONE_HOT_WIDTH)-1 : 0] bin_code_r;
    wire [$clog2(ONE_HOT_WIDTH)-1 : 0] bin_code_c;
    
    always @(posedge clk) begin
        if (reset) begin
            one_hot_code_r <= 0;
            bin_code_r <= 0;
        end else begin
            one_hot_code_r <= one_hot_code;
            bin_code_r <= bin_code_c;
        end
    end

    hot2bin_0 #(.ONE_HOT_WIDTH(ONE_HOT_WIDTH)) u_hot2bin_1 (
        .one_hot_code(one_hot_code_r),
        .bin_code(bin_code_c)
    );
    assign bin_code = bin_code_r;
endmodule

module hot2bin_0
#(
    parameter  ONE_HOT_WIDTH    = 4
)
(
    input[ONE_HOT_WIDTH-1 : 0]               one_hot_code,
    output reg [$clog2(ONE_HOT_WIDTH)-1 : 0]      bin_code
);
    always @(*) begin
        case (1'b1)
            one_hot_code[0]: bin_code = 0;
            one_hot_code[1]: bin_code = 1;
            one_hot_code[2]: bin_code = 2;
            one_hot_code[3]: bin_code = 3;
            default: bin_code = 0;
        endcase
    end
endmodule //hot2bin_1

module hot2bin_1
#(
    parameter  ONE_HOT_WIDTH    = 4
)
(
    input[ONE_HOT_WIDTH-1 : 0]               one_hot_code,
    output reg [$clog2(ONE_HOT_WIDTH)-1 : 0]      bin_code
);
    always @(*) begin
        case (one_hot_code)
            4'b0001: bin_code = 0;
            4'b0010: bin_code = 1;
            4'b0100: bin_code = 2;
            4'b1000: bin_code = 3;
            default: bin_code = 0;
        endcase
    end
endmodule //hot2bin_1

module hot2bin_2
#(
    parameter  ONE_HOT_WIDTH    = 4
)
(
    input   [ONE_HOT_WIDTH-1 : 0]               one_hot_code,
    output  [$clog2(ONE_HOT_WIDTH)-1 : 0]       bin_code
);

    wire [$clog2(ONE_HOT_WIDTH)-1 : 0] temp1 [ONE_HOT_WIDTH-1 : 0];
	wire [ONE_HOT_WIDTH-1 : 0] 		  temp2 [$clog2(ONE_HOT_WIDTH)-1 : 0];
		
	genvar i,j,k;
	generate
		for(i = 0; i < ONE_HOT_WIDTH; i = i+1)begin : temp1_loop
			assign temp1[i] = one_hot_code[i]? i:'b0;
		end
	endgenerate
	generate
		for(i = 0; i < ONE_HOT_WIDTH; i = i+1)begin : temp_ch1
			for(j = 0; j < $clog2(ONE_HOT_WIDTH); j = j+1)begin  : temp_ch2
				assign temp2[j][i] = temp1[i][j];
			end
		end
	endgenerate
	generate
		for(j = 0; j < $clog2(ONE_HOT_WIDTH); j = j+1)begin : temp2_loop
			assign bin_code[j] = |temp2[j];
		end
	endgenerate
    
endmodule //hot2bin_1

