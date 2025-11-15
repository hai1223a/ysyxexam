module ysyx_25050136_UART
    #(
        parameter ADDR_WIDTH = 32,
        parameter DATA_WIDTH = 32
     )
     (
        // 通用数据
        input                                clk,
        input                                reset,
        // 写地址
        input                                s_awvalid_i,
        output                               s_awready_o,
        input      [ADDR_WIDTH-1:0]          s_awaddr_i,
        input      [3:0]                     s_awid_i,    
        input      [7:0]                     s_awlen_i,   
        input      [2:0]                     s_awsize_i,  
        input      [1:0]                     s_awburst_i, 
        // 写数据
        input                                s_wvalid_i,
        output                               s_wready_o,
        input      [DATA_WIDTH-1:0]          s_wdata_i,
        input      [3:0]                     s_wstrb_i,
        input                                s_wlast_i, 
        // 写响应
        output                               s_bvalid_o,
        input                                s_bready_i,
        output     [1:0]                     s_bresp_o,
        output      [3:0]                    s_bid_o      
     );

    // 状态/缓冲：支持任意顺序到达的单次写（不支持突发）
    reg                                 s_awready_r;
    reg                                 s_wready_r;
    reg                                 s_bvalid_r;
    reg  [ADDR_WIDTH-1:0]               s_awaddr_r;
    reg  [DATA_WIDTH-1:0]               s_wdata_r;
    reg  [3:0]                          s_wstrb_r;
    reg                                 aw_pending;
    reg                                 w_pending;

    // 响应寄存器
    reg  [3:0]                          s_awid_r;
    reg  [3:0]                          bid_r;


    wire aw_fire = s_awvalid_i & s_awready_r;
    wire w_fire  = s_wvalid_i  & s_wready_r;
    wire b_fire  = s_bvalid_o  & s_bready_i;

    // 接受地址/数据并缓存
    always @(posedge clk) begin
        if (reset) begin
            aw_pending   <= 1'b0;
            w_pending    <= 1'b0;
            s_awaddr_r   <= {ADDR_WIDTH{1'b0}};
            s_wdata_r    <= {DATA_WIDTH{1'b0}};
            s_wstrb_r    <= 4'b0;
            s_bvalid_r   <= 1'b0;
            bid_r        <= 4'b0;
            s_awid_r     <= 4'b0;
        end else begin
            if (aw_fire) begin
                aw_pending <= 1'b1;
                s_awaddr_r <= s_awaddr_i;
                s_awid_r  <= s_awid_i;
            end
            if (w_fire) begin
                w_pending <= 1'b1;
                s_wdata_r <= s_wdata_i;
                s_wstrb_r <= s_wstrb_i;
            end
            // 如果地址和数据都已到达，产生响应并清除 pending 标志
            if (aw_pending && w_pending && ~s_bvalid_r) begin
                if (s_awaddr_r == 32'h10000000 && s_wstrb_r[0]) begin
                    $write("%c", s_wdata_r[7:0]);
                end
                // 生成响应标志（在下文由 s_bvalid_r 控制）
                s_bvalid_r <= 1'b1;
                aw_pending <= 1'b0;
                w_pending  <= 1'b0;
                bid_r      <= s_awid_r;
            end
            // bvalid 被外围接受后清除
            if (b_fire) begin
                s_bvalid_r <= 1'b0;
                bid_r      <= 4'b0;
            end
        end
    end

    always @(*) begin
        s_awready_r = ~aw_pending;
        s_wready_r  = ~w_pending;
    end

    // 输出分配
    assign s_awready_o = s_awready_r;
    assign s_wready_o  = s_wready_r;
    assign s_bvalid_o  = s_bvalid_r;
    assign s_bresp_o   = 2'b00; 
    assign s_bid_o     = bid_r;
endmodule // ysyx_25050136_UART