`timescale 1ns/1ns
module top(
    input clk,
    input rst,
    input ps2_clk_i,
    input ps2_data_i,

    output reg caps_o,
    output reg shift_o,
    output [7:0] seg0_o,
    output [7:0] seg1_o,
    output [7:0] seg2_o,
    output [7:0] seg3_o,
    output [7:0] seg4_o,
    output [7:0] seg5_o,
    output [7:0] seg6_o,
    output [7:0] seg7_o
);
    wire sampling;
    reg [9:0] buffer;
    reg [7:0] fifo [0:7];
    reg [2:0] ps2_clk_d;
    reg [3:0] count;
    reg [2:0] w_ptr,r_ptr;
    reg ready,overflow;
    reg nextdata_n;
    always @(posedge clk) begin
        if(rst) 
            ps2_clk_d <= 0;
        else
            ps2_clk_d <= {ps2_clk_d[1:0],ps2_clk_i};
    end
    assign sampling = ps2_clk_d[2] & ~ps2_clk_d[1];

    always @(posedge clk) begin
        if(rst) begin
            count <= 0;
            w_ptr <= 0;
            r_ptr <= 0;
            overflow <= 0;
        end else begin
            if (ready) begin
                if(!nextdata_n) begin
                    r_ptr <= r_ptr + 3'b1;
                    if(w_ptr==(r_ptr+1'b1)) //empty
                        ready <= 1'b0;
                end
            end
            if (sampling) begin
                if (count == 4'd10) begin
                    if (!buffer[0] && ps2_data_i && ^buffer[9:1]) begin
                        w_ptr <= w_ptr + 3'd1;
                        fifo[w_ptr] <= buffer[8:1];
                        ready <= 1'b1;
                        overflow <= overflow | (r_ptr == (w_ptr + 3'b1));
                    end
                    count <= 0;
                end else begin
                    buffer[count] <= ps2_data_i;
                    count <= count + 4'd1;    
                end

            end
        end
    end


    
    // ==================================================================== //
    reg [7:0] data;

    always @(posedge clk) begin
        if (rst) begin
            data <= 0;
            nextdata_n <= 0;
        end
        else begin
            if(ready && nextdata_n) begin
                data <= fifo[r_ptr];
                nextdata_n <= 0;
            end
            else begin
                nextdata_n <= 1;
            end
        end
    end

    // ==================================================================== //
    parameter [3:0] S0 = 4'b0001;
    parameter [3:0] S1 = 4'b0010;
    parameter [3:0] S2 = 4'b0100;
    parameter [3:0] S3 = 4'b1000;
    reg [3:0] caps_state_n;
    
    fsm #(
        .scan_code 	(8'h58     ))
    u_fsm_caps(
        .clk        	(clk         ),
        .rst        	(rst         ),
        .data       	(data        ),
        .nextdata_n 	(nextdata_n  ),
        .ready      	(ready       ),
        .state_n    	(caps_state_n)
    );
    

    always @(posedge clk) begin
        if (rst) 
            caps_o <= 0;
        else if(caps_state_n == S3 && ready && ~nextdata_n)
            caps_o <= ~caps_o;
    end

    // ==================================================================== //
    reg [3:0] shift_state_n;
    
    fsm #(
        .scan_code 	(8'h12     ))
    u_fsm_shift(
        .clk        	(clk         ),
        .rst        	(rst         ),
        .data       	(data        ),
        .nextdata_n 	(nextdata_n  ),
        .ready      	(ready       ),
        .state_n    	(shift_state_n)
    );
    

    always @(posedge clk) begin
        if (rst) 
            shift_o <= 0;
        else if(shift_state_n == S0)
            shift_o <= 0;
        else
            shift_o <= 1;
    end

    // always @(*) begin
    //     if(ready && nextdata_n) begin
    //     $display("data = %x", data);
    //     $display("shift_state_n = %b",shift_state_n);
    //     $display("caps_state_n = %b",caps_state_n);           
    //     end
    //     $display("shift_state_n = %b",shift_state_n);

    // end
    // ==================================================================== //
    reg [3:0] num_press_ge, num_press_shi, num_press_bai, num_press_qian;
    
    always @(posedge clk) begin
        if (rst) begin
            num_press_ge <= 0;
            num_press_shi <= 0;
            num_press_bai <= 0;
            num_press_qian <= 0;
        end
        else begin
            if (ready && nextdata_n && (data == 8'hf0)) begin
                if (num_press_ge == 4'd9) begin
                    num_press_ge <= 0;
                    if (num_press_shi == 4'd9) begin
                        num_press_shi <= 0;
                        if (num_press_bai == 4'd9) begin
                            num_press_bai <= 0;
                            if (num_press_qian == 4'd9) begin
                                num_press_qian <= 0;
                            end else begin
                                num_press_qian <= num_press_qian + 4'd1;
                            end
                        end else begin
                            num_press_bai <= num_press_bai + 4'd1;
                        end
                    end else begin
                        num_press_shi <= num_press_shi + 4'd1;
                    end
                end else begin
                    num_press_ge <= num_press_ge + 4'd1;
                end
            end
        end
    end

    // ==================================================================== //
    wire [7:0] ascii;
    scan2ascii u_scan2ascii(
        .index_i    (data),
        .caps_i     (caps_o),
        .shift_i    (shift_o),
        .data_o     (ascii)
    );
    
    // ==================================================================== //
    decoder u_decoder0(
        .data_i 	(data[3:0] ),
        .en_i   	(1'b1      ),
        .out_o  	(seg0_o    )
    );
    
    decoder u_decoder1(
        .data_i 	(data[7:4] ),
        .en_i   	(1'b1      ),
        .out_o  	(seg1_o    )
    );

    decoder u_decoder2(
        .data_i 	(ascii[3:0] ),
        .en_i   	(1'b1      ),
        .out_o  	(seg2_o    )
    );
    
    decoder u_decoder3(
        .data_i 	(ascii[7:4] ),
        .en_i   	(1'b1      ),
        .out_o  	(seg3_o    )
    );

    decoder u_decoder4(
        .data_i 	(num_press_ge ),
        .en_i   	(1'b1         ),
        .out_o  	(seg4_o       )
    );

    decoder u_decoder5(
        .data_i 	(num_press_shi ),
        .en_i   	(1'b1          ),
        .out_o  	(seg5_o        )
    );

    decoder u_decoder6(
        .data_i 	(num_press_bai ),
        .en_i   	(1'b1      ),
        .out_o  	(seg6_o    )
    );
    
    decoder u_decoder7(
        .data_i 	(num_press_qian ),
        .en_i   	(1'b1      ),
        .out_o  	(seg7_o    )
    );

endmodule