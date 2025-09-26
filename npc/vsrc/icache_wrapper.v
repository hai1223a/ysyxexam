module ysyx_25050136_ICACHE_WRAPPER (
    input                                      clk          ,
    input                                      reset        ,
    // 读地址                                        
    output                                     m_arvalid_o  ,
    input                                      m_arready_i  ,
    output   [31:0]                            m_araddr_o   ,
    output   [3:0]                             m_arid_o     ,
    output   [7:0]                             m_arlen_o    ,
    output   [2:0]                             m_arsize_o   ,
    output   [1:0]                             m_arburst_o  ,
    // 读数据                                        
    input                                      m_rvalid_i   ,
    output                                     m_rready_o   ,
    input    [31:0]                            m_rdata_i    ,
    input    [1:0]                             m_rresp_i    ,
    input                                      m_rlast_i    ,
    input    [3:0]                             m_rid_i      ,
    // 内部
    input    [31:0]                            req_addr_i   ,
    input                                      req_valid_i  ,
    input                                      req_use_i    ,
    output   [31:0]                            req_rdata_o  ,                           
    output                                     req_ready_o   
);

    wire rd_req;
    wire rd_size;
    wire [31:0] rd_addr;
    wire ret_valid;
    wire ret_last;
    wire [31:0] ret_data;
    
    ysyx_25050136_ICACHE 
    #(
        .OFFSET_WIDTH 	(3             ),
        .NUM_WAY      	(2             ),
        .INDEX_WIDTH  	(3             )
    )
    u_ysyx_25050136_ICACHE(
        .clk         	(clk          ),
        .reset       	(reset        ),
        .req_addr_i  	(req_addr_i   ),
        .req_valid_i 	(req_valid_i  ),
        .req_use_i   	(req_use_i    ),
        .req_rdata_o 	(req_rdata_o  ),
        .req_ready_o 	(req_ready_o  ),
        .rd_req_o    	(rd_req       ),
        .rd_size_o   	(rd_size      ),
        .rd_addr_o   	(rd_addr      ),
        .ret_valid_i 	(ret_valid    ),
        .ret_last_i  	(ret_last     ),
        .ret_data_i  	(ret_data     )
    );

    ysyx_25050136_IMEM2AXI 
    #(
        .OFFSET_WIDTH 	(3  )
    )
    u_ysyx_25050136_IMEM2AXI(
        .clk         	(clk          ),
        .reset       	(reset        ),
        .m_arvalid_o 	(m_arvalid_o  ),
        .m_arready_i 	(m_arready_i  ),
        .m_araddr_o  	(m_araddr_o   ),
        .m_arid_o    	(m_arid_o     ),
        .m_arlen_o   	(m_arlen_o    ),
        .m_arsize_o  	(m_arsize_o   ),
        .m_arburst_o 	(m_arburst_o  ),
        .m_rvalid_i  	(m_rvalid_i   ),
        .m_rready_o  	(m_rready_o   ),
        .m_rdata_i   	(m_rdata_i    ),
        .m_rresp_i   	(m_rresp_i    ),
        .m_rlast_i   	(m_rlast_i    ),
        .m_rid_i     	(m_rid_i      ),
        .rd_req_i    	(rd_req       ),
        .rd_size_i   	(rd_size      ),
        .rd_addr_i   	(rd_addr      ),
        .ret_valid_o 	(ret_valid    ),
        .ret_last_o  	(ret_last     ),
        .ret_data_o  	(ret_data     )
    );
    
    
endmodule
