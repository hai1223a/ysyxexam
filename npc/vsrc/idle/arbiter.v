module ysyx_25050136_ARBITER
    #(
        parameter MASTER_NUM = 2,
        parameter SLAVER_NUM = 4,
        parameter DATA_WIDTH = 32,
        parameter ADDR_WIDTH = 32
     )
     (
        // 通用数据
        input                                   aclk        ,
        input                                   aresetn     ,
        // 来自主设备的AXI信号
        // 写地址
        input     [MASTER_NUM-1:0]              s_awvalid_i ,
        output    [MASTER_NUM-1:0]              s_awready_o ,
        input     [MASTER_NUM*ADDR_WIDTH-1:0]   s_awaddr_i  ,
        input     [MASTER_NUM*4-1:0]            s_awid_i    ,
        input     [MASTER_NUM*8-1:0]            s_awlen_i   ,
        input     [MASTER_NUM*3-1:0]            s_awsize_i  ,
        input     [MASTER_NUM*2-1:0]            s_awburst_i ,
        // 写数据
        input     [MASTER_NUM-1:0]              s_wvalid_i  ,
        output    [MASTER_NUM-1:0]              s_wready_o  ,
        input     [MASTER_NUM*DATA_WIDTH-1:0]   s_wdata_i   ,
        input     [MASTER_NUM*4-1:0]            s_wstrb_i   ,
        input     [MASTER_NUM-1:0]              s_wlast_i   ,
        // 写响应
        output    [MASTER_NUM-1:0]              s_bvalid_o  ,
        input     [MASTER_NUM-1:0]              s_bready_i  ,
        output    [MASTER_NUM*2-1:0]            s_bresp_o   ,
        output    [MASTER_NUM*4-1:0]            s_bid_o     ,
        // 读地址
        input     [MASTER_NUM-1:0]              s_arvalid_i ,
        output    [MASTER_NUM-1:0]              s_arready_o ,
        input     [MASTER_NUM*ADDR_WIDTH-1:0]   s_araddr_i  ,
        input     [MASTER_NUM*4-1:0]            s_arid_i    ,
        input     [MASTER_NUM*8-1:0]            s_arlen_i   ,
        input     [MASTER_NUM*3-1:0]            s_arsize_i  ,
        input     [MASTER_NUM*2-1:0]            s_arburst_i ,
        // 读数据
        output    [MASTER_NUM-1:0]              s_rvalid_o  ,
        input     [MASTER_NUM-1:0]              s_rready_i  ,
        output    [MASTER_NUM*DATA_WIDTH-1:0]   s_rdata_o   ,
        output    [MASTER_NUM*2-1:0]            s_rresp_o   ,
        output    [MASTER_NUM-1:0]              s_rlast_o   ,
        output    [MASTER_NUM*4-1:0]            s_rid_o     ,
        // 来自从设备的AXI信号
        // 写地址
        output    [SLAVER_NUM-1:0]              m_awvalid_o ,
        input     [SLAVER_NUM-1:0]              m_awready_i ,
        output    [SLAVER_NUM*ADDR_WIDTH-1:0]   m_awaddr_o  ,
        output    [SLAVER_NUM*4-1:0]            m_awid_o    ,
        output    [SLAVER_NUM*8-1:0]            m_awlen_o   ,
        output    [SLAVER_NUM*3-1:0]            m_awsize_o  ,
        output    [SLAVER_NUM*2-1:0]            m_awburst_o ,
        // 写数据
        output    [SLAVER_NUM-1:0]              m_wvalid_o  ,
        input     [SLAVER_NUM-1:0]              m_wready_i  ,
        output    [SLAVER_NUM*DATA_WIDTH-1:0]   m_wdata_o   ,
        output    [SLAVER_NUM*4-1:0]            m_wstrb_o   ,
        output    [SLAVER_NUM-1:0]              m_wlast_o   ,
        // 写响应
        input     [SLAVER_NUM-1:0]              m_bvalid_i  ,
        output    [SLAVER_NUM-1:0]              m_bready_o  ,
        input     [SLAVER_NUM*2-1:0]            m_bresp_i   ,
        input     [SLAVER_NUM*4-1:0]            m_bid_i     ,
        // 读地址
        output    [SLAVER_NUM-1:0]              m_arvalid_o ,
        input     [SLAVER_NUM-1:0]              m_arready_i ,
        output    [SLAVER_NUM*ADDR_WIDTH-1:0]   m_araddr_o  ,
        output    [SLAVER_NUM*4-1:0]            m_arid_o    ,
        output    [SLAVER_NUM*8-1:0]            m_arlen_o   ,
        output    [SLAVER_NUM*3-1:0]            m_arsize_o  ,
        output    [SLAVER_NUM*2-1:0]            m_arburst_o ,
        // 读数据
        input     [SLAVER_NUM-1:0]              m_rvalid_i  ,
        output    [SLAVER_NUM-1:0]              m_rready_o  ,
        input     [SLAVER_NUM*DATA_WIDTH-1:0]   m_rdata_i   ,
        input     [SLAVER_NUM*2-1:0]            m_rresp_i   ,
        input     [SLAVER_NUM-1:0]              m_rlast_i   ,
        input     [SLAVER_NUM*4-1:0]            m_rid_i
     );

    localparam s0_Laddr = 32'h02000000;
    localparam s0_Raddr = 32'h0200ffff;
    localparam s1_Laddr = 32'h80000000;
    localparam s1_Raddr = 32'h8f000000;
    localparam s2_Laddr = 32'ha0000000;
    localparam s2_Raddr = 32'ha1000000;

    // AXI4-Full中间信号
    wire                    t_awvalid;
    wire                    t_awready;
    wire [ADDR_WIDTH-1:0]   t_awaddr;
    wire [3:0]              t_awid;
    wire [7:0]              t_awlen;
    wire [2:0]              t_awsize;
    wire [1:0]              t_awburst;
    wire                    t_wvalid;
    wire                    t_wready;
    wire [DATA_WIDTH-1:0]   t_wdata;
    wire [3:0]              t_wstrb;
    wire                    t_wlast;
    wire                    t_bvalid;
    wire                    t_bready;
    wire [1:0]              t_bresp;
    wire [3:0]              t_bid;
    wire                    t_arvalid;
    wire                    t_arready;
    wire [ADDR_WIDTH-1:0]   t_araddr;
    wire [3:0]              t_arid;
    wire [7:0]              t_arlen;
    wire [2:0]              t_arsize;
    wire [1:0]              t_arburst;
    wire                    t_rvalid;
    wire                    t_rready;
    wire [DATA_WIDTH-1:0]   t_rdata;
    wire [1:0]              t_rresp;
    wire                    t_rlast;
    wire [3:0]              t_rid; 
    wire [DATA_WIDTH-1:0]   for_s_awaddr;
    wire [DATA_WIDTH-1:0]   for_s_araddr;

    // 目前默认多主多从, 仲裁逻辑为优先级仲裁, 低位优先级最高
    reg [MASTER_NUM-1:0] current_master;    // 当前主设备
    reg [MASTER_NUM-2:0] current_master_id;
    reg [MASTER_NUM-1:0] master_grand;      // 主设备授权
    reg [MASTER_NUM-2:0] master_id;
    reg [SLAVER_NUM-1:0] current_slaver;    // 当前从设备
    reg [SLAVER_NUM-2:0] current_slaver_id;
    reg [SLAVER_NUM-1:0] slaver_grand;      // 从设备授权
    reg [SLAVER_NUM-2:0] slaver_id;
    wire [MASTER_NUM-1:0] request;          // 主设备请求

    assign request = s_awvalid_i | s_arvalid_i;
    
    always @(*) begin
        master_grand = 0;
        master_id = 0;
        // 优先级编码器
        if (request[0]) begin
            master_id = 0;
            master_grand[0] = 1'b1;
        end
        // 继续添加更多主设备...
        else if (request[1]) begin
            master_id = 1;
            master_grand[1] = 1'b1;
        end
    end

    always @(posedge aclk) begin
        if (!aresetn) begin
            current_master <= 0;
            current_master_id <= 0;
        end else begin
            if(current_master == 0 || 
            (t_bvalid && t_bready) || 
            (t_rvalid && t_rready)) begin
                current_master_id <= master_id;
                current_master <= master_grand;
            end
        end
    end
    // 这里设置了不同从设备的地址空间
    
    assign for_s_awaddr = s_awaddr_i[master_id * ADDR_WIDTH +: ADDR_WIDTH];
    assign for_s_araddr = s_araddr_i[master_id * ADDR_WIDTH +: ADDR_WIDTH];
    always @(*) begin
        slaver_grand = 0;
        slaver_id = 0;
        if(|request) begin
            if(for_s_awaddr >= s0_Laddr && for_s_awaddr <= s0_Raddr ||
            for_s_araddr >= s0_Laddr && for_s_araddr <= s0_Raddr) begin
                    slaver_grand[0] = 1;
                    slaver_id = 0;
                end
            else if(for_s_awaddr >= s1_Laddr && for_s_awaddr <= s1_Raddr ||
            for_s_araddr >= s1_Laddr && for_s_araddr <= s1_Raddr) begin
                    slaver_grand[1] = 1;
                    slaver_id = 1;
                end
            else if(for_s_awaddr >= s2_Laddr && for_s_awaddr <= s2_Raddr ||
            for_s_araddr >= s2_Laddr && for_s_araddr <= s2_Raddr) begin
                    slaver_grand[2] = 1;
                    slaver_id = 2;
                end
            else
                begin
                    slaver_grand[3] = 1;
                    slaver_id = 3;
                end
        end
    end

    always @(posedge aclk) begin
        if (!aresetn) begin
            current_slaver <= 0;
            current_slaver_id <= 0;
        end else begin
            if(current_slaver == 0 || 
            (t_bvalid && t_bready) || 
            (t_rvalid && t_rready)) begin
                current_slaver_id <= slaver_id;
                current_slaver <= slaver_grand;
            end
        end
    end

    // 从设备与仲裁器
    // 写地址
    assign t_awvalid = |(s_awvalid_i & current_master);
    assign t_awaddr  = s_awaddr_i[current_master_id * ADDR_WIDTH +: ADDR_WIDTH];
    assign t_awid    = s_awid_i[current_master_id * 4 +: 4];
    assign t_awlen   = s_awlen_i[current_master_id * 8 +: 8];
    assign t_awsize  = s_awsize_i[current_master_id * 3 +: 3];
    assign t_awburst = s_awburst_i[current_master_id * 2 +: 2];
    // 写数据
    assign t_wvalid  = |(s_wvalid_i & current_master);
    assign t_wdata   = s_wdata_i[current_master_id * DATA_WIDTH +: DATA_WIDTH];
    assign t_wstrb   = s_wstrb_i[current_master_id * 4 +: 4];
    assign t_wlast   = s_wlast_i[current_master_id];
    // 写响应
    assign t_bready  = |(s_bready_i & current_master);
    // 读地址
    assign t_arvalid = |(s_arvalid_i & current_master);
    assign t_araddr  = s_araddr_i[current_master_id * ADDR_WIDTH +: ADDR_WIDTH];
    assign t_arid    = s_arid_i[current_master_id * 4 +: 4];
    assign t_arlen   = s_arlen_i[current_master_id * 8 +: 8];
    assign t_arsize  = s_arsize_i[current_master_id * 3 +: 3];
    assign t_arburst = s_arburst_i[current_master_id * 2 +: 2];
    // 读数据
    assign t_rready  = |(s_rready_i & current_master);
    
    // 主设备方向
    genvar i;
    generate
        for (i = 0; i < MASTER_NUM ; i = i + 1) begin
            assign s_awready_o[i]    = t_awready & current_master[i];
            assign s_wready_o[i]     = t_wready & current_master[i];
            assign s_bvalid_o[i]     = t_bvalid & current_master[i];
            assign s_bresp_o[i*2+:2] = current_master[i] ? t_bresp : 0;
            assign s_bid_o[i*4+:4]   = current_master[i] ? t_bid : 0;
            assign s_arready_o[i]    = t_arready & current_master[i];
            assign s_rvalid_o[i]     = t_rvalid & current_master[i];
            assign s_rdata_o[i*DATA_WIDTH+:DATA_WIDTH] = current_master[i] ? t_rdata : 0;
            assign s_rresp_o[i*2+:2] = current_master[i] ? t_rresp : 0;
            assign s_rlast_o[i]      = current_master[i] ? t_rlast : 0;
            assign s_rid_o[i*4+:4]   = current_master[i] ? t_rid : 0;
        end
    endgenerate

    // 主设备与仲裁器
    // 写地址
    assign t_awready = |(m_awready_i & current_slaver);
    // 写数据
    assign t_wready  = |(m_wready_i & current_slaver);
    // 写响应
    assign t_bvalid  = |(m_bvalid_i & current_slaver);
    assign t_bresp   = m_bresp_i[current_slaver_id * 2 +: 2];
    assign t_bid     = m_bid_i[current_slaver_id * 4 +: 4];
    // 读地址
    assign t_arready = |(m_arready_i & current_slaver);
    // 读数据
    assign t_rvalid  = |(m_rvalid_i & current_slaver);
    assign t_rdata   = m_rdata_i[current_slaver_id * DATA_WIDTH +: DATA_WIDTH];
    assign t_rresp   = m_rresp_i[current_slaver_id * 2 +: 2];
    assign t_rlast   = m_rlast_i[current_slaver_id];
    assign t_rid     = m_rid_i[current_slaver_id * 4 +: 4];

    // 从设备方向
    genvar j;
    generate
        for(j = 0; j < SLAVER_NUM; j = j + 1) begin
            assign m_awvalid_o[j]      = t_awvalid & current_slaver[j];
            assign m_awaddr_o[j*ADDR_WIDTH+:ADDR_WIDTH] = current_slaver[j] ? t_awaddr : 0;
            assign m_awid_o[j*4+:4]    = current_slaver[j] ? t_awid : 0;
            assign m_awlen_o[j*8+:8]   = current_slaver[j] ? t_awlen : 0;
            assign m_awsize_o[j*3+:3]  = current_slaver[j] ? t_awsize : 0;
            assign m_awburst_o[j*2+:2] = current_slaver[j] ? t_awburst : 0;
            assign m_wvalid_o[j]       = t_wvalid & current_slaver[j];
            assign m_wdata_o[j*DATA_WIDTH+:DATA_WIDTH] = current_slaver[j] ? t_wdata : 0;
            assign m_wstrb_o[j*4+:4]   = current_slaver[j] ? t_wstrb : 0;
            assign m_wlast_o[j]        = current_slaver[j] ? t_wlast : 0;
            assign m_bready_o[j]       = t_bready & current_slaver[j];
            assign m_arvalid_o[j]      = t_arvalid & current_slaver[j];
            assign m_araddr_o[j*ADDR_WIDTH+:ADDR_WIDTH] = current_slaver[j] ? t_araddr : 0;
            assign m_arid_o[j*4+:4]    = current_slaver[j] ? t_arid : 0;
            assign m_arlen_o[j*8+:8]   = current_slaver[j] ? t_arlen : 0;
            assign m_arsize_o[j*3+:3]  = current_slaver[j] ? t_arsize : 0;
            assign m_arburst_o[j*2+:2] = current_slaver[j] ? t_arburst : 0;
            assign m_rready_o[j]       = t_rready & current_slaver[j];
        end
    endgenerate
endmodule
