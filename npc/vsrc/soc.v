module ysyx_25050136_SOC(
    input                                   clk,
    input                                 reset
);
localparam TOP_ADDR_WIDTH = 5;
localparam TOP_DATA_WIDTH = 32;
// output declaration of module ysyx_25050136_NPC
wire [31:0] inst;
wire [TOP_DATA_WIDTH-1:0] mem_rdata;
wire [TOP_DATA_WIDTH-1:0] mem_wdata;
wire [TOP_DATA_WIDTH-1:0] mem_addr;
wire mem_wen;
wire [3:0] mem_mask;
wire [TOP_DATA_WIDTH-1:0] pc;
wire iready;
wire ivalid;
wire mready;
wire mvalid;

ysyx_25050136_NPC #(
    .ADDR_WIDTH(TOP_ADDR_WIDTH),
    .DATA_WIDTH(TOP_DATA_WIDTH)
)
u_ysyx_25050136_NPC(
    .clk         	(clk          ),
    .reset       	(reset        ),
    .inst_i      	(inst         ),
    .mem_rdata_i 	(mem_rdata    ),
    .mem_wdata_o 	(mem_wdata    ),
    .mem_addr_o  	(mem_addr     ),
    .mem_wen_o   	(mem_wen      ),
    .mem_mask_o 	(mem_mask    ),
    .pc_o        	(pc           ),
    .iready_o       (iready       ),
    .ivalid_i       (ivalid       ),
    .mready_o       (mready       ),
    .mvalid_i       (mvalid       )
);
// output declaration of module ysyx_25050136_SRAM
ysyx_25050136_SRAM #(
    .ADDR_WIDTH(TOP_DATA_WIDTH),
    .DATA_WIDTH(TOP_DATA_WIDTH)
)
u_ROM(
    .clk     	(clk          ),
    .reset   	(reset        ),
    .waddr_i 	(0            ),
    .wdata_i 	(0            ),
    .mask_i 	(4'b0101      ),
    .wen_i   	(0            ),
    .raddr_i 	(pc           ),
    .rdata_o 	(inst         ),
    .rready_i   (iready       ),
    .rvalid_o   (ivalid       )
);
// output declaration of module ysyx_25050136_SRAM
ysyx_25050136_SRAM #(
    .ADDR_WIDTH(TOP_DATA_WIDTH),
    .DATA_WIDTH(TOP_DATA_WIDTH)
)
u_RAM(
    .clk     	(clk        ),
    .reset   	(reset      ),
    .waddr_i 	(mem_addr   ),
    .wdata_i 	(mem_wdata  ),
    .mask_i 	(mem_mask  ),
    .wen_i   	(mem_wen    ),
    .raddr_i 	(mem_addr   ),
    .rdata_o 	(mem_rdata  ),
    .rready_i   (mready     ),
    .rvalid_o   (mvalid     )
);

endmodule
