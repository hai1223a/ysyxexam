//----------------------------------------------------------
// 多主设备单从设备AXI仲裁器
// 目前配置: 2个主设备, 1个从设备
//         m0: 指令访问  id范围 4'b0000 ~ 4'b0111
//         m1: 数据访问  id范围 4'b1000 ~ 4'b1111
// 实现细节: 读写通道分开仲裁
//         AR, R通道纯组合逻辑
//         AW, B通道纯组合逻辑
//         W通道为保持突发写操作数据完整性, 使用时序逻辑   
// 优先级配置: m0 > m1
//----------------------------------------------------------
module ysyx_25050136_ARBITER
    #(
        parameter MASTER_NUM = 2,
        parameter DATA_WIDTH = 32,
        parameter ADDR_WIDTH = 32
     )
     (
        input                                   clk         ,
        input                                   reset       ,
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
        output                                  m_awvalid_o ,
        input                                   m_awready_i ,
        output    [ADDR_WIDTH-1:0]              m_awaddr_o  ,
        output    [3:0]                         m_awid_o    ,
        output    [7:0]                         m_awlen_o   ,
        output    [2:0]                         m_awsize_o  ,
        output    [1:0]                         m_awburst_o ,
        // 写数据
        output                                  m_wvalid_o  ,
        input                                   m_wready_i  ,
        output    [DATA_WIDTH-1:0]              m_wdata_o   ,
        output    [3:0]                         m_wstrb_o   ,
        output                                  m_wlast_o   ,
        // 写响应
        input                                   m_bvalid_i  ,
        output                                  m_bready_o  ,
        input     [3:0]                         m_bid_i     ,
        input     [1:0]                         m_bresp_i   ,
        // 读地址
        output                                  m_arvalid_o ,
        input                                   m_arready_i ,
        output    [ADDR_WIDTH-1:0]              m_araddr_o  ,
        output    [3:0]                         m_arid_o    ,
        output    [7:0]                         m_arlen_o   ,
        output    [2:0]                         m_arsize_o  ,
        output    [1:0]                         m_arburst_o ,
        // 读数据
        input                                   m_rvalid_i  ,
        output                                  m_rready_o  ,
        input     [DATA_WIDTH-1:0]              m_rdata_i   ,
        input     [1:0]                         m_rresp_i   ,
        input                                   m_rlast_i   ,
        input     [3:0]                         m_rid_i
     );
    // ========================读通道仲裁器===========================
    // AR通道
    reg [MASTER_NUM-1:0] AR_hot;
    reg [$clog2(MASTER_NUM)-1:0] AR_bin;
    always @(*) begin
        AR_hot = 0;
        AR_bin = 0;
        if (s_arvalid_i[0]) begin
            AR_hot[0] = 1;
            AR_bin = 0;
        end else if (s_arvalid_i[1]) begin
            AR_hot[1] = 1;
            AR_bin = 1;
        end
    end
    assign m_arvalid_o = |(s_arvalid_i & AR_hot);
    assign m_araddr_o  = s_araddr_i[AR_bin * ADDR_WIDTH +: ADDR_WIDTH];
    assign m_arid_o    = s_arid_i[AR_bin * 4 +: 4];
    assign m_arlen_o   = s_arlen_i[AR_bin * 8 +: 8];
    assign m_arsize_o  = s_arsize_i[AR_bin * 3 +: 3];
    assign m_arburst_o = s_arburst_i[AR_bin * 2 +: 2];
    genvar i;
    generate
        for (i = 0; i < MASTER_NUM ; i = i + 1) begin
            assign s_arready_o[i] = m_arready_i & AR_hot[i];
        end
    endgenerate
    // R通道
    reg [MASTER_NUM-1:0] R_hot;
    reg [$clog2(MASTER_NUM)-1:0] R_bin;
    always @(*) begin
        R_hot = 0;
        R_bin = 0;
        if (m_rid_i < 4'b1000) begin
            R_hot[0] = 1;
            R_bin = 0;
        end else begin
            R_hot[1] = 1;
            R_bin = 1;
        end
    end
    assign m_rready_o = |(s_rready_i & R_hot);
    generate
        for (i = 0; i < MASTER_NUM ; i = i + 1) begin
            assign s_rvalid_o[i] = m_rvalid_i & R_hot[i];
            assign s_rdata_o[i*DATA_WIDTH+:DATA_WIDTH] = R_hot[i] ? m_rdata_i : 0;
            assign s_rresp_o[i*2+:2] = R_hot[i] ? m_rresp_i : 0;
            assign s_rlast_o[i] = m_rlast_i & R_hot[i];
            assign s_rid_o[i*4+:4] = R_hot[i] ? m_rid_i : 0;
        end
    endgenerate
    // ========================写通道仲裁器===========================
    // AW通道
    reg [MASTER_NUM-1:0] AW_hot;
    reg [$clog2(MASTER_NUM)-1:0] AW_bin;
    always @(*) begin
        AW_hot = 0;
        AW_bin = 0;
        if (s_awvalid_i[0]) begin
            AW_hot[0] = 1;
            AW_bin = 0;
        end else if (s_awvalid_i[1]) begin
            AW_hot[1] = 1;
            AW_bin = 1;
        end
    end
    assign m_awvalid_o = |(s_awvalid_i & AW_hot);
    assign m_awaddr_o  = s_awaddr_i[AW_bin * ADDR_WIDTH +: ADDR_WIDTH];
    assign m_awid_o    = s_awid_i[AW_bin * 4 +: 4];
    assign m_awlen_o   = s_awlen_i[AW_bin * 8 +: 8];
    assign m_awsize_o  = s_awsize_i[AW_bin * 3 +: 3];
    assign m_awburst_o = s_awburst_i[AW_bin * 2 +: 2];
    generate
        for (i = 0; i < MASTER_NUM ; i = i + 1) begin
            assign s_awready_o[i] = m_awready_i & AW_hot[i];
        end
    endgenerate
    // W通道
    reg [MASTER_NUM-1:0] W_keep;
    reg [MASTER_NUM-1:0] W_hot;
    reg [$clog2(MASTER_NUM)-1:0] W_bin;
    integer j;
    always @(posedge clk) begin
        if(reset) begin
            W_keep <= 0;
        end else begin
            for(j = 0; j < MASTER_NUM; j = j + 1) begin
                if(s_wlast_i[j]) begin
                    W_keep[j] <= 0;
                end else if(s_wvalid_i[j]) begin
                    W_keep[j] <= 1;
                end
            end
        end
    end
    always @(*) begin
        W_hot = 0;
        W_bin = 0;
        if (W_keep[0] || s_wvalid_i[0]) begin
            W_hot[0] = 1;
            W_bin = 0;
        end else if (W_keep[1] || s_wvalid_i[1]) begin
            W_hot[1] = 1;
            W_bin = 1;
        end
    end
    assign m_wvalid_o = |(s_wvalid_i & W_hot);
    assign m_wdata_o  = s_wdata_i[W_bin * DATA_WIDTH +: DATA_WIDTH];
    assign m_wstrb_o  = s_wstrb_i[W_bin * 4 +: 4];
    assign m_wlast_o  = s_wlast_i[W_bin];
    generate    
        for (i = 0; i < MASTER_NUM ; i = i + 1) begin
            assign s_wready_o[i] = m_wready_i & W_hot[i];
        end
    endgenerate
    // B通道
    reg [MASTER_NUM-1:0] B_hot;
    reg [$clog2(MASTER_NUM)-1:0] B_bin;
    always @(*) begin
        B_hot = 0;
        B_bin = 0;
        if (m_bid_i < 4'b1000) begin
            B_hot[0] = 1;
            B_bin = 0;
        end else begin
            B_hot[1] = 1;
            B_bin = 1;
        end
    end
    assign m_bready_o = |(s_bready_i & B_hot);
    generate
        for (i = 0; i < MASTER_NUM ; i = i + 1) begin
            assign s_bvalid_o[i] = m_bvalid_i & B_hot[i];
            assign s_bresp_o[i*2+:2] = B_hot[i] ? m_bresp_i : 0;
            assign s_bid_o[i*4+:4] = B_hot[i] ? m_bid_i : 0;
        end
    endgenerate
endmodule
