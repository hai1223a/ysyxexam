// 要求OFFSET_WIDTH > 2
// 要求 NUM_WAY > 1
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
    input    [31:0]                            req_addr_i   ,
    input                                      req_valid_i  ,
    input                                      req_use_i    ,
    output   [31:0]                            req_rdata_o  ,                           
    output                                     req_ready_o  ,  
    // ICACHE与AXI接口                                        
    output                                     rd_req_o     ,
    output                                     rd_size_o    ,             
    output   [31:0]                            rd_addr_o    ,
    input                                      ret_valid_i  ,
    input                                      ret_last_i   ,
    input    [31:0]                            ret_data_i   
    // 内部
);
    // ====================cache内部信号定义==============================
    parameter LINE_WIDTH = 8 * 2 ** OFFSET_WIDTH;                // cacheline宽度
    parameter WORDS      = 2 ** (OFFSET_WIDTH - 2);              // cacheline的字数
    parameter TAG_WIDTH  = 32 - OFFSET_WIDTH - INDEX_WIDTH;      // tag的数量
    parameter NUM_SET    = 2 ** INDEX_WIDTH;                     // set的数量
    parameter WAY_WIDTH  = NUM_WAY>1?$clog2(NUM_WAY):1;          // way的数量
    parameter BURST_NUM  = 2 ** (OFFSET_WIDTH - 2) - 1;          // cacheline的字数-1
    // icache存储阵列
    reg [LINE_WIDTH-1:0] cache_data  [0:NUM_WAY-1][0:NUM_SET-1]; 
    reg [TAG_WIDTH-1 :0] cache_tag   [0:NUM_WAY-1][0:NUM_SET-1];
    reg                  cache_valid [0:NUM_WAY-1][0:NUM_SET-1];
    // icache 状态机
    localparam IDLE       = 3'd0;
    localparam IN_CAHCE   = 3'd1;
    localparam HIT        = 3'd2;
    localparam MISS       = 3'd3;
    localparam NO_USE     = 3'd4;
    localparam OVER       = 3'd5;
    reg [2:0] state;
    // IDLE
    reg [31:0] req_addr_r;
    wire [INDEX_WIDTH-1:0]  addr_index  ;
    wire [TAG_WIDTH-1:0]    addr_tag    ;
    wire [OFFSET_WIDTH-1:0] addr_offset ;
    // IN_CAHCE & AXI
    reg [LINE_WIDTH-1:0] line_buf ;
    // IN_CACHE
    reg [OFFSET_WIDTH-3:0] addr_offset_r;
    reg cache_hit;
    reg [LINE_WIDTH-1:0] selected_line;
    reg [NUM_WAY-1:0] hit_mask;
    // HIT
    wire [31:0] line_word [0:WORDS-1];
    wire [31:0] hit_word;
    // NO USE
    reg [31:0] no_use_data;
    // OVER
    wire [31:0] over_data_words [0:WORDS-1];
    wire [31:0] over_data_out;
    // 替换策略
    reg [WAY_WIDTH-1:0] replace_way;
    // ====================icache逻辑实现==============================
    always @(posedge clk) begin
        if(reset) begin
            state <= IDLE;
            req_addr_r <= 0;
            line_buf <= 0;
            addr_offset_r <= 0;
            cache_hit <= 0;
        end else begin
            case(state)
                IDLE: begin // address calculation
                    if(req_valid_i) begin
                        if(req_use_i) begin
                            state <= IN_CAHCE;
                        end else begin
                            state <= NO_USE;
                        end
                        req_addr_r <= req_addr_i;
                    end
                end
                IN_CAHCE: begin
                    line_buf <= selected_line;
                    addr_offset_r <= addr_offset[OFFSET_WIDTH-1:2];
                    cache_hit <= |hit_mask;
                    if(|hit_mask) begin
                        state <= HIT;
                    end else begin
                        state <= MISS;
                    end
                end
                HIT: begin
`ifdef ysyx_25050136_VERILATOR_DPIC
                    icache_hit();
`endif
                    state <= IDLE;
                end
                MISS: begin
                    if(ret_valid_i) begin
                        line_buf <= {ret_data_i, line_buf[LINE_WIDTH-1:32]};
                        if(ret_last_i) begin
                            state <= OVER;
                        end
                    end
                end
                NO_USE: begin
                    if(ret_valid_i) begin
                        state <= IDLE;
                    end
                end
                OVER: begin
                    state <= IDLE;
                end
                default: state <= IDLE;
            endcase
        end
    end
    // IDLE
    assign addr_index = req_addr_r[OFFSET_WIDTH+INDEX_WIDTH-1:OFFSET_WIDTH];
    assign addr_tag = req_addr_r[31:OFFSET_WIDTH+INDEX_WIDTH];
    assign addr_offset = req_addr_r[OFFSET_WIDTH-1:0];
    // IN_CAHCE
    // 读取 tags 和 valids（同步RAM 情况另算，这里假设读出为组合/寄存器）
    integer k;
    always @(*) begin
        hit_mask = {NUM_WAY{1'b0}};
        for (k = 0; k < NUM_WAY; k = k + 1) begin
            if (cache_valid[k][addr_index] && (cache_tag[k][addr_index] == addr_tag))
                hit_mask[k] = 1'b1;
        end
    end
    // 单次选择数据，避免每个 way 都输出大宽度数据然后做按位 or
    always @(*) begin
        selected_line = {LINE_WIDTH{1'b0}};
        for (k = 0; k < NUM_WAY; k = k + 1) begin
            if (hit_mask[k]) selected_line = cache_data[k][addr_index];
        end
    end
    // HIT & OVER
    generate
    for (genvar i = 0; i < WORDS; i = i + 1) begin : SPLIT_0
        assign line_word[i] = line_buf[i*32 +: 32];
    end
    endgenerate
    assign hit_word = line_word[addr_offset_r];
    // OVER
    always @(posedge clk) begin
        if(state == OVER) begin
            cache_data[replace_way][addr_index] <= line_buf;
            cache_tag[replace_way][addr_index] <= addr_tag;
            cache_valid[replace_way][addr_index] <= 1'b1;
        end
    end
    // 输出寄存器
    assign req_rdata_o = ((state == HIT) || (state == OVER)) ? hit_word :
                         (state == NO_USE) ? ret_data_i :
                         32'b0;
    assign req_ready_o = (state == HIT) || (state == OVER) || ((state == NO_USE) && ret_valid_i);
    // cache替换
    always @(posedge clk) begin
        if (reset) begin
            replace_way <= 0;
        end else begin
            replace_way <= (NUM_WAY == 1) ? 0 : replace_way + 1;
        end
    end
    // AXI接口处理
    assign rd_req_o = (state == NO_USE) | (state == MISS);
    assign rd_size_o = (state == MISS);
    assign rd_addr_o = req_addr_r;

`ifdef verilator
    reg [79:0] dbg_state;
    always @(*) begin
        case (state)
            IDLE        : dbg_state = "IDLE"      ;
            IN_CAHCE    : dbg_state = "IN_CACHE"  ;
            HIT         : dbg_state = "HIT"       ;
            MISS        : dbg_state = "MISS"      ;
            NO_USE      : dbg_state = "NO_USE"    ;
            OVER        : dbg_state = "OVER"      ;
            default     : dbg_state = "UNKNOW"    ;
        endcase
    end
`endif    
endmodule //ysyx_25050136_ICACHE
