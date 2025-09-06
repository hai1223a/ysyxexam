module ysyx_25050136_EX
    #(
        parameter DATA_WIDTH = 32
     )
     (
         // 内部
         input                                      clk          ,
         input                                      reset        ,
         input    [DATA_WIDTH-1:0]                  pc_i         ,
         input                                      rd_en_i      ,
         input    [`ysyx_25050136_FU_NUM-1:0]       fu_i         ,
         input    [`ysyx_25050136_ALU_OP_NUM-1:0]   alu_op_i     ,
         input    [`ysyx_25050136_LSU_OP_NUM-1:0]   lsu_op_i     ,
         input    [`ysyx_25050136_BQU_OP_NUM-1:0]   bqu_op_i     ,
         input    [`ysyx_25050136_CSRU_OP_NUM-1:0]  csru_op_i    ,
         input    [DATA_WIDTH-1:0]                  alu_opd1_i   ,
         input    [DATA_WIDTH-1:0]                  alu_opd2_i   ,
         input    [DATA_WIDTH-1:0]                  bqu_opd1_i   ,
         input    [DATA_WIDTH-1:0]                  bqu_opd2_i   ,
         input    [DATA_WIDTH-1:0]                  lsu_opd1_i   ,
         input    [DATA_WIDTH-1:0]                  csru_opd1_i  ,
         input    [11:0]                            csru_opd2_i  ,
         input                                      csru_wen_i   ,
         input                                      csru_ren_i   ,
         input    [3:0]                             mem_mask_i   ,
         input                                      mem_signed_i ,
         input                                      fvalid_i     ,
         output                                     gpr_wen_o    ,
         output   [DATA_WIDTH-1:0]                  gpr_data_o   ,
         output                                     jump_en_o    ,
         output   [DATA_WIDTH-1:0]                  jump_addr_o  ,
         output                                     fready_o     ,
         // 写地址                     
         output                                     m_awvalid_o  ,
         input                                      m_awready_i  ,
         output   [DATA_WIDTH-1:0]                  m_awaddr_o   ,
         output   [3:0]                             m_awid_o     ,
         output   [7:0]                             m_awlen_o    ,
         output   [2:0]                             m_awsize_o   ,
         output   [1:0]                             m_awburst_o  ,
         // 写数据                                    
         output                                     m_wvalid_o   ,
         input                                      m_wready_i   ,
         output   [DATA_WIDTH-1:0]                  m_wdata_o    ,
         output   [3:0]                             m_wstrb_o    ,
         output                                     m_wlast_o    ,
         // 写响应                                        
         input                                      m_bvalid_i   ,
         output                                     m_bready_o   ,
         input    [1:0]                             m_bresp_i    ,
         input    [3:0]                             m_bid_i      ,
         // 读地址                                        
         output                                     m_arvalid_o  ,
         input                                      m_arready_i  ,
         output   [DATA_WIDTH-1:0]                  m_araddr_o   ,
         output   [3:0]                             m_arid_o     ,
         output   [7:0]                             m_arlen_o    ,
         output   [2:0]                             m_arsize_o   ,
         output   [1:0]                             m_arburst_o  ,
         // 读数据                                        
         input                                      m_rvalid_i   ,
         output                                     m_rready_o   ,
         input    [DATA_WIDTH-1:0]                  m_rdata_i    ,
         input    [1:0]                             m_rresp_i    ,
         input                                      m_rlast_i    ,
         input    [3:0]                             m_rid_i      
     );    
    //===================================================
    // ALU
    //===================================================
    wire alu_en = fu_i[`ysyx_25050136_ALU];
    wire [DATA_WIDTH-1:0] alu_out_o;

    ysyx_25050136_ALU u_ysyx_25050136_ALU(
        .op1_i          (alu_opd1_i   ),
        .op2_i          (alu_opd2_i   ),
        .operation_i 	(alu_op_i     ),
        .en_i        	(alu_en       ),
        .out_o       	(alu_out_o    )
    );
    //===================================================
    // LSU
    //===================================================
    wire lsu_en = fu_i[`ysyx_25050136_LSU];
    wire mem_ren = lsu_en & lsu_op_i[`ysyx_25050136_LSU_LOAD];
    wire mem_wen = lsu_en & lsu_op_i[`ysyx_25050136_LSU_STORE];
    wire [DATA_WIDTH-1:0] load_data_o;
    wire mem_valid_o;
    
    ysyx_25050136_LSU u_ysyx_25050136_LSU(
        .clk          	(clk           ),
        .resetn       	(~reset        ),
        .m_awvalid_o  	(m_awvalid_o   ),
        .m_awready_i  	(m_awready_i   ),
        .m_awaddr_o   	(m_awaddr_o    ),
        .m_awid_o     	(m_awid_o      ),
        .m_awlen_o    	(m_awlen_o     ),
        .m_awsize_o   	(m_awsize_o    ),
        .m_awburst_o  	(m_awburst_o   ),
        .m_wvalid_o   	(m_wvalid_o    ),
        .m_wready_i   	(m_wready_i    ),
        .m_wdata_o    	(m_wdata_o     ),
        .m_wstrb_o    	(m_wstrb_o     ),
        .m_wlast_o    	(m_wlast_o     ),
        .m_bvalid_i   	(m_bvalid_i    ),
        .m_bready_o   	(m_bready_o    ),
        .m_bresp_i    	(m_bresp_i     ),
        .m_bid_i      	(m_bid_i       ),
        .m_arvalid_o  	(m_arvalid_o   ),
        .m_arready_i  	(m_arready_i   ),
        .m_araddr_o   	(m_araddr_o    ),
        .m_arid_o     	(m_arid_o      ),
        .m_arlen_o    	(m_arlen_o     ),
        .m_arsize_o   	(m_arsize_o    ),
        .m_arburst_o  	(m_arburst_o   ),
        .m_rvalid_i   	(m_rvalid_i    ),
        .m_rready_o   	(m_rready_o    ),
        .m_rdata_i    	(m_rdata_i     ),
        .m_rresp_i    	(m_rresp_i     ),
        .m_rlast_i    	(m_rlast_i     ),
        .m_rid_i      	(m_rid_i       ),
        .fvalid_i    	(fvalid_i      ),
        .mem_ren_i    	(mem_ren       ),
        .mem_wen_i    	(mem_wen       ),
        .mem_mask_i   	(mem_mask_i    ),
        .mem_signed_i 	(mem_signed_i  ),
        .mem_addr_i   	(alu_out_o     ),
        .store_data_i 	(lsu_opd1_i    ),
        .load_data_o  	(load_data_o   ),
        .mem_valid_o  	(mem_valid_o   )
    );
    
    //===================================================
    // BQU
    //===================================================
    wire bqu_en = fu_i[`ysyx_25050136_BQU];
    wire [DATA_WIDTH-1:0] bqu_out;
    ysyx_25050136_BQU u_ysyx_25050136_BQU(
        .op1_i          (bqu_opd1_i    ),
        .op2_i          (bqu_opd2_i    ),
        .operation_i 	(bqu_op_i      ),
        .en_i        	(bqu_en        ),
        .out_o       	(bqu_out       )
    );
    //===================================================
    // CSRU
    //===================================================
    wire csru_en = fu_i[`ysyx_25050136_CSRU];

    // output declaration of module ysyx_25050136_CSRU
    wire [DATA_WIDTH-1:0] csru_rdata_o;
    
    ysyx_25050136_CSRU u_ysyx_25050136_CSRU(
        .clk         	(clk          ),
        .reset       	(reset        ),
        .pc_i           (pc_i         ),
        .en_i           (csru_en      ),
        .operation_i 	(csru_op_i    ),
        .csru_opd1_i 	(csru_opd1_i  ),
        .csru_opd2_i  	(csru_opd2_i  ),
        .csru_ren_i   	(csru_ren_i   ),
        .csru_wen_i   	(csru_wen_i   ),
        .csru_rdata_o 	(csru_rdata_o )
    );
    //===================================================
    // 寄存器
    //===================================================
    assign gpr_data_o = lsu_op_i[`ysyx_25050136_LSU_LOAD] ? load_data_o : 
                        csru_en ? csru_rdata_o : alu_out_o;
    assign gpr_wen_o = fready_o & rd_en_i;
    //===================================================
    // 跳转路径
    //===================================================
    assign jump_en_o = csru_op_i[`ysyx_25050136_CSRU_ECALL] | csru_op_i[`ysyx_25050136_CSRU_MRET] | 
                        bqu_op_i[`ysyx_25050136_BQU_JALR] | bqu_op_i[`ysyx_25050136_BQU_JAL] |
                       (bqu_en & |alu_out_o) ;
    assign jump_addr_o = bqu_en ? bqu_out : csru_rdata_o;
    //===================================================
    // 握手信号
    //===================================================
    reg fready_r;
    always @(posedge clk) begin
        if (reset) begin
            fready_r <= 1;
        end else begin
            fready_r <= fvalid_i;
        end
    end
    assign fready_o = lsu_en ? mem_valid_o : fready_r;


endmodule //ysyx_25050136_EX
