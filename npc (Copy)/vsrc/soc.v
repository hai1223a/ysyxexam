module ysyx_25050136_SOC(
    input                                   clk,
    input                                 reset
);
localparam TOP_DATA_WIDTH = 32;
// output declaration of module ysyx_25050136_NPC
wire [31:0] inst_i;
wire [TOP_DATA_WIDTH-1:0] mem_wdata_o, mem_rdata_i;
wire [TOP_DATA_WIDTH-1:0] mem_addr_o;
wire mem_wen_o;
wire [TOP_DATA_WIDTH-1:0] pc_o;

ysyx_25050136_NPC u_ysyx_25050136_NPC(
    .clk         	(clk          ),
    .reset       	(reset        ),
    .inst_i      	(inst_i       ),
    .mem_rdata_i 	(mem_rdata_i  ),
    .mem_wdata_o 	(mem_wdata_o  ),
    .mem_addr_o  	(mem_addr_o   ),
    .mem_ren_o   	(    ),
    .mem_wen_o   	(mem_wen_o    ),
    .mem_len_o   	(    ),    
    .pc_o        	(pc_o         )
);

ysyx_25050136_RegisterFile #(
    .ADDR_WIDTH(8),
    .DATA_WIDTH(TOP_DATA_WIDTH)
)
u_ysyx_25050136_ROM(
    .clk      	(clk       ),
    .reset    	(reset     ),
    .wdata_i  	(   ),
    .waddr_i  	(   ),
    .wen_i    	(0     ),
    .raddr1_i 	(pc_o  ),
    .rdata1_o 	(inst_i  ),
    .raddr2_i 	(  ),
    .rdata2_o 	(  )
);

ysyx_25050136_RegisterFile #(
    .ADDR_WIDTH(8),
    .DATA_WIDTH(TOP_DATA_WIDTH)
)
u_ysyx_25050136_RAM(
    .clk      	(clk       ),
    .reset    	(reset     ),
    .wdata_i  	(mem_wdata_o   ),
    .waddr_i  	(mem_addr_o   ),
    .wen_i    	(mem_wen_o     ),
    .raddr1_i 	(mem_addr_o  ),
    .rdata1_o 	(mem_rdata_i  ),
    .raddr2_i 	(  ),
    .rdata2_o 	(  )
);
endmodule