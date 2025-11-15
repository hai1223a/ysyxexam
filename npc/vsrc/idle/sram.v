module ysyx_25050136_SRAM
    #(
        parameter ADDR_WIDTH    = 32,
        parameter DATA_WIDTH    = 32,
        parameter INIT_FILE     = "default.hex"  // 初始化文件路径
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
        input      [3:0]                     s_bid_o,
        // 读地址
        input                                s_arvalid_i,
        output                               s_arready_o,
        input      [ADDR_WIDTH-1:0]          s_araddr_i,
        input      [3:0]                     s_arid_i,
        input      [7:0]                     s_arlen_i,
        input      [2:0]                     s_arsize_i,
        input      [1:0]                     s_arburst_i,
        // 读数据
        output                               s_rvalid_o,
        input                                s_rready_i,
        output                               s_rlast_o,
        output     [DATA_WIDTH-1:0]          s_rdata_o,
        output     [1:0]                     s_rresp_o,
        output     [3:0]                     s_rid_o
     );

    
    localparam MEM_SIZE_BYTES = 1024 * 1024; // 1 MB
    localparam MEM_WIDTH      = $clog2(MEM_SIZE_BYTES);
    
    // ====== 信号定义 ======
    reg [7:0] mem [0:MEM_SIZE_BYTES-1];

    // 请求/缓冲寄存器
    reg                                 aw_pending;
    reg                                 w_pending;
    reg                                 ar_pending;

    reg  [ADDR_WIDTH-1:0]               aw_addr_r;
    reg  [2:0]                          aw_size_r;
    reg  [3:0]                          aw_id_r;
    reg  [DATA_WIDTH-1:0]               w_data_r;
    reg  [3:0]                          w_strb_r;

    reg  [ADDR_WIDTH-1:0]               ar_addr_r;
    reg  [2:0]                          ar_size_r;
    reg  [3:0]                          ar_id_r;

    // 响应寄存器
    reg  [3:0]                          bid_r;
    reg                                 bvalid_r;
    reg  [1:0]                          bresp_r;

    reg                                 rvalid_r;
    reg  [DATA_WIDTH-1:0]               rdata_r;
    reg  [1:0]                          rresp_r;
    reg  [3:0]                          rid_r;

    // handshake wires
    wire aw_fire = s_awvalid_i & s_awready_o;
    wire w_fire  = s_wvalid_i  & s_wready_o;
    wire ar_fire = s_arvalid_i & s_arready_o;
    wire b_fire  = bvalid_r    & s_bready_i;
    wire r_fire  = rvalid_r    & s_rready_i;

    // 地址生成
    wire [1:0] aw_misalign = aw_addr_r[1:0] & ((1 << aw_size_r) - 1);
    wire [MEM_WIDTH -1:0] aw_mem_addr = {aw_addr_r[MEM_WIDTH-1:2], 2'b00};
    wire [1:0] ar_misalign = ar_addr_r[1:0] & ((1 << ar_size_r) - 1);
    wire [MEM_WIDTH -1:0] ar_mem_addr = {ar_addr_r[MEM_WIDTH-1:2], 2'b00};
    // ====== 逻辑实现 ======
    integer i;
    // 初始化内存：优先使用 INIT_FILE，否则清 0
    initial begin
        $readmemh(INIT_FILE, mem);
        for (i = 0; i < 200 * 4; i = i + 4) begin
            $display("mem[%0d-%0d] = %h", i, i+3, {mem[i+3], mem[i+2], mem[i+1], mem[i]});
        end
    end

    // 主时序逻辑
    always @(posedge clk) begin
        if (reset) begin
            aw_pending <= 0;
            w_pending  <= 0;
            ar_pending <= 0;

            aw_addr_r  <= 0;
            aw_size_r  <= 0;
            aw_id_r    <= 0;
            w_data_r   <= 0;
            w_strb_r   <= 0;

            ar_addr_r  <= 0;
            ar_size_r  <= 0;
            ar_id_r    <= 0;

            bvalid_r   <= 0;
            bresp_r    <= 0;
            bid_r      <= 0;

            rvalid_r   <= 0;
            rdata_r    <= 0;
            rresp_r    <= 0;
            rid_r      <= 0;
        end else begin
            // 接受写地址（单次）
            if (aw_fire) begin
                aw_pending <= 1'b1;
                aw_id_r    <= s_awid_i;
                aw_addr_r  <= s_awaddr_i;
                aw_size_r  <= s_awsize_i;
            end
            // 接受写数据（单次）
            if (w_fire) begin
                w_pending <= 1'b1;
                w_data_r  <= s_wdata_i;
                w_strb_r  <= s_wstrb_i;
            end

            // 写完成：地址+数据到达且没有未送达的响应
            if (aw_pending && w_pending && ~bvalid_r) begin
                // 对齐检查：地址低位必须为 0
                if (aw_misalign != 0) begin
                    bresp_r <= 2'b10; // SLVERR
                end else begin
                    if(w_strb_r[0]) mem[aw_mem_addr + 0] <= w_data_r[7:0];
                    if(w_strb_r[1]) mem[aw_mem_addr + 1] <= w_data_r[15:8];
                    if(w_strb_r[2]) mem[aw_mem_addr + 2] <= w_data_r[23:16];
                    if(w_strb_r[3]) mem[aw_mem_addr + 3] <= w_data_r[31:24];
                    bresp_r <= 2'b00; // OKAY
                end
                bid_r   <= aw_id_r;
                bvalid_r <= 1'b1;
                aw_pending <= 1'b0;
                w_pending  <= 1'b0;
            end

            // b 被接受后清除
            if (b_fire) begin
                bid_r   <= 4'b0;
                bvalid_r <= 1'b0;
                bresp_r  <= 2'b00;
            end

            // 接受读地址（支持多主同时发起，使用 rid 保存）
            if (ar_fire) begin
                ar_pending <= 1'b1;
                ar_addr_r  <= s_araddr_i;
                ar_size_r  <= s_arsize_i;
                ar_id_r    <= s_arid_i;
            end

            // 处理读请求并产生一次性读返回
            if (ar_pending && ~rvalid_r) begin
                if (ar_misalign != 0) begin
                    // 对齐错误
                    rresp_r <= 2'b10; // SLVERR
                    rdata_r <= {DATA_WIDTH{1'b0}};
                end else begin
                    rresp_r <= 2'b00; // OKAY
                    rdata_r <= {mem[ar_mem_addr + 3],
                                mem[ar_mem_addr + 2],
                                mem[ar_mem_addr + 1],
                                mem[ar_mem_addr + 0]};
                end
                rvalid_r <= 1'b1;
                rid_r    <= ar_id_r; // 返回请求 id
                ar_pending <= 1'b0;
            end

            // r 被接受后清除
            if (r_fire) begin
                rvalid_r <= 1'b0;
                rresp_r  <= 2'b00;
                rid_r    <= 4'b0;
            end
        end
    end

    // ready/valid 输出连接
    assign s_awready_o = ~aw_pending;
    assign s_wready_o  = ~w_pending;
    assign s_arready_o = ~ar_pending;

    assign s_bvalid_o  = bvalid_r;
    assign s_bresp_o   = bresp_r;
    assign s_bid_o     = bid_r;

    assign s_rvalid_o  = rvalid_r;
    assign s_rlast_o   = rvalid_r; // 单次读，last 恒为有效
    assign s_rdata_o   = rdata_r;
    assign s_rresp_o   = rresp_r;
    assign s_rid_o     = rid_r;
endmodule // ysyx_25050136_SRAM