module ysyx_25050136_ICACHE
#(
    parameter OFFSET_WIDTH = 4,
    parameter NUM_WAY = 1,
    parameter INDEX_WIDTH = 1
)
(
    input                                      clk          ,
    input                                      reset        ,
    // ICACHE与CPU接口
    input                                   ic_flush_i      ,
    input                                   ic_fencei_i     ,
    input                                   ic_req_valid_i  ,
    input    [31:0]                         ic_req_addr_i   ,
    input    [31:0]                         ic_req_prepc_i  ,
    input                                   ic_req_taken_i  ,
    input                                   ic_req_btb_hit_i,
    output                                  ic_req_ready_o  ,
    input                                   ic_ret_ready_i  ,
    output   [31:0]                         ic_ret_rdata_o  ,
    output   [31:0]                         ic_ret_addr_o   ,
    output   [31:0]                         ic_ret_prepc_o  ,
    output                                  ic_ret_taken_o  ,
    output                                  ic_ret_btb_hit_o,
    output                                  ic_ret_valid_o  ,
    // ICACHE与AXI接口
    output                                  ia_flush_o      ,
    output                                  ia_rd_req_o     ,
    output   [31:0]                         ia_rd_addr_o    ,
    input                                   ia_ret_valid_i  ,
    input                                   ia_ret_last_i   ,
    input    [31:0]                         ia_ret_data_i   
);

    // ==================== 参数定义 =============================
    parameter LINE_WIDTH   = 8 << OFFSET_WIDTH;
    parameter WORDS        = 1 << (OFFSET_WIDTH - 2);
    parameter TAG_WIDTH    = 32 - OFFSET_WIDTH - INDEX_WIDTH;
    parameter NUM_SET      = 1 << INDEX_WIDTH;
    parameter WAY_WIDTH    = (NUM_WAY > 1) ? $clog2(NUM_WAY) : 1;
    parameter OFFSET_INDEX = (OFFSET_WIDTH > 2) ? OFFSET_WIDTH-2 : 1;

    // ==================== 存储阵列 =============================
    reg [LINE_WIDTH-1:0] cache_data  [0:NUM_WAY-1][0:NUM_SET-1]; 
    reg [TAG_WIDTH-1 :0] cache_tag   [0:NUM_WAY-1][0:NUM_SET-1];
    reg                  cache_valid [0:NUM_WAY-1][0:NUM_SET-1];

    // ==================== 内部信号 =============================
    // 流水线寄存器 (r_ 前缀表示 registered)
    reg        r_idle;      // 1表示流水线为空，0表示有有效请求
    reg [31:0] r_addr;
    reg [31:0] r_prepc;
    reg        r_taken;
    reg        r_btb_hit;

    // 状态机信号
    localparam IDLE = 1'd0;
    localparam MISS = 1'd1;
    reg state;
    reg [WAY_WIDTH-1:0] replace_way; // 替换指针
    reg [WAY_WIDTH-1:0] miss_way;    // 记录发生Miss并正在重填的Way

    // 握手信号
    // in_fire: 输入握手成功，数据进入流水线寄存器
    wire in_fire  = ic_req_valid_i & ic_req_ready_o;
    // out_fire: 输出握手成功，流水线数据被取走
    wire out_fire = ic_ret_valid_o & ic_ret_ready_i;

    // 地址解码 (基于流水线寄存器 r_addr)
    wire [INDEX_WIDTH-1:0]  addr_index  = r_addr[OFFSET_WIDTH+INDEX_WIDTH-1:OFFSET_WIDTH];
    wire [TAG_WIDTH-1:0]    addr_tag    = r_addr[31:OFFSET_WIDTH+INDEX_WIDTH];
    wire [OFFSET_INDEX-1:0] addr_offset = (OFFSET_WIDTH > 2) ? r_addr[OFFSET_WIDTH-1:2] : 0;

    // ==================== 1. 流水线寄存器逻辑 ====================
    // 负责：锁存输入信号，维护 r_idle 状态
    always @(posedge clk) begin
        if (reset) begin
            r_idle    <= 1'b1;
            r_addr    <= 32'b0;
            r_prepc   <= 32'b0;
            r_taken   <= 1'b0;
            r_btb_hit <= 1'b0;
        end else begin
            if (ic_flush_i) begin
                r_idle <= 1'b1; // 冲刷流水线
            end else if (in_fire) begin
                // 新请求进入，更新寄存器
                r_idle    <= 1'b0;
                r_addr    <= ic_req_addr_i;
                r_prepc   <= ic_req_prepc_i;
                r_taken   <= ic_req_taken_i;
                r_btb_hit <= ic_req_btb_hit_i;
            end else if (out_fire) begin
                // 请求被取走且无新请求进入，流水线变空
                r_idle <= 1'b1;
            end
        end
    end

    // ==================== 2. 组合逻辑：命中检测与数据读取 ====================
    reg [NUM_WAY-1:0] hit_mask;
    integer k;
    
    // Tag 比较
    always @(*) begin
        hit_mask = {NUM_WAY{1'b0}};
        for (k = 0; k < NUM_WAY; k = k + 1) begin
            if (cache_valid[k][addr_index] && (cache_tag[k][addr_index] == addr_tag))
                hit_mask[k] = 1'b1;
        end
    end

    wire miss = ~(|hit_mask);

    // 数据选择 (Hit Word)
    reg [LINE_WIDTH-1:0] selected_line;
    always @(*) begin
        selected_line = {LINE_WIDTH{1'b0}};
        for (k = 0; k < NUM_WAY; k = k + 1) begin
            if (hit_mask[k]) selected_line = cache_data[k][addr_index];
        end
    end

    wire [31:0] line_word [0:WORDS-1];
    generate
        for (genvar i = 0; i < WORDS; i = i + 1) begin : SPLIT_0
            assign line_word[i] = selected_line[i*32 +: 32];
        end
    endgenerate
    wire [31:0] hit_word = line_word[addr_offset];

    // Miss 数据 (从正在重填的 Cache Line 中直接读取，用于回传)
    wire [31:0] buf_word [0:WORDS-1];
    generate
        for (genvar i = 0; i < WORDS; i = i + 1) begin : SPLIT_1
            assign buf_word[i] = cache_data[miss_way][addr_index][i*32 +: 32];
        end
    endgenerate
    wire [31:0] miss_word = buf_word[addr_offset];

    // ==================== 3. Miss 状态机与 Cache 维护逻辑 ====================
    // 负责：状态跳转、Cache 重填、Fence.i、替换策略
    always @(posedge clk) begin
        if (reset) begin
            state       <= IDLE;
            replace_way <= 0;
            miss_way    <= 0;
        end else begin
            if (ic_flush_i) begin
                // 处理 Flush 和 Fence.i
                if (ic_fencei_i) begin
                    integer m, n;
                    for (m = 0; m < NUM_WAY; m = m + 1) begin
                        for (n = 0; n < NUM_SET; n = n + 1) begin
                            cache_valid[m][n] <= 1'b0;
                        end
                    end
                end else if (state == MISS) begin
                    // 如果在 Miss 途中 Flush，作废当前正在写的 Line
                    cache_valid[replace_way][addr_index] <= 1'b0;
                end
                state <= IDLE;
            end else begin
                // 正常状态机
                case (state)
                    IDLE: begin
                        // 只有当流水线非空(r_idle=0)且发生Miss时才进入MISS状态
                        if (!r_idle && miss) begin
                            state    <= MISS;
                            miss_way <= replace_way; // 锁定当前要替换的 Way
                        end
                        
                        // 简单的替换策略更新 (Round Robin)
                        if (!r_idle && miss && NUM_WAY > 1) begin
                            replace_way <= (replace_way + 1) % NUM_WAY;
                        end
                    end

                    MISS: begin
                        if (ia_ret_valid_i) begin
                            // 移位写入数据 (假设 AXI 返回是 32bit)
                            cache_data[miss_way][addr_index] <= {ia_ret_data_i, cache_data[miss_way][addr_index][LINE_WIDTH-1:32]};
                            
                            if (ia_ret_last_i) begin
                                // 重填完成，更新 Tag 和 Valid
                                cache_tag[miss_way][addr_index]   <= addr_tag;
                                cache_valid[miss_way][addr_index] <= 1'b1;
                                state <= IDLE;
                            end
                        end
                    end
                endcase
            end
        end
    end

    // ==================== 4. 输出逻辑 ====================
    
    // Ready 信号：
    // 1. 状态机 IDLE (没有在处理 Miss)
    // 2. 并且 (当前输出被取走 OR 流水线本来就是空的)
    // 这样可以保证流水线不会被覆盖
    assign ic_req_ready_o = (state == IDLE) && (out_fire || r_idle);

    // Valid 信号：
    // 1. 流水线非空
    // 2. 没有 Flush
    // 3. 当前没有 Miss (Hit 或者 Miss 处理完毕回到 IDLE 瞬间)
    // 注意：这里 ready_go 等价于 !miss，但为了时序更好，我们只在 IDLE 状态输出 valid
    assign ic_ret_valid_o = !r_idle && !ic_flush_i && (state == IDLE) && !miss;

    // 数据输出
    assign ic_ret_rdata_o   = hit_word; // 因为 Miss 处理完后会回到 IDLE 再次命中，所以只用 hit_word 即可
    assign ic_ret_addr_o    = r_addr;
    assign ic_ret_prepc_o   = r_prepc;
    assign ic_ret_taken_o   = r_taken;
    assign ic_ret_btb_hit_o = r_btb_hit;

    // AXI 接口输出
    assign ia_flush_o   = ic_flush_i;
    assign ia_rd_req_o  = (state == MISS);
    assign ia_rd_addr_o = r_addr; // 使用寄存器中的地址

endmodule