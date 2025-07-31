module ysyx_25050136_SOC(
    input                               clk  ,
    input                               reset
);
    localparam TOP_ADDR_WIDTH   = 5 ;
    localparam TOP_DATA_WIDTH   = 32;
    localparam TOP_MASTER_NUM   = 2 ;
    localparam TOP_SLAVER_NUM   = 3 ;

    // 仲裁器信号
    wire [TOP_MASTER_NUM-1:0]                s_awvalid_i ;
    wire [TOP_MASTER_NUM-1:0]                s_awready_o ;
    wire [TOP_MASTER_NUM*TOP_DATA_WIDTH-1:0] s_awaddr_i  ;
    wire [TOP_MASTER_NUM-1:0]                s_wvalid_i  ;
    wire [TOP_MASTER_NUM-1:0]                s_wready_o  ;
    wire [TOP_MASTER_NUM*TOP_DATA_WIDTH-1:0] s_wdata_i   ;
    wire [TOP_MASTER_NUM*4-1:0]              s_wstrb_i   ;
    wire [TOP_MASTER_NUM-1:0]                s_bvalid_o  ;
    wire [TOP_MASTER_NUM-1:0]                s_bready_i  ;
    wire [TOP_MASTER_NUM*2-1:0]              s_bresp_o   ;
    wire [TOP_MASTER_NUM-1:0]                s_arvalid_i ;
    wire [TOP_MASTER_NUM-1:0]                s_arready_o ;
    wire [TOP_MASTER_NUM*TOP_DATA_WIDTH-1:0] s_araddr_i  ;
    wire [TOP_MASTER_NUM-1:0]                s_rvalid_o  ;
    wire [TOP_MASTER_NUM-1:0]                s_rready_i  ;
    wire [TOP_MASTER_NUM*TOP_DATA_WIDTH-1:0] s_rdata_o   ;
    wire [TOP_MASTER_NUM*2-1:0]              s_rresp_o   ;
    wire [TOP_SLAVER_NUM-1:0]                m_awvalid_o ;
    wire [TOP_SLAVER_NUM-1:0]                m_awready_i ;
    wire [TOP_SLAVER_NUM*TOP_DATA_WIDTH-1:0] m_awaddr_o  ;
    wire [TOP_SLAVER_NUM-1:0]                m_wvalid_o  ;
    wire [TOP_SLAVER_NUM-1:0]                m_wready_i  ;
    wire [TOP_SLAVER_NUM*TOP_DATA_WIDTH-1:0] m_wdata_o   ;
    wire [TOP_SLAVER_NUM*4-1:0]              m_wstrb_o   ;
    wire [TOP_SLAVER_NUM-1:0]                m_bvalid_i  ;
    wire [TOP_SLAVER_NUM-1:0]                m_bready_o  ;
    wire [TOP_SLAVER_NUM*2-1:0]              m_bresp_i   ;
    wire [TOP_SLAVER_NUM-1:0]                m_arvalid_o ;
    wire [TOP_SLAVER_NUM-1:0]                m_arready_i ;
    wire [TOP_SLAVER_NUM*TOP_DATA_WIDTH-1:0] m_araddr_o  ;
    wire [TOP_SLAVER_NUM-1:0]                m_rvalid_i  ;
    wire [TOP_SLAVER_NUM-1:0]                m_rready_o  ;
    wire [TOP_SLAVER_NUM*TOP_DATA_WIDTH-1:0] m_rdata_i   ;
    wire [TOP_SLAVER_NUM*2-1:0]              m_rresp_i   ;
    // 主设备信号        
    wire                                inst_arvalid_o ;
    wire                                inst_arready_i ;
    wire [TOP_DATA_WIDTH-1:0]           inst_araddr_o  ;
    wire                                inst_rvalid_i  ;
    wire                                inst_rready_o  ;
    wire [TOP_DATA_WIDTH-1:0]           inst_rdata_i   ;
    wire [1:0]                          inst_rresp_i   ;
    wire                                inst_awvalid_o ;
    wire                                inst_awready_i ;
    wire [TOP_DATA_WIDTH-1:0]           inst_awaddr_o  ;
    wire                                inst_wvalid_o  ;
    wire                                inst_wready_i  ;
    wire [TOP_DATA_WIDTH-1:0]           inst_wdata_o   ;
    wire [3:0]                          inst_wstrb_o   ;
    wire                                inst_bvalid_i  ;
    wire                                inst_bready_o  ;
    wire [1:0]                          inst_bresp_i   ;
    wire                                mem_awvalid_o  ;
    wire                                mem_awready_i  ;
    wire [TOP_DATA_WIDTH-1:0]           mem_awaddr_o   ;
    wire                                mem_wvalid_o   ;
    wire                                mem_wready_i   ;
    wire [TOP_DATA_WIDTH-1:0]           mem_wdata_o    ;
    wire [3:0]                          mem_wstrb_o    ;
    wire                                mem_bvalid_i   ;
    wire                                mem_bready_o   ;
    wire [1:0]                          mem_bresp_i    ;
    wire                                mem_arvalid_o  ;
    wire                                mem_arready_i  ;
    wire [TOP_DATA_WIDTH-1:0]           mem_araddr_o   ;
    wire                                mem_rvalid_i   ;
    wire                                mem_rready_o   ;
    wire [TOP_DATA_WIDTH-1:0]           mem_rdata_i    ;
    wire [1:0]                          mem_rresp_i    ;
    // 从设备信号
    wire                                sram_awvalid_i ;         
    wire                                sram_awready_o ;         
    wire [TOP_DATA_WIDTH-1:0]           sram_awaddr_i  ;         
    wire                                sram_wvalid_i  ;         
    wire                                sram_wready_o  ;         
    wire [TOP_DATA_WIDTH-1:0]           sram_wdata_i   ;         
    wire [3:0]                          sram_wstrb_i   ;         
    wire                                sram_bvalid_o  ;         
    wire                                sram_bready_i  ;         
    wire [1:0]                          sram_bresp_o   ;         
    wire                                sram_arvalid_i ;         
    wire                                sram_arready_o ;         
    wire [TOP_DATA_WIDTH-1:0]           sram_araddr_i  ;         
    wire                                sram_rvalid_o  ;         
    wire                                sram_rready_i  ;         
    wire [TOP_DATA_WIDTH-1:0]           sram_rdata_o   ;         
    wire [1:0]                          sram_rresp_o   ;
    wire                                uart_awvalid_i ;         
    wire                                uart_awready_o ;         
    wire [TOP_DATA_WIDTH-1:0]           uart_awaddr_i  ;         
    wire                                uart_wvalid_i  ;         
    wire                                uart_wready_o  ;         
    wire [TOP_DATA_WIDTH-1:0]           uart_wdata_i   ;         
    wire [3:0]                          uart_wstrb_i   ;         
    wire                                uart_bvalid_o  ;         
    wire                                uart_bready_i  ;         
    wire [1:0]                          uart_bresp_o   ;         
    wire                                uart_arvalid_i ;         
    wire                                uart_arready_o ;         
    wire [TOP_DATA_WIDTH-1:0]           uart_araddr_i  ;         
    wire                                uart_rvalid_o  ;         
    wire                                uart_rready_i  ;         
    wire [TOP_DATA_WIDTH-1:0]           uart_rdata_o   ;         
    wire [1:0]                          uart_rresp_o   ;
    wire                               clint_awvalid_i ;         
    wire                               clint_awready_o ;         
    wire [TOP_DATA_WIDTH-1:0]          clint_awaddr_i  ;         
    wire                               clint_wvalid_i  ;         
    wire                               clint_wready_o  ;         
    wire [TOP_DATA_WIDTH-1:0]          clint_wdata_i   ;         
    wire [3:0]                         clint_wstrb_i   ;         
    wire                               clint_bvalid_o  ;         
    wire                               clint_bready_i  ;         
    wire [1:0]                         clint_bresp_o   ;         
    wire                               clint_arvalid_i ;         
    wire                               clint_arready_o ;         
    wire [TOP_DATA_WIDTH-1:0]          clint_araddr_i  ;         
    wire                               clint_rvalid_o  ;         
    wire                               clint_rready_i  ;         
    wire [TOP_DATA_WIDTH-1:0]          clint_rdata_o   ;         
    wire [1:0]                         clint_rresp_o   ;

    // 指令端口默认连接
    assign inst_awvalid_o   = 0 ;
    assign inst_awaddr_o    = 0 ;
    assign inst_wvalid_o    = 0 ;
    assign inst_wdata_o     = 0 ;
    assign inst_wstrb_o     = 0 ;
    assign inst_bready_o    = 0 ;

    // 主设备到仲裁器信号连接
    assign s_awvalid_i      = {mem_awvalid_o, inst_awvalid_o};
    assign s_awaddr_i       = {mem_awaddr_o,  inst_awaddr_o} ;
    assign s_wvalid_i       = {mem_wvalid_o,  inst_wvalid_o} ;
    assign s_wdata_i        = {mem_wdata_o,   inst_wdata_o}  ;
    assign s_wstrb_i        = {mem_wstrb_o,   inst_wstrb_o}  ;
    assign s_bready_i       = {mem_bready_o,  inst_bready_o} ;
    assign s_arvalid_i      = {mem_arvalid_o, inst_arvalid_o};
    assign s_araddr_i       = {mem_araddr_o,  inst_araddr_o} ;
    assign s_rready_i       = {mem_rready_o,  inst_rready_o} ;

    // 仲裁器到主设备信号连接
    assign inst_awready_i   = s_awready_o[0]  ;
    assign inst_wready_i    = s_wready_o[0]   ;
    assign inst_bvalid_i    = s_bvalid_o[0]   ;
    assign inst_bresp_i     = s_bresp_o[1:0]  ;
    assign inst_arready_i   = s_arready_o[0]  ;
    assign inst_rvalid_i    = s_rvalid_o[0]   ;
    assign inst_rdata_i     = s_rdata_o[0*TOP_DATA_WIDTH+:TOP_DATA_WIDTH] ;
    assign inst_rresp_i     = s_rresp_o[1:0]  ;
    assign mem_rvalid_i     = s_rvalid_o[1]   ;
    assign mem_awready_i    = s_awready_o[1]  ;
    assign mem_wready_i     = s_wready_o[1]   ;
    assign mem_bvalid_i     = s_bvalid_o[1]   ;
    assign mem_bresp_i      = s_bresp_o[3:2]  ;
    assign mem_arready_i    = s_arready_o[1]  ;
    assign mem_rdata_i      = s_rdata_o[1*TOP_DATA_WIDTH+:TOP_DATA_WIDTH] ;
    assign mem_rresp_i      = s_rresp_o[3:2]  ;

    // 从设备到仲裁器信号连接
    assign m_awready_i  = {clint_awready_o, uart_awready_o, sram_awready_o};
    assign m_wready_i   = {clint_wready_o,  uart_wready_o,  sram_wready_o};
    assign m_bvalid_i   = {clint_bvalid_o,  uart_bvalid_o,  sram_bvalid_o};
    assign m_bresp_i    = {clint_bresp_o,   uart_bresp_o,   sram_bresp_o};
    assign m_arready_i  = {clint_arready_o, uart_arready_o, sram_arready_o};
    assign m_rvalid_i   = {clint_rvalid_o,  uart_rvalid_o,  sram_rvalid_o};
    assign m_rdata_i    = {clint_rdata_o,   uart_rdata_o,   sram_rdata_o};
    assign m_rresp_i    = {clint_rresp_o,   uart_rresp_o,   sram_rresp_o};

    // 仲裁器到从设备信号连接
    assign sram_awvalid_i = m_awvalid_o[0];
    assign sram_awaddr_i  = m_awaddr_o[0*TOP_DATA_WIDTH +: TOP_DATA_WIDTH];
    assign sram_wvalid_i  = m_wvalid_o[0];
    assign sram_wdata_i   = m_wdata_o[0*TOP_DATA_WIDTH +: TOP_DATA_WIDTH];
    assign sram_wstrb_i   = m_wstrb_o[0*4 +: 4];
    assign sram_bready_i  = m_bready_o[0];
    assign sram_arvalid_i = m_arvalid_o[0];
    assign sram_araddr_i  = m_araddr_o[0*TOP_DATA_WIDTH +: TOP_DATA_WIDTH];
    assign sram_rready_i  = m_rready_o[0];
    assign uart_awvalid_i = m_awvalid_o[1];
    assign uart_awaddr_i  = m_awaddr_o[1*TOP_DATA_WIDTH +: TOP_DATA_WIDTH];
    assign uart_wvalid_i  = m_wvalid_o[1];
    assign uart_wdata_i   = m_wdata_o[1*TOP_DATA_WIDTH +: TOP_DATA_WIDTH];
    assign uart_wstrb_i   = m_wstrb_o[1*4 +: 4];
    assign uart_bready_i  = m_bready_o[1];
    assign uart_arvalid_i = m_arvalid_o[1];
    assign uart_araddr_i  = m_araddr_o[1*TOP_DATA_WIDTH +: TOP_DATA_WIDTH];
    assign uart_rready_i  = m_rready_o[1];
    assign clint_awvalid_i = m_awvalid_o[2];
    assign clint_awaddr_i  = m_awaddr_o[2*TOP_DATA_WIDTH +: TOP_DATA_WIDTH];
    assign clint_wvalid_i  = m_wvalid_o[2];
    assign clint_wdata_i   = m_wdata_o[2*TOP_DATA_WIDTH +: TOP_DATA_WIDTH];
    assign clint_wstrb_i   = m_wstrb_o[2*4 +: 4];
    assign clint_bready_i  = m_bready_o[2];
    assign clint_arvalid_i = m_arvalid_o[2];
    assign clint_araddr_i  = m_araddr_o[2*TOP_DATA_WIDTH +: TOP_DATA_WIDTH];
    assign clint_rready_i  = m_rready_o[2];

    // NPC模块实例化
    ysyx_25050136_NPC #(
        .ADDR_WIDTH(TOP_ADDR_WIDTH),
        .DATA_WIDTH(TOP_DATA_WIDTH)
    ) u_ysyx_25050136_NPC (
        .clk            (clk            ),
        .reset          (reset          ),
        .inst_arvalid_o (inst_arvalid_o ),
        .inst_arready_i (inst_arready_i ),
        .inst_araddr_o  (inst_araddr_o  ),
        .inst_rvalid_i  (inst_rvalid_i  ),
        .inst_rready_o  (inst_rready_o  ),
        .inst_rdata_i   (inst_rdata_i   ),
        .inst_rresp_i   (inst_rresp_i   ),
        .mem_awvalid_o  (mem_awvalid_o  ),
        .mem_awready_i  (mem_awready_i  ),
        .mem_awaddr_o   (mem_awaddr_o   ),
        .mem_wvalid_o   (mem_wvalid_o   ),
        .mem_wready_i   (mem_wready_i   ),
        .mem_wdata_o    (mem_wdata_o    ),
        .mem_wstrb_o    (mem_wstrb_o    ),
        .mem_bvalid_i   (mem_bvalid_i   ),
        .mem_bready_o   (mem_bready_o   ),
        .mem_bresp_i    (mem_bresp_i    ),
        .mem_arvalid_o  (mem_arvalid_o  ),
        .mem_arready_i  (mem_arready_i  ),
        .mem_araddr_o   (mem_araddr_o   ),             
        .mem_rvalid_i   (mem_rvalid_i   ),
        .mem_rready_o   (mem_rready_o   ),
        .mem_rdata_i    (mem_rdata_i    ),
        .mem_rresp_i    (mem_rresp_i    )
    );

    // 仲裁器模块实例化
    ysyx_25050136_ARBITER u_ysyx_25050136_ARBITER (
        .aclk        (clk         ),
        .aresetn     (~reset      ),
        .s_awvalid_i (s_awvalid_i ),
        .s_awready_o (s_awready_o ),
        .s_awaddr_i  (s_awaddr_i  ),
        .s_wvalid_i  (s_wvalid_i  ),
        .s_wready_o  (s_wready_o  ),
        .s_wdata_i   (s_wdata_i   ),
        .s_wstrb_i   (s_wstrb_i   ),
        .s_bvalid_o  (s_bvalid_o  ),
        .s_bready_i  (s_bready_i  ),
        .s_bresp_o   (s_bresp_o   ),
        .s_arvalid_i (s_arvalid_i ),
        .s_arready_o (s_arready_o ),
        .s_araddr_i  (s_araddr_i  ),
        .s_rvalid_o  (s_rvalid_o  ),
        .s_rready_i  (s_rready_i  ),
        .s_rdata_o   (s_rdata_o   ),
        .s_rresp_o   (s_rresp_o   ),
        .m_awvalid_o (m_awvalid_o ),
        .m_awready_i (m_awready_i ),
        .m_awaddr_o  (m_awaddr_o  ),
        .m_wvalid_o  (m_wvalid_o  ),
        .m_wready_i  (m_wready_i  ),
        .m_wdata_o   (m_wdata_o   ),
        .m_wstrb_o   (m_wstrb_o   ),
        .m_bvalid_i  (m_bvalid_i  ),
        .m_bready_o  (m_bready_o  ),
        .m_bresp_i   (m_bresp_i   ),
        .m_arvalid_o (m_arvalid_o ),
        .m_arready_i (m_arready_i ),
        .m_araddr_o  (m_araddr_o  ),
        .m_rvalid_i  (m_rvalid_i  ),
        .m_rready_o  (m_rready_o  ),
        .m_rdata_i   (m_rdata_i   ),
        .m_rresp_i   (m_rresp_i   )
    );

    // SRAM模块实例化
    ysyx_25050136_SRAM #(
        .ADDR_WIDTH(TOP_DATA_WIDTH),
        .DATA_WIDTH(TOP_DATA_WIDTH)
    ) u_SRAM (
        .aclk        (clk            ),
        .aresetn     (~reset         ),
        .s_awvalid_i (sram_awvalid_i ),
        .s_awready_o (sram_awready_o ),
        .s_awaddr_i  (sram_awaddr_i  ),
        .s_wvalid_i  (sram_wvalid_i  ),
        .s_wready_o  (sram_wready_o  ),
        .s_wdata_i   (sram_wdata_i   ),
        .s_wstrb_i   (sram_wstrb_i   ),
        .s_bvalid_o  (sram_bvalid_o  ),
        .s_bready_i  (sram_bready_i  ),
        .s_bresp_o   (sram_bresp_o   ),
        .s_arvalid_i (sram_arvalid_i ),
        .s_arready_o (sram_arready_o ),
        .s_araddr_i  (sram_araddr_i  ),
        .s_rvalid_o  (sram_rvalid_o  ),
        .s_rready_i  (sram_rready_i  ),
        .s_rdata_o   (sram_rdata_o   ),
        .s_rresp_o   (sram_rresp_o   )
    );
    
    ysyx_25050136_UART u_ysyx_25050136_UART(
        .aclk        	(clk             ),
        .aresetn     	(~reset          ),
        .s_awvalid_i 	(uart_awvalid_i  ),
        .s_awready_o 	(uart_awready_o  ),
        .s_awaddr_i  	(uart_awaddr_i   ),
        .s_wvalid_i  	(uart_wvalid_i   ),
        .s_wready_o  	(uart_wready_o   ),
        .s_wdata_i   	(uart_wdata_i    ),
        .s_wstrb_i   	(uart_wstrb_i    ),
        .s_bvalid_o  	(uart_bvalid_o   ),
        .s_bready_i  	(uart_bready_i   ),
        .s_bresp_o   	(uart_bresp_o    ),
        .s_arvalid_i 	(uart_arvalid_i  ),
        .s_arready_o 	(uart_arready_o  ),
        .s_araddr_i  	(uart_araddr_i   ),
        .s_rvalid_o  	(uart_rvalid_o   ),
        .s_rready_i  	(uart_rready_i   ),
        .s_rdata_o   	(uart_rdata_o    ),
        .s_rresp_o   	(uart_rresp_o    )
    );

    ysyx_25050136_CLINT u_ysyx_25050136_CLINT(
        .aclk        	(clk              ),
        .aresetn     	(~reset           ),
        .s_awvalid_i 	(clint_awvalid_i  ),
        .s_awready_o 	(clint_awready_o  ),
        .s_awaddr_i  	(clint_awaddr_i   ),
        .s_wvalid_i  	(clint_wvalid_i   ),
        .s_wready_o  	(clint_wready_o   ),
        .s_wdata_i   	(clint_wdata_i    ),
        .s_wstrb_i   	(clint_wstrb_i    ),
        .s_bvalid_o  	(clint_bvalid_o   ),
        .s_bready_i  	(clint_bready_i   ),
        .s_bresp_o   	(clint_bresp_o    ),
        .s_arvalid_i 	(clint_arvalid_i  ),
        .s_arready_o 	(clint_arready_o  ),
        .s_araddr_i  	(clint_araddr_i   ),
        .s_rvalid_o  	(clint_rvalid_o   ),
        .s_rready_i  	(clint_rready_i   ),
        .s_rdata_o   	(clint_rdata_o    ),
        .s_rresp_o   	(clint_rresp_o    )
    );
        
endmodule
