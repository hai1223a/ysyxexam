module ysyx_25050136_ARBITER
    #(
        MASTER_NUM = 2,
        SLAVER_NUM = 1,
        DATA_WIDTH = 32,
        ADDR_WIDTH = 32
     )
     (
         // 通用数据
         input                                          aclk,
         input                                       aresetn,
         // 来自主设备的AXI信号
         // 写地址
         input     [MASTER_NUM-1:0]              s_awvalid_i,
         output    [MASTER_NUM-1:0]              s_awready_o,
         input     [MASTER_NUM*ADDR_WIDTH-1:0]    s_awaddr_i,
         // 写数据
         input     [MASTER_NUM-1:0]               s_wvalid_i,
         output    [MASTER_NUM-1:0]               s_wready_o,
         input     [MASTER_NUM*DATA_WIDTH-1:0]     s_wdata_i,
         input     [MASTER_NUM*4-1:0]              s_wstrb_i,
         // 写响应
         output    [MASTER_NUM-1:0]               s_bvalid_o,
         input     [MASTER_NUM-1:0]               s_bready_i,
         output    [MASTER_NUM*2-1:0]              s_bresp_o,
         // 读地址
         input     [MASTER_NUM-1:0]              s_arvalid_i,
         output    [MASTER_NUM-1:0]              s_arready_o,
         input     [MASTER_NUM*ADDR_WIDTH-1:0]    s_araddr_i,
         // 读数据
         output    [MASTER_NUM-1:0]               s_rvalid_o,
         input     [MASTER_NUM-1:0]               s_rready_i,
         output    [MASTER_NUM*DATA_WIDTH-1:0]     s_rdata_o,
         output    [MASTER_NUM*2-1:0]              s_rresp_o,
         // 来自从设备的AXI信号
         // 写地址
         output    [SLAVER_NUM-1:0]              m_awvalid_o,
         input     [SLAVER_NUM-1:0]              m_awready_i,
         output    [SLAVER_NUM*DATA_WIDTH-1:0]    m_awaddr_o,
         // 写数据             
         output    [SLAVER_NUM-1:0]               m_wvalid_o,
         input     [SLAVER_NUM-1:0]               m_wready_i,
         output    [SLAVER_NUM*DATA_WIDTH-1:0]     m_wdata_o,
         output    [SLAVER_NUM*4-1:0]              m_wstrb_o,
         // 写响应               
         input     [SLAVER_NUM-1:0]               m_bvalid_i,
         output    [SLAVER_NUM-1:0]               m_bready_o,
         input     [SLAVER_NUM*2-1:0]              m_bresp_i,
         // 读地址               
         output    [SLAVER_NUM-1:0]              m_arvalid_o,
         input     [SLAVER_NUM-1:0]              m_arready_i,
         output    [SLAVER_NUM*DATA_WIDTH-1:0]    m_araddr_o,
         // 读数据                
         input     [SLAVER_NUM-1:0]               m_rvalid_i,
         output    [SLAVER_NUM-1:0]               m_rready_o,
         input     [SLAVER_NUM*DATA_WIDTH-1:0]     m_rdata_i,
         input     [SLAVER_NUM*2-1:0]              m_rresp_i 
     );
    // 目前默认多主一从, 仲裁逻辑为优先级仲裁, 低位优先级最高
    reg [MASTER_NUM-1:0] current_master;    // 当前主设备
    reg [MASTER_NUM-1:0] current_id;
    reg [MASTER_NUM-1:0] master_grand;      // 主设备授权
    reg [MASTER_NUM-1:0] master_id;
    wire [MASTER_NUM-1:0] request;          // 主设备请求

    assign request = s_awvalid_i | s_arvalid_i;
    
    always @(*) begin
        master_grand = 0;
        master_id = 0;
        for (integer i = 0; i < MASTER_NUM; i = i + 1) begin
            if(request[i]) begin
                master_id = i[MASTER_NUM-1:0];
                master_grand[i] = 1'b1;
                break; 
            end
        end
    end

    always @(posedge aclk) begin
        if (!aresetn) begin
            current_master <= 0;
            current_id <= 0;
        end else begin
            if(current_master == 0 || 
            (m_bvalid_i && m_bready_o) || 
            (m_rvalid_i && m_rready_o)) begin
                current_id <= master_id;
                current_master <= master_grand;
            end
        end
    end

    // 写地址
    assign m_awvalid_o = |(s_awvalid_i & current_master);
    assign m_awaddr_o = s_awaddr_i[current_id * ADDR_WIDTH +: ADDR_WIDTH];
    // 写数据
    assign m_wvalid_o = |(s_wvalid_i & current_master);
    assign m_wdata_o = s_wdata_i[current_id * DATA_WIDTH +: DATA_WIDTH];
    assign m_wstrb_o = s_wstrb_i[current_id * 4 +: 4];
    // 写响应
    assign m_bready_o = |(s_bready_i & current_master);
    // 读地址
    assign m_arvalid_o = |(s_arvalid_i & current_master);
    assign m_araddr_o = s_araddr_i[current_id * ADDR_WIDTH +: ADDR_WIDTH];
    // 读数据
    assign m_rready_o = |(s_rready_i & current_master);
    
    genvar i;
    generate
        for (i = 0; i < MASTER_NUM ; i = i + 1) begin
            assign s_awready_o[i] = m_awready_i & current_master[i];
            assign s_wready_o[i] = m_wready_i & current_master[i];
            assign s_bvalid_o[i] = m_bvalid_i & current_master[i];
            assign s_bresp_o[i*2+:2] = current_master[i] ? m_bresp_i : 0;
            assign s_arready_o[i] = m_arready_i & current_master[i];
            assign s_rvalid_o[i] = m_rvalid_i & current_master[i];
            assign s_rdata_o[i*DATA_WIDTH+:DATA_WIDTH] = current_master[i] ? m_rdata_i : 0;
            assign s_rresp_o[i*2+:2] = current_master[i] ? m_rresp_i : 0;
        end
    endgenerate
endmodule
