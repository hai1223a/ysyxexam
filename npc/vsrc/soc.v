module ysyx_25050136_SOC(
    input                                   clk,
    input                                 reset
);
localparam TOP_ADDR_WIDTH = 5;
localparam TOP_DATA_WIDTH = 32;

              
wire                          inst_arvalid_o;
wire                          inst_arready_i;
wire [TOP_DATA_WIDTH-1:0]      inst_araddr_o;
wire                           inst_rvalid_i;
wire                           inst_rready_o;
wire [TOP_DATA_WIDTH-1:0]       inst_rdata_i;
wire [1:0]                      inst_rresp_i; 
wire                           mem_awvalid_o;
wire                           mem_awready_i;
wire [TOP_DATA_WIDTH-1:0]       mem_awaddr_o;
wire                            mem_wvalid_o;
wire                            mem_wready_i;
wire [TOP_DATA_WIDTH-1:0]        mem_wdata_o;
wire [3:0]                       mem_wstrb_o;            
wire                            mem_bvalid_i;
wire                            mem_bready_o;
wire [1:0]                       mem_bresp_i;           
wire                           mem_arvalid_o;
wire                           mem_arready_i;
wire [TOP_DATA_WIDTH-1:0]       mem_araddr_o;             
wire                            mem_rvalid_i;
wire                            mem_rready_o;
wire [TOP_DATA_WIDTH-1:0]        mem_rdata_i;
wire [1:0]                       mem_rresp_i;

ysyx_25050136_NPC #(
    .ADDR_WIDTH(TOP_ADDR_WIDTH),
    .DATA_WIDTH(TOP_DATA_WIDTH)
)
u_ysyx_25050136_NPC(
    .clk            	(clk             ),
    .reset          	(reset           ),
    .inst_arvalid_o 	(inst_arvalid_o  ),
    .inst_arready_i 	(inst_arready_i  ),
    .inst_araddr_o  	(inst_araddr_o   ),
    .inst_rvalid_i  	(inst_rvalid_i   ),
    .inst_rready_o  	(inst_rready_o   ),
    .inst_rdata_i   	(inst_rdata_i    ),
    .inst_rresp_i   	(inst_rresp_i    ),
    .mem_awvalid_o  	(mem_awvalid_o   ),
    .mem_awready_i  	(mem_awready_i   ),
    .mem_awaddr_o   	(mem_awaddr_o    ),
    .mem_wvalid_o   	(mem_wvalid_o    ),
    .mem_wready_i   	(mem_wready_i    ),
    .mem_wdata_o    	(mem_wdata_o     ),
    .mem_wstrb_o    	(mem_wstrb_o     ),
    .mem_bvalid_i   	(mem_bvalid_i    ),
    .mem_bready_o   	(mem_bready_o    ),
    .mem_bresp_i    	(mem_bresp_i     ),
    .mem_arvalid_o  	(mem_arvalid_o   ),
    .mem_arready_i  	(mem_arready_i   ),
    .mem_araddr_o   	(mem_araddr_o    ),
    .mem_rvalid_i   	(mem_rvalid_i    ),
    .mem_rready_o   	(mem_rready_o    ),
    .mem_rdata_i    	(mem_rdata_i     ),
    .mem_rresp_i    	(mem_rresp_i     )
);

ysyx_25050136_SRAM #(
    .ADDR_WIDTH(TOP_DATA_WIDTH),
    .DATA_WIDTH(TOP_DATA_WIDTH)
)
u_ROM(
    .aclk        	(clk             ),
    .aresetn     	(~reset          ),
    // .s_awvalid_i 	(0               ),
    // .s_awready_o 	(               ),
    // .s_awaddr_i  	(0               ),
    // .s_wvalid_i  	(0               ),
    // .s_wready_o  	(               ),
    // .s_wdata_i   	(0               ),
    // .s_wstrb_i   	(0               ),
    // .s_bvalid_o  	(               ),
    // .s_bready_i  	(0               ),
    // .s_bresp_o   	(               ),
    .s_arvalid_i 	(inst_arvalid_o  ),
    .s_arready_o 	(inst_arready_i  ),
    .s_araddr_i  	(inst_araddr_o   ),
    .s_rvalid_o  	(inst_rvalid_i   ),
    .s_rready_i  	(inst_rready_o   ),
    .s_rdata_o   	(inst_rdata_i    ),
    .s_rresp_o   	(inst_rresp_i    )
);

ysyx_25050136_SRAM #(
    .ADDR_WIDTH(TOP_DATA_WIDTH),
    .DATA_WIDTH(TOP_DATA_WIDTH)
)
u_RAM(
    .aclk        	(clk         ),
    .aresetn     	(~reset      ),
    .s_awvalid_i 	(mem_awvalid_o  ),
    .s_awready_o 	(mem_awready_i  ),
    .s_awaddr_i  	(mem_awaddr_o   ),
    .s_wvalid_i  	(mem_wvalid_o   ),
    .s_wready_o  	(mem_wready_i   ),
    .s_wdata_i   	(mem_wdata_o    ),
    .s_wstrb_i   	(mem_wstrb_o    ),
    .s_bvalid_o  	(mem_bvalid_i   ),
    .s_bready_i  	(mem_bready_o   ),
    .s_bresp_o   	(mem_bresp_i    ),
    .s_arvalid_i 	(mem_arvalid_o  ),
    .s_arready_o 	(mem_arready_i  ),
    .s_araddr_i  	(mem_araddr_o   ),
    .s_rvalid_o  	(mem_rvalid_i   ),
    .s_rready_i  	(mem_rready_o   ),
    .s_rdata_o   	(mem_rdata_i    ),
    .s_rresp_o   	(mem_rresp_i    )
);

endmodule
