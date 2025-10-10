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
    input                                      req_stall_i  ,
    input                                      req_flush_i  ,
    output   [31:0]                            req_raddr_o  ,
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
    parameter LINE_WIDTH   = 8 * 2 ** OFFSET_WIDTH;                // cacheline宽度
    parameter WORDS        = 2 ** (OFFSET_WIDTH - 2);              // cacheline的字数
    parameter TAG_WIDTH    = 32 - OFFSET_WIDTH - INDEX_WIDTH;      // tag的宽度
    parameter NUM_SET      = 2 ** INDEX_WIDTH;                     // set的数量
    parameter WAY_WIDTH    = NUM_WAY>1?$clog2(NUM_WAY):1;          // way的数量
    parameter BURST_NUM    = 2 ** (OFFSET_WIDTH - 2) - 1;          // cacheline的字数-1
    // icache存储阵列
    reg [LINE_WIDTH-1:0] cache_data  [0:NUM_WAY-1][0:NUM_SET-1]; 
    reg [TAG_WIDTH-1 :0] cache_tag   [0:NUM_WAY-1][0:NUM_SET-1];
    reg                  cache_valid [0:NUM_WAY-1][0:NUM_SET-1];
    // icache 状态机
    localparam IDLE       = 2'd0;
    localparam MISS       = 2'd1;
    localparam OVER       = 2'd2;
    reg [1:0] state;
    // 输入级 IDLE
    wire [INDEX_WIDTH-1:0]  addr_index  ;
    wire [TAG_WIDTH-1:0]    addr_tag    ;
    wire [OFFSET_WIDTH-1:0] addr_offset ;
    reg [LINE_WIDTH-1:0] selected_line;
    reg [NUM_WAY-1:0] hit_mask;
    // 第一级寄存器
    reg reach;
    reg [LINE_WIDTH-1:0] line_buf ;
    reg [$clog2(WORDS)-1:0] addr_offset_r;
    reg cache_hit;
    reg req_use_r;
    reg [31:0] req_raddr_r;
    // 第二级
    wire [31:0] line_word [0:WORDS-1];
    wire [31:0] hit_word;
    // NO USE
    reg [31:0] no_use_data;
    reg [31:0] req_rdata_r;
    reg req_ready_r;
    // OVER
    wire [31:0] over_data_words [0:WORDS-1];
    wire [31:0] over_data_out;
    // 替换策略
    reg [WAY_WIDTH-1:0] replace_way;
    wire fire = req_stall_i & req_ready_o;
    // ====================icache逻辑实现==============================
    always @(posedge clk) begin
        if(reset) begin
            line_buf <= 0;
            addr_offset_r <= 0;
            cache_hit <= 1;
            reach <= 0;
            req_use_r <= 0;
            req_raddr_r <= 0;
            state <= IDLE;
        end else begin
            case(state)
                IDLE: begin
                    // 第一级流水线
                    if(!req_stall_i) begin
                        line_buf <= selected_line;
                        addr_offset_r <= addr_offset[OFFSET_WIDTH-1:2];
                        cache_hit <= |hit_mask;
                        reach <= 1;
                        req_use_r <= req_use_i;
                        req_raddr_r <= req_addr_i;
                        if(~cache_hit & reach) begin 
                            state <= MISS;
                        end
                    end
                end
                MISS: begin
                    if(ret_valid_i) begin
                        line_buf <= {ret_data_i, line_buf[LINE_WIDTH-1:32]};
                        if(ret_last_i) begin
                            state <= OVER;
                        end
                    end
                end
                OVER: begin
                    if(fire) begin
                        state <= IDLE;
                    end
                end
                default: state <= IDLE;
            endcase
        end
    end
    //=====================第一级流水线===========================
    assign addr_index = req_addr_i[OFFSET_WIDTH+INDEX_WIDTH-1:OFFSET_WIDTH];
    assign addr_tag = req_addr_i[31:OFFSET_WIDTH+INDEX_WIDTH];
    assign addr_offset = req_addr_i[OFFSET_WIDTH-1:0];
    // 读取 tags 和 valids
    integer j,k;
    always @(*) begin
        hit_mask = {NUM_WAY{1'b0}};
        for (k = 0; k < NUM_WAY; k = k + 1) begin
            if (cache_valid[k][addr_index] && (cache_tag[k][addr_index] == addr_tag))
                hit_mask[k] = 1'b1;
        end
    end
    // 单次选择数据
    always @(*) begin
        selected_line = {LINE_WIDTH{1'b0}};
        for (k = 0; k < NUM_WAY; k = k + 1) begin
            if (hit_mask[k]) selected_line = cache_data[k][addr_index];
        end
    end
    //=====================第二级流水线===========================
    generate
    for (genvar i = 0; i < WORDS; i = i + 1) begin : SPLIT_0
        assign line_word[i] = line_buf[i*32 +: 32];
    end
    endgenerate
    assign hit_word = line_word[addr_offset_r];
    // OVER
    always @(posedge clk) begin
        if(req_flush_i) begin
            for (j = 0; j < NUM_WAY; j = j + 1) begin
                for(k = 0; k < NUM_SET; k = k + 1) begin
                    cache_valid[j][k] <= 1'b0;
                end
            end
        end else begin
           if(state == OVER) begin
                cache_data[replace_way][addr_index] <= line_buf;
                cache_tag[replace_way][addr_index] <= addr_tag;
                cache_valid[replace_way][addr_index] <= 1'b1;
            end 
        end
    end
    // 输出寄存器
    assign req_raddr_o = req_raddr_r;
    assign req_rdata_o = ((state == IDLE && cache_hit) || (state == OVER)) ? hit_word : 32'b0;
    assign req_ready_o = ((state == IDLE && cache_hit) || (state == OVER));
    // cache替换
    always @(posedge clk) begin
        if (reset) begin
            replace_way <= 0;
        end else begin
            replace_way <= (NUM_WAY == 1) ? 0 : replace_way + 1;
        end
    end
    // AXI接口处理
    assign rd_req_o  = (state == MISS);
    assign rd_size_o = req_use_r;
    assign rd_addr_o = req_raddr_r;

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
