
`timescale 1ns/1ns
module top1;

/* parameter */
parameter [31:0] clock_period = 10;

/* ps2_keyboard interface signals */
reg clk,rst;
wire [7:0] data;
wire ready,overflow;
wire kbd_clk, kbd_data;
reg nextdata_n;

ps2_keyboard_model model(
    .ps2_clk(kbd_clk),
    .ps2_data(kbd_data)
);

// output declaration of module top1
reg caps_o;
reg shift_o;

top1
u_top1(
    .clk        	(clk         ),
    .rst        	(rst         ),
    .ps2_clk_i  	(kbd_clk   ),
    .ps2_data_i 	(kbd_data  ),
    .caps_o     	(caps_o      ),
    .shift_o    	(shift_o     )
);


initial begin /* clock driver */
    clk = 0;
    forever
        #(clock_period/2) clk = ~clk;
end

initial begin
    rst = 1'b1;  #20;
    rst = 1'b0;  #20;
    for (integer i = 0;i < 2; i = i + 1) begin
        model.kbd_sendcode(8'h58); // press 'A'
        #20
        model.kbd_sendcode(8'hF0); // break code
        model.kbd_sendcode(8'h58); // release 'A'
    end
    
    model.kbd_sendcode(8'h12); // press 'A'
    #40
    model.kbd_sendcode(8'h1C); // press 'A'
    model.kbd_sendcode(8'h1C); // press 'A'
    model.kbd_sendcode(8'hF0); // break code
    model.kbd_sendcode(8'h1C); // release 'A' 
    model.kbd_sendcode(8'hF0); // break code
    model.kbd_sendcode(8'h12); // release 'A'
        model.kbd_sendcode(8'h12); // press 'A'
    #40
    model.kbd_sendcode(8'h1C); // press 'A'
    model.kbd_sendcode(8'h1C); // press 'A'
    model.kbd_sendcode(8'hF0); // break code
    model.kbd_sendcode(8'h1C); // release 'A' 
    model.kbd_sendcode(8'hF0); // break code
    model.kbd_sendcode(8'h12); // release 'A'
    #2000
    $finish;
end

endmodule
