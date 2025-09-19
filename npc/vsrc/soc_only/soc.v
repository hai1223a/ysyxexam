`ifdef ysyx_25050136_VERILATOR_DPIC
import "DPI-C" function void find_addr_0(); 
import "DPI-C" function void find_ebreak();
import "DPI-C" function void find_resp();
import "DPI-C" function void find_diff_skip(); 
import "DPI-C" function void ifu_get();
import "DPI-C" function void lsu_get();
import "DPI-C" function void bqu_get();
import "DPI-C" function void csru_get();
import "DPI-C" function void alu_get();
import "DPI-C" function void if_cycle_get();
import "DPI-C" function void lsu_cycle_get();
import "DPI-C" function void icache_hit();
`endif

module ysyx_25050136(
    input               clock             ,
    input               reset             ,
    input               io_interrupt      ,

    // AXI4 Master接口
    // 写地址通道
    input               io_master_awready ,
    output              io_master_awvalid ,
    output      [31:0]  io_master_awaddr  ,
    output      [3:0]   io_master_awid    ,
    output      [7:0]   io_master_awlen   ,
    output      [2:0]   io_master_awsize  ,
    output      [1:0]   io_master_awburst ,
    // 写数据通道
    input               io_master_wready  ,
    output              io_master_wvalid  ,
    output      [31:0]  io_master_wdata   ,
    output      [3:0]   io_master_wstrb   ,
    output              io_master_wlast   ,
    // 写响应通道
    output              io_master_bready  ,
    input               io_master_bvalid  ,
    input       [1:0]   io_master_bresp   ,
    input       [3:0]   io_master_bid     ,
    // 读地址通道
    input               io_master_arready ,
    output              io_master_arvalid ,
    output      [31:0]  io_master_araddr  ,
    output      [3:0]   io_master_arid    ,
    output      [7:0]   io_master_arlen   ,
    output      [2:0]   io_master_arsize  ,
    output      [1:0]   io_master_arburst ,
    // 读数据通道
    output              io_master_rready  ,
    input               io_master_rvalid  ,
    input       [1:0]   io_master_rresp   ,
    input       [31:0]  io_master_rdata   ,
    input               io_master_rlast   ,
    input       [3:0]   io_master_rid     ,
    // AXI4 Slave接口
    // 写地址通道
    output              io_slave_awready  ,
    input               io_slave_awvalid  ,
    input       [31:0]  io_slave_awaddr   ,
    input       [3:0]   io_slave_awid     ,
    input       [7:0]   io_slave_awlen    ,
    input       [2:0]   io_slave_awsize   ,
    input       [1:0]   io_slave_awburst  ,
    // 写数据通道
    output              io_slave_wready   ,
    input               io_slave_wvalid   ,
    input       [31:0]  io_slave_wdata    ,
    input       [3:0]   io_slave_wstrb    ,
    input               io_slave_wlast    ,
    // 写响应通道
    input               io_slave_bready   ,
    output              io_slave_bvalid   ,
    output      [1:0]   io_slave_bresp    ,
    output      [3:0]   io_slave_bid      ,
    // 读地址通道
    output              io_slave_arready  ,
    input               io_slave_arvalid  ,
    input       [31:0]  io_slave_araddr   ,
    input       [3:0]   io_slave_arid     ,
    input       [7:0]   io_slave_arlen    ,
    input       [2:0]   io_slave_arsize   ,
    input       [1:0]   io_slave_arburst  ,
    // 读数据通道
    input               io_slave_rready   ,
    output              io_slave_rvalid   ,
    output      [1:0]   io_slave_rresp    ,
    output      [31:0]  io_slave_rdata    ,
    output              io_slave_rlast    ,
    output      [3:0]   io_slave_rid
);
`ifdef ysyx_25050136_VERILATOR_DPIC
    always @(*) begin
        if ((io_master_awvalid & io_master_awready & (io_master_awaddr == 0)) |
            (io_master_arvalid & io_master_arready & (io_master_araddr == 0)) )
        begin
            find_addr_0();
        end
    end
`endif
    localparam TOP_ADDR_WIDTH   = 5 ;
    localparam TOP_DATA_WIDTH   = 32;
    localparam TOP_MASTER_NUM   = 2 ;

    // 仲裁器信号
    wire [TOP_MASTER_NUM-1:0]                s_awvalid_i ;
    wire [TOP_MASTER_NUM-1:0]                s_awready_o ;
    wire [TOP_MASTER_NUM*TOP_DATA_WIDTH-1:0] s_awaddr_i  ;
    wire [TOP_MASTER_NUM*4-1:0]              s_awid_i    ;
    wire [TOP_MASTER_NUM*8-1:0]              s_awlen_i   ;
    wire [TOP_MASTER_NUM*3-1:0]              s_awsize_i  ;
    wire [TOP_MASTER_NUM*2-1:0]              s_awburst_i ;
    wire [TOP_MASTER_NUM-1:0]                s_wvalid_i  ;
    wire [TOP_MASTER_NUM-1:0]                s_wready_o  ;
    wire [TOP_MASTER_NUM*TOP_DATA_WIDTH-1:0] s_wdata_i   ;
    wire [TOP_MASTER_NUM*4-1:0]              s_wstrb_i   ;
    wire [TOP_MASTER_NUM-1:0]                s_wlast_i   ;
    wire [TOP_MASTER_NUM-1:0]                s_bvalid_o  ;
    wire [TOP_MASTER_NUM-1:0]                s_bready_i  ;
    wire [TOP_MASTER_NUM*2-1:0]              s_bresp_o   ;
    wire [TOP_MASTER_NUM*4-1:0]              s_bid_o     ;
    wire [TOP_MASTER_NUM-1:0]                s_arvalid_i ;
    wire [TOP_MASTER_NUM-1:0]                s_arready_o ;
    wire [TOP_MASTER_NUM*TOP_DATA_WIDTH-1:0] s_araddr_i  ;
    wire [TOP_MASTER_NUM*4-1:0]              s_arid_i    ;
    wire [TOP_MASTER_NUM*8-1:0]              s_arlen_i   ;
    wire [TOP_MASTER_NUM*3-1:0]              s_arsize_i  ;
    wire [TOP_MASTER_NUM*2-1:0]              s_arburst_i ;
    wire [TOP_MASTER_NUM-1:0]                s_rvalid_o  ;
    wire [TOP_MASTER_NUM-1:0]                s_rready_i  ;
    wire [TOP_MASTER_NUM*TOP_DATA_WIDTH-1:0] s_rdata_o   ;
    wire [TOP_MASTER_NUM*2-1:0]              s_rresp_o   ;
    wire [TOP_MASTER_NUM-1:0]                s_rlast_o   ;
    wire [TOP_MASTER_NUM*4-1:0]              s_rid_o     ;

    // 主设备信号        
    wire                                  inst_arvalid_o ;
    wire                                  inst_arready_i ;
    wire [TOP_DATA_WIDTH-1:0]             inst_araddr_o  ;
    wire [3:0]                            inst_arid_o    ;
    wire [7:0]                            inst_arlen_o   ;
    wire [2:0]                            inst_arsize_o  ;
    wire [1:0]                            inst_arburst_o ;
    wire                                  inst_rvalid_i  ;
    wire                                  inst_rready_o  ;
    wire [TOP_DATA_WIDTH-1:0]             inst_rdata_i   ;
    wire [1:0]                            inst_rresp_i   ;
    wire                                  inst_rlast_i   ;
    wire [3:0]                            inst_rid_i     ;
    wire                                  inst_awvalid_o ;
    wire                                  inst_awready_i ;
    wire [TOP_DATA_WIDTH-1:0]             inst_awaddr_o  ;
    wire [3:0]                            inst_awid_o    ;
    wire [7:0]                            inst_awlen_o   ;
    wire [2:0]                            inst_awsize_o  ;
    wire [1:0]                            inst_awburst_o ;
    wire                                  inst_wvalid_o  ;
    wire                                  inst_wready_i  ;
    wire [TOP_DATA_WIDTH-1:0]             inst_wdata_o   ;
    wire [3:0]                            inst_wstrb_o   ;
    wire                                  inst_wlast_o   ;
    wire                                  inst_bvalid_i  ;
    wire                                  inst_bready_o  ;
    wire [1:0]                            inst_bresp_i   ;
    wire [3:0]                            inst_bid_i     ;
    wire                                  mem_awvalid_o  ;
    wire                                  mem_awready_i  ;
    wire [TOP_DATA_WIDTH-1:0]             mem_awaddr_o   ;
    wire [3:0]                            mem_awid_o     ;
    wire [7:0]                            mem_awlen_o    ;
    wire [2:0]                            mem_awsize_o   ;
    wire [1:0]                            mem_awburst_o  ;
    wire                                  mem_wvalid_o   ;
    wire                                  mem_wready_i   ;
    wire [TOP_DATA_WIDTH-1:0]             mem_wdata_o    ;
    wire [3:0]                            mem_wstrb_o    ;
    wire                                  mem_wlast_o    ;
    wire                                  mem_bvalid_i   ;
    wire                                  mem_bready_o   ;
    wire [1:0]                            mem_bresp_i    ;
    wire [3:0]                            mem_bid_i      ;
    wire                                  mem_arvalid_o  ;
    wire                                  mem_arready_i  ;
    wire [TOP_DATA_WIDTH-1:0]             mem_araddr_o   ;
    wire [3:0]                            mem_arid_o     ;
    wire [7:0]                            mem_arlen_o    ;
    wire [2:0]                            mem_arsize_o   ;
    wire [1:0]                            mem_arburst_o  ;
    wire                                  mem_rvalid_i   ;
    wire                                  mem_rready_o   ;
    wire [TOP_DATA_WIDTH-1:0]             mem_rdata_i    ;
    wire [1:0]                            mem_rresp_i    ;
    wire                                  mem_rlast_i    ;
    wire [3:0]                            mem_rid_i      ;

    // 指令端口默认连接
    assign inst_awvalid_o   = 0 ;
    assign inst_awaddr_o    = 0 ;
    assign inst_awid_o      = 0 ;
    assign inst_awlen_o     = 0 ;
    assign inst_awsize_o    = 0 ;
    assign inst_awburst_o   = 0 ;
    assign inst_wvalid_o    = 0 ;
    assign inst_wdata_o     = 0 ;
    assign inst_wstrb_o     = 0 ;
    assign inst_wlast_o     = 0 ;
    assign inst_bready_o    = 0 ;

    // 主设备到仲裁器信号连接
    assign s_awvalid_i   = {mem_awvalid_o, inst_awvalid_o} ;
    assign s_awaddr_i    = {mem_awaddr_o,  inst_awaddr_o}  ;
    assign s_awid_i      = {mem_awid_o,    inst_awid_o}    ;
    assign s_awlen_i     = {mem_awlen_o,   inst_awlen_o}   ;
    assign s_awsize_i    = {mem_awsize_o,  inst_awsize_o}  ;
    assign s_awburst_i   = {mem_awburst_o, inst_awburst_o} ;
    assign s_wvalid_i    = {mem_wvalid_o,  inst_wvalid_o}  ;
    assign s_wdata_i     = {mem_wdata_o,   inst_wdata_o}   ;
    assign s_wstrb_i     = {mem_wstrb_o,   inst_wstrb_o}   ;
    assign s_wlast_i     = {mem_wlast_o,   inst_wlast_o}   ;
    assign s_bready_i    = {mem_bready_o,  inst_bready_o}  ;
    assign s_arvalid_i   = {mem_arvalid_o, inst_arvalid_o} ;
    assign s_araddr_i    = {mem_araddr_o,  inst_araddr_o}  ;
    assign s_arid_i      = {mem_arid_o,    inst_arid_o}    ;
    assign s_arlen_i     = {mem_arlen_o,   inst_arlen_o}   ;
    assign s_arsize_i    = {mem_arsize_o,  inst_arsize_o}  ;
    assign s_arburst_i   = {mem_arburst_o, inst_arburst_o} ;
    assign s_rready_i    = {mem_rready_o,  inst_rready_o}  ;
    
    // 仲裁器到主设备信号连接
    assign inst_awready_i = s_awready_o[0] ;
    assign inst_wready_i  = s_wready_o[0]  ;
    assign inst_bvalid_i  = s_bvalid_o[0]  ;
    assign inst_bresp_i   = s_bresp_o[1:0] ;
    assign inst_bid_i     = s_bid_o[3:0]   ;
    assign inst_arready_i = s_arready_o[0] ;
    assign inst_rvalid_i  = s_rvalid_o[0]  ;
    assign inst_rdata_i   = s_rdata_o[0*TOP_DATA_WIDTH+:TOP_DATA_WIDTH];
    assign inst_rresp_i   = s_rresp_o[1:0] ;
    assign inst_rlast_i   = s_rlast_o[0]   ;
    assign inst_rid_i     = s_rid_o[3:0]   ;
    assign mem_awready_i  = s_awready_o[1] ;
    assign mem_wready_i   = s_wready_o[1]  ;
    assign mem_bvalid_i   = s_bvalid_o[1]  ;
    assign mem_bresp_i    = s_bresp_o[3:2] ;
    assign mem_bid_i      = s_bid_o[7:4]   ;
    assign mem_arready_i  = s_arready_o[1] ;
    assign mem_rvalid_i   = s_rvalid_o[1]  ;
    assign mem_rdata_i    = s_rdata_o[1*TOP_DATA_WIDTH+:TOP_DATA_WIDTH];
    assign mem_rresp_i    = s_rresp_o[3:2] ;
    assign mem_rlast_i    = s_rlast_o[1]   ;
    assign mem_rid_i      = s_rid_o[7:4]   ;

    // 顶层AXI SLAVER接口
    assign io_slave_awready = 0;
    assign io_slave_wready = 0;
    assign io_slave_bvalid = 0;
    assign io_slave_bvalid = 0;
    assign io_slave_bresp = 0; 
    assign io_slave_bid = 0;   
    assign io_slave_arready = 0;
    assign io_slave_rvalid = 0;
    assign io_slave_rresp = 0; 
    assign io_slave_rdata = 0; 
    assign io_slave_rlast = 0; 
    assign io_slave_rid = 0;
    // NPC模块实例化
    ysyx_25050136_NPC #(
        .ADDR_WIDTH(TOP_ADDR_WIDTH),
        .DATA_WIDTH(TOP_DATA_WIDTH)
    ) u_ysyx_25050136_NPC (
        .clk            	(clock           ),
        .reset          	(reset           ),
        .inst_arvalid_o 	(inst_arvalid_o  ),
        .inst_arready_i 	(inst_arready_i  ),
        .inst_araddr_o  	(inst_araddr_o   ),
        .inst_arid_o    	(inst_arid_o     ),
        .inst_arlen_o   	(inst_arlen_o    ),
        .inst_arsize_o  	(inst_arsize_o   ),
        .inst_arburst_o 	(inst_arburst_o  ),
        .inst_rvalid_i  	(inst_rvalid_i   ),
        .inst_rready_o  	(inst_rready_o   ),
        .inst_rdata_i   	(inst_rdata_i    ),
        .inst_rresp_i   	(inst_rresp_i    ),
        .inst_rlast_i   	(inst_rlast_i    ),
        .inst_rid_i     	(inst_rid_i      ),
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
    
    // 仲裁器模块实例化
    ysyx_25050136_ARBITER #(
        .MASTER_NUM(TOP_MASTER_NUM),
        .DATA_WIDTH(TOP_DATA_WIDTH),
        .ADDR_WIDTH(TOP_DATA_WIDTH)
    )
    u_ysyx_25050136_ARBITER(
        .clk        	(clock              ),
        .reset      	(reset              ),
        .s_awvalid_i 	(s_awvalid_i        ),
        .s_awready_o 	(s_awready_o        ),
        .s_awaddr_i  	(s_awaddr_i         ),
        .s_awid_i    	(s_awid_i           ),
        .s_awlen_i   	(s_awlen_i          ),
        .s_awsize_i  	(s_awsize_i         ),
        .s_awburst_i 	(s_awburst_i        ),
        .s_wvalid_i  	(s_wvalid_i         ),
        .s_wready_o  	(s_wready_o         ),
        .s_wdata_i   	(s_wdata_i          ),
        .s_wstrb_i   	(s_wstrb_i          ),
        .s_wlast_i   	(s_wlast_i          ),
        .s_bvalid_o  	(s_bvalid_o         ),
        .s_bready_i  	(s_bready_i         ),
        .s_bresp_o   	(s_bresp_o          ),
        .s_bid_o     	(s_bid_o            ),
        .s_arvalid_i 	(s_arvalid_i        ),
        .s_arready_o 	(s_arready_o        ),
        .s_araddr_i  	(s_araddr_i         ),
        .s_arid_i    	(s_arid_i           ),
        .s_arlen_i   	(s_arlen_i          ),
        .s_arsize_i  	(s_arsize_i         ),
        .s_arburst_i 	(s_arburst_i        ),
        .s_rvalid_o  	(s_rvalid_o         ),
        .s_rready_i  	(s_rready_i         ),
        .s_rdata_o   	(s_rdata_o          ),
        .s_rresp_o   	(s_rresp_o          ),
        .s_rlast_o   	(s_rlast_o          ),
        .s_rid_o     	(s_rid_o            ),
        .m_awvalid_o 	(io_master_awvalid  ),
        .m_awready_i 	(io_master_awready  ),
        .m_awaddr_o  	(io_master_awaddr   ),
        .m_awid_o    	(io_master_awid     ),
        .m_awlen_o   	(io_master_awlen    ),
        .m_awsize_o  	(io_master_awsize   ),
        .m_awburst_o 	(io_master_awburst  ),
        .m_wvalid_o  	(io_master_wvalid   ),
        .m_wready_i  	(io_master_wready   ),
        .m_wdata_o   	(io_master_wdata    ),
        .m_wstrb_o   	(io_master_wstrb    ),
        .m_wlast_o   	(io_master_wlast    ),
        .m_bvalid_i  	(io_master_bvalid   ),
        .m_bready_o  	(io_master_bready   ),
        .m_bresp_i   	(io_master_bresp    ),
        .m_bid_i     	(io_master_bid      ),
        .m_arvalid_o 	(io_master_arvalid  ),
        .m_arready_i 	(io_master_arready  ),
        .m_araddr_o  	(io_master_araddr   ),
        .m_arid_o    	(io_master_arid     ),
        .m_arlen_o   	(io_master_arlen    ),
        .m_arsize_o  	(io_master_arsize   ),
        .m_arburst_o 	(io_master_arburst  ),
        .m_rvalid_i  	(io_master_rvalid   ),
        .m_rready_o  	(io_master_rready   ),
        .m_rdata_i   	(io_master_rdata    ),
        .m_rresp_i   	(io_master_rresp    ),
        .m_rlast_i   	(io_master_rlast    ),
        .m_rid_i     	(io_master_rid      )
    );
    
endmodule
