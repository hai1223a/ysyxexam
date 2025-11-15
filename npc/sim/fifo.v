module fifo_wrapper
#(
    parameter DATA_WIDTH = 32,
    parameter DEPTH = 3
)
(
    input                   clk   ,
    input  [DATA_WIDTH-1:0] data_i,
    output [DATA_WIDTH-1:0] data_o
);
    reg [DATA_WIDTH-1:0] in_r, out_r;
    wire [DATA_WIDTH-1:0] out_c;
    always @(posedge clk) begin
        in_r <= data_i;
        out_r <= out_c;
    end
    param_fifo2 #(.DATA_WIDTH(DATA_WIDTH), .DEPTH(DEPTH)) u_param_fifo (
        .clk    (clk    ),
        .data_i (in_r   ),
        .data_o (out_c  )
    );

    assign data_o = out_r;
endmodule

module param_fifo1
#(
    parameter DATA_WIDTH = 32,
    parameter DEPTH = 3
)
(
    input                   clk   ,
    input  [DATA_WIDTH-1:0] data_i,
    output [DATA_WIDTH-1:0] data_o
);
    reg [DATA_WIDTH-1:0] mem [0:DEPTH-1];
    assign data_o = mem[DEPTH-1];
    integer i;
    always @(posedge clk) begin
        for(i=DEPTH-1; i>0; i=i-1) begin
            mem[i] <= mem[i-1];
        end
        mem[0] <= data_i;
    end
endmodule

module param_fifo2
#(
    parameter DATA_WIDTH = 32,
    parameter DEPTH = 3
)
(
    input                   clk   ,
    input  [DATA_WIDTH-1:0] data_i,
    output [DATA_WIDTH-1:0] data_o
);
    reg [DATA_WIDTH*DEPTH-1:0] mem;
    always @(posedge clk) begin
        mem <= {mem[DATA_WIDTH*(DEPTH-1)-1:0], data_i};
    end
    assign data_o = mem[DATA_WIDTH*DEPTH-1:DATA_WIDTH*(DEPTH-1)];
endmodule