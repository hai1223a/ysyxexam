module ysyx_25050136_ICACHE
#(
    parameter OFFSET_WIDTH = 4,
    parameter NUM_WAY = 1,
    parameter INDEX_WIDTH = 1
)
(
    input         clk,
    input         reset,
    // CPU接口
    input  [31:0] req_addr_i,
    input         req_valid_i,
    input         req_use_i,
    input         req_flush_i,
    // output        req_miss_o,
    output [31:0] req_raddr_o,
    output [31:0] req_rdata_o,
    output        req_ready_o,
    // AXI接口
    output        rd_req_o,
    output        rd_size_o,
    output [31:0] rd_addr_o,
    input         ret_valid_i,
    input         ret_last_i,
    input  [31:0] ret_data_i
);

    // 参数定义
    parameter LINE_WIDTH   = 8 * (1 << OFFSET_WIDTH);
    parameter WORDS        = 1 << (OFFSET_WIDTH - 2);
    parameter TAG_WIDTH    = 32 - OFFSET_WIDTH - INDEX_WIDTH;
    parameter NUM_SET      = 1 << INDEX_WIDTH;
    parameter WAY_WIDTH    = NUM_WAY>1?$clog2(NUM_WAY):1;

    // 存储阵列
    reg [LINE_WIDTH-1:0] cache_data  [0:NUM_WAY-1][0:NUM_SET-1];
    reg [TAG_WIDTH-1 :0] cache_tag   [0:NUM_WAY-1][0:NUM_SET-1];
    reg                  cache_valid [0:NUM_WAY-1][0:NUM_SET-1];

    // 状态机
    localparam IDLE = 2'd0, MISS = 2'd1, OVER = 2'd2;
    reg [1:0] state;

    // 流水线寄存器
    reg [31:0] req_addr_r;
    reg        req_use_r;
    reg [LINE_WIDTH-1:0] line_buf;
    reg [$clog2(WORDS)-1:0] addr_offset_r;
    reg cache_hit;
    reg [NUM_WAY-1:0] hit_mask;
    reg [WAY_WIDTH-1:0] replace_way;

    // 地址分解
    wire [INDEX_WIDTH-1:0]  addr_index  = req_addr_i[OFFSET_WIDTH+INDEX_WIDTH-1:OFFSET_WIDTH];
    wire [TAG_WIDTH-1:0]    addr_tag    = req_addr_i[31:OFFSET_WIDTH+INDEX_WIDTH];
    wire [OFFSET_WIDTH-1:0] addr_offset = req_addr_i[OFFSET_WIDTH-1:0];

    // 命中判断
    integer k;
    always @(*) begin
        hit_mask = {NUM_WAY{1'b0}};
        for (k = 0; k < NUM_WAY; k = k + 1)
            if (cache_valid[k][addr_index] && (cache_tag[k][addr_index] == addr_tag))
                hit_mask[k] = 1'b1;
    end
    always @(*) begin
        cache_hit = |hit_mask;
    end

    // 数据选择
    reg [LINE_WIDTH-1:0] selected_line;
    always @(*) begin
        selected_line = {LINE_WIDTH{1'b0}};
        for (k = 0; k < NUM_WAY; k = k + 1)
            if (hit_mask[k]) selected_line = cache_data[k][addr_index];
    end

    // 状态机与流水线
    always @(posedge clk) begin
        if (reset) begin
            state        <= IDLE;
            line_buf     <= 0;
            addr_offset_r<= 0;
            req_addr_r   <= 0;
            req_use_r    <= 0;
        end else begin
            case (state)
                IDLE: begin
                    if (req_valid_i) begin
                        req_addr_r    <= req_addr_i;
                        req_use_r     <= req_use_i;
                        line_buf      <= selected_line;
                        addr_offset_r <= addr_offset[OFFSET_WIDTH-1:2];
                        if (!cache_hit) state <= MISS;
                    end
                end
                MISS: begin
                    if (ret_valid_i) begin
                        line_buf <= {ret_data_i, line_buf[LINE_WIDTH-1:32]};
                        if (ret_last_i) state <= OVER;
                    end
                end
                OVER: begin
                    state <= IDLE;
                end
            endcase
        end
    end

    // 写回
    always @(posedge clk) begin
        if (req_flush_i) begin
            for (k = 0; k < NUM_WAY; k = k + 1)
                for (integer j = 0; j < NUM_SET; j = j + 1)
                    cache_valid[k][j] <= 1'b0;
        end else if (state == OVER) begin
            cache_data[replace_way][addr_index]  <= line_buf;
            cache_tag[replace_way][addr_index]   <= addr_tag;
            cache_valid[replace_way][addr_index] <= 1'b1;
        end
    end

    // 替换策略
    always @(posedge clk) begin
        if (reset) replace_way <= 0;
        else       replace_way <= (NUM_WAY == 1) ? 0 : replace_way + 1;
    end

    // 输出
    wire [31:0] line_word [0:WORDS-1];
    generate
        for (genvar i = 0; i < WORDS; i = i + 1)
            assign line_word[i] = line_buf[i*32 +: 32];
    endgenerate
    assign req_raddr_o = req_addr_r;
    assign req_rdata_o = line_word[addr_offset_r];
    assign req_ready_o = (state == IDLE && cache_hit) || (state == OVER);
    // assign req_miss_o  = (state == MISS);
    assign rd_req_o    = (state == MISS);
    assign rd_size_o   = req_use_r;
    assign rd_addr_o   = req_addr_r;

`ifdef verilator
    reg [79:0] dbg_state;
    always @(*) begin
        case (state)
            IDLE        : dbg_state = "IDLE"      ;
            MISS        : dbg_state = "MISS"      ;
            OVER        : dbg_state = "OVER"      ;
            default     : dbg_state = "UNKNOW"    ;
        endcase
    end
`endif    
endmodule //ysyx_25050136_ICACHE
