module ysyx_25050136_ICACHE_WRAPPER 
(
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
    input                                      flush_i      ,
    input                                      req_valid_i  ,
    input    [31:0]                            req_addr_i   ,
    input    [31:0]                            req_prepc_i  ,  // 新增：预测 PC
    input                                      req_taken_i  ,  // 新增：预测跳转
    input                                      req_btb_hit_i,  // 新增：BTB 命中
    output                                     req_ready_o  ,
    input                                      ret_ready_i  ,
    output   [31:0]                            ret_addr_o   ,
    output   [31:0]                            ret_rdata_o  ,
    output   [31:0]                            ret_prepc_o  ,  // 新增：返回预测 PC
    output                                     ret_taken_o  ,  // 新增：返回预测跳转
    output                                     ret_btb_hit_o,  // 新增：返回 BTB 命中
    output                                     ret_valid_o  
);

    wire ia_flush;
    wire ia_rd_req;
    wire [31:0] ia_rd_addr;
    wire [31:0] ia_ret_data;
    wire ia_ret_valid;
    wire ia_ret_last;
// 仿真时为了速度可以配置为更好的参数
        // .OFFSET_WIDTH 	(4             ),
        // .NUM_WAY      	(4             ),
        // .INDEX_WIDTH  	(3             )
// 综合考虑面积和性能，最终版本配置为
        // .OFFSET_WIDTH 	(4             ),
        // .NUM_WAY      	(1             ),
        // .INDEX_WIDTH  	(1             )
    ysyx_25050136_ICACHE 
    #(
        .OFFSET_WIDTH 	(4             ),
        .NUM_WAY      	(4             ),
        .INDEX_WIDTH  	(3             )
    )
    u_ysyx_25050136_ICACHE(
        .clk            	(clk             ),
        .reset          	(reset           ),
        .ic_flush_i         (flush_i         ),
        .ic_req_valid_i 	(req_valid_i     ),
        .ic_req_addr_i  	(req_addr_i      ),
        .ic_req_prepc_i     (req_prepc_i     ),  // 新增
        .ic_req_taken_i     (req_taken_i     ),  // 新增
        .ic_req_btb_hit_i   (req_btb_hit_i   ),  // 新增
        .ic_req_ready_o 	(req_ready_o     ),
        .ic_ret_ready_i 	(ret_ready_i     ),
        .ic_ret_rdata_o 	(ret_rdata_o     ),
        .ic_ret_addr_o  	(ret_addr_o      ),
        .ic_ret_prepc_o     (ret_prepc_o     ),  // 新增
        .ic_ret_taken_o     (ret_taken_o     ),  // 新增
        .ic_ret_btb_hit_o   (ret_btb_hit_o   ),  // 新增
        .ic_ret_valid_o 	(ret_valid_o     ),
        .ia_flush_o         (ia_flush        ),
        .ia_rd_req_o    	(ia_rd_req       ),
        .ia_rd_addr_o   	(ia_rd_addr      ),
        .ia_ret_valid_i 	(ia_ret_valid    ),
        .ia_ret_last_i  	(ia_ret_last     ),
        .ia_ret_data_i  	(ia_ret_data     )
    );
    

    ysyx_25050136_IMEM2AXI 
    #(
        .OFFSET_WIDTH 	(4  )
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
        .flush_i        (ia_flush     ),
        .rd_req_i    	(ia_rd_req    ),
        .rd_addr_i   	(ia_rd_addr   ),
        .ret_valid_o 	(ia_ret_valid ),
        .ret_last_o  	(ia_ret_last  ),
        .ret_data_o  	(ia_ret_data  )
    );
    
    
endmodule
