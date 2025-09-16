module ysyx_25050136_NPC
#(
    parameter ADDR_WIDTH = 5,
    parameter DATA_WIDTH = 32
)
(
    input                                     clk,
    input                                   reset,
    // 指令相关
    // 读地址
    output                        inst_arvalid_o ,
    input                         inst_arready_i ,
    output   [DATA_WIDTH-1:0]     inst_araddr_o  ,
    output   [3:0]                inst_arid_o    ,
    output   [7:0]                inst_arlen_o   ,
    output   [2:0]                inst_arsize_o  ,
    output   [1:0]                inst_arburst_o ,
    // 读数据
    input                         inst_rvalid_i  ,
    output                        inst_rready_o  ,
    input    [31:0]               inst_rdata_i   ,
    input    [1:0]                inst_rresp_i   ,
    input                         inst_rlast_i   ,
    input    [3:0]                inst_rid_i     ,
    // 数据相关
    // 写地址                     
    output                        mem_awvalid_o  ,
    input                         mem_awready_i  ,
    output   [DATA_WIDTH-1:0]     mem_awaddr_o   ,
    output   [3:0]                mem_awid_o     ,
    output   [7:0]                mem_awlen_o    ,
    output   [2:0]                mem_awsize_o   ,
    output   [1:0]                mem_awburst_o  ,
    // 写数据                      
    output                        mem_wvalid_o   ,
    input                         mem_wready_i   ,
    output   [DATA_WIDTH-1:0]     mem_wdata_o    ,
    output   [3:0]                mem_wstrb_o    ,
    output                        mem_wlast_o    ,
    // 写响应                          
    input                         mem_bvalid_i   ,
    output                        mem_bready_o   ,
    input    [1:0]                mem_bresp_i    ,
    input    [3:0]                mem_bid_i      ,
    // 读地址                         
    output                        mem_arvalid_o  ,
    input                         mem_arready_i  ,
    output   [DATA_WIDTH-1:0]     mem_araddr_o   ,
    output   [3:0]                mem_arid_o     ,
    output   [7:0]                mem_arlen_o    ,
    output   [2:0]                mem_arsize_o   ,
    output   [1:0]                mem_arburst_o  ,
    // 读数据                         
    input                         mem_rvalid_i   ,
    output                        mem_rready_o   ,
    input    [DATA_WIDTH-1:0]     mem_rdata_i    ,
    input    [1:0]                mem_rresp_i    ,
    input                         mem_rlast_i    ,
    input    [3:0]                mem_rid_i      
);
`ifdef ysyx_25050136_VERILATOR_DPIC
    always @(*) begin
        if(|(inst_rresp_i | mem_bresp_i | mem_rresp_i))
            find_resp();
    end
    reg if_wait, lsu_wait;
    always @(posedge clk) begin
        if(reset) begin
            lsu_wait <= 0;
        end else begin
            if(mem_awvalid_o | mem_arvalid_o) lsu_wait <= 1;
            if(mem_bvalid_i | mem_rvalid_i) lsu_wait <= 0;
            if(inst_req_valid & !inst_req_ready) if_cycle_get();
            if(inst_req_valid & inst_req_ready) ifu_get();
            if(lsu_wait | mem_awvalid_o | mem_arvalid_o) lsu_cycle_get();
        end
    end
`endif
    wire [31:0] inst_req_addr;
    wire [31:0] inst_req_rdata;
    wire inst_req_ready;
    wire inst_req_valid;
    ysyx_25050136_ICACHE #(
        .OFFSET_WIDTH 	(3),
        .INDEX_WIDTH  	(4),
        .NUM_WAY     	(1)
    )
    u_ysyx_25050136_ICACHE(
        .clk         	(clk          ),
        .reset       	(reset        ),
        .m_arvalid_o 	(inst_arvalid_o  ),
        .m_arready_i 	(inst_arready_i  ),
        .m_araddr_o  	(inst_araddr_o   ),
        .m_arid_o    	(inst_arid_o     ),
        .m_arlen_o   	(inst_arlen_o    ),
        .m_arsize_o  	(inst_arsize_o   ),
        .m_arburst_o 	(inst_arburst_o  ),
        .m_rvalid_i  	(inst_rvalid_i   ),
        .m_rready_o  	(inst_rready_o   ),
        .m_rdata_i   	(inst_rdata_i    ),
        .m_rresp_i   	(inst_rresp_i    ),
        .m_rlast_i   	(inst_rlast_i    ),
        .m_rid_i     	(inst_rid_i      ),
        .req_addr_i  	(inst_req_addr   ),
        .req_valid_i 	(inst_req_valid  ),
        .req_rdata_o 	(inst_req_rdata  ),
        .req_ready_o 	(inst_req_ready  )
    );
    
    ysyx_25050136_NPCCORE #(
        .ADDR_WIDTH 	(ADDR_WIDTH   ),
        .DATA_WIDTH 	(DATA_WIDTH   )
    )
    u_ysyx_25050136_NPCCORE(
        .clk            	(clk             ),
        .reset          	(reset           ),
        .inst_req_rdata_i   (inst_req_rdata  ),
        .inst_req_ready_i   (inst_req_ready  ),
        .inst_req_addr_o    (inst_req_addr   ),
        .inst_req_valid_o   (inst_req_valid  ),
        .mem_awvalid_o  	(mem_awvalid_o   ),
        .mem_awready_i  	(mem_awready_i   ),
        .mem_awaddr_o   	(mem_awaddr_o    ),
        .mem_awid_o     	(mem_awid_o      ),
        .mem_awlen_o    	(mem_awlen_o     ),
        .mem_awsize_o   	(mem_awsize_o    ),
        .mem_awburst_o  	(mem_awburst_o   ),
        .mem_wvalid_o   	(mem_wvalid_o    ),
        .mem_wready_i   	(mem_wready_i    ),
        .mem_wdata_o    	(mem_wdata_o     ),
        .mem_wstrb_o    	(mem_wstrb_o     ),
        .mem_wlast_o    	(mem_wlast_o     ),
        .mem_bvalid_i   	(mem_bvalid_i    ),
        .mem_bready_o   	(mem_bready_o    ),
        .mem_bresp_i    	(mem_bresp_i     ),
        .mem_bid_i      	(mem_bid_i       ),
        .mem_arvalid_o  	(mem_arvalid_o   ),
        .mem_arready_i  	(mem_arready_i   ),
        .mem_araddr_o   	(mem_araddr_o    ),
        .mem_arid_o     	(mem_arid_o      ),
        .mem_arlen_o    	(mem_arlen_o     ),
        .mem_arsize_o   	(mem_arsize_o    ),
        .mem_arburst_o  	(mem_arburst_o   ),
        .mem_rvalid_i   	(mem_rvalid_i    ),
        .mem_rready_o   	(mem_rready_o    ),
        .mem_rdata_i    	(mem_rdata_i     ),
        .mem_rresp_i    	(mem_rresp_i     ),
        .mem_rlast_i    	(mem_rlast_i     ),
        .mem_rid_i      	(mem_rid_i       )
    );
    

endmodule
