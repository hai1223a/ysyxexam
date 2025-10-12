// 要求OFFSET_WIDTH > 2
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
    input                                   ic_req_valid_i  ,
    input    [31:0]                         ic_req_addr_i   ,
    output                                  ic_req_ready_o  ,

    input                                   ic_ret_ready_i  ,
    output   [31:0]                         ic_ret_rdata_o  ,
    output   [31:0]                         ic_ret_addr_o   ,
    output                                  ic_ret_valid_o  ,                           
    // ICACHE与AXI接口                                        
    output                                  ia_rd_req_o     ,
    output   [31:0]                         ia_rd_addr_o    ,
    input                                   ia_ret_valid_i  ,
    input                                   ia_ret_last_i   ,
    input    [31:0]                         ia_ret_data_i   
    // 内部
);
    // ==================== cache内部信号定义 =============================
    parameter LINE_WIDTH   = 8 << OFFSET_WIDTH;                // cacheline宽度
    parameter WORDS        = 1 << (OFFSET_WIDTH - 2);          // cacheline的字数
    parameter TAG_WIDTH    = 32 - OFFSET_WIDTH - INDEX_WIDTH;  // tag的宽度
    parameter NUM_SET      = 1 << INDEX_WIDTH;                 // set的数量
    parameter WAY_WIDTH    = (NUM_WAY > 1) ? $clog2(NUM_WAY) : 1; // way的数量
    parameter OFFSET_INDEX = (OFFSET_WIDTH > 2) ? OFFSET_WIDTH-2 : 1; // 用于索引的offset的位宽
    // icache存储阵列
    reg [LINE_WIDTH-1:0] cache_data  [0:NUM_WAY-1][0:NUM_SET-1]; 
    reg [TAG_WIDTH-1 :0] cache_tag   [0:NUM_WAY-1][0:NUM_SET-1];
    reg                  cache_valid [0:NUM_WAY-1][0:NUM_SET-1];
    // 第一级流水线
    reg idle_1;
    reg [NUM_WAY-1:0] hit_mask;
    reg [31:0] addr_1;
    reg [NUM_WAY-1:0] hit_mask_1;
    
    wire in_fire_1 = ic_req_valid_i & ic_req_ready_o;
    wire [INDEX_WIDTH-1:0]  addr_index  ;
    wire [TAG_WIDTH-1:0]    addr_tag    ;
    // 第一第二级流水线握手信号
    wire temp_valid, temp_ready;
    wire temp_fire = temp_valid & temp_ready;
    // 第二级流水线
    // HIT 时
    reg idle_2;
    reg [31:0] addr_2;
    reg [31:0] hit_word_2;
    reg hit_2;

    wire ready_go_2;
    wire out_fire_2 = ic_ret_valid_o & ic_ret_ready_i;
    wire [INDEX_WIDTH-1:0]  addr_index_1;
    wire [OFFSET_INDEX-1:0] addr_offset_1;
    reg [LINE_WIDTH-1:0] selected_line;
    wire [31:0] line_word [0:WORDS-1];
    wire [31:0] hit_word;
    // MISS 时
    localparam IDLE       = 1'd0;
    localparam MISS       = 1'd1;
    reg state;
    reg [WAY_WIDTH-1:0] replace_way;
    reg [WAY_WIDTH-1:0] miss_way;
    
    // conflict 和 miss 用于解决流水线中相同cacheline的两次取指的命中冲突问题
    wire conflict;
    wire miss;
    wire [INDEX_WIDTH-1:0]  addr_index_2 ;
    wire [TAG_WIDTH-1:0]    addr_tag_2   ;
    wire [OFFSET_INDEX-1:0] addr_offset_2;
    wire [31:0] buf_word [0:WORDS-1];
    wire [31:0] miss_word;
    // ==================== 代码实现 =============================
    // 第一级流水线
    always @(posedge clk) begin
        if(reset) begin
            idle_1 <= 1;
            addr_1 <= 0;
            hit_mask_1 <= 0;
        end else begin
            if(ic_flush_i) begin
                idle_1 <= 1;                
            end else if(in_fire_1) begin
                idle_1 <= 0;
                addr_1 <= ic_req_addr_i;
                hit_mask_1 <= hit_mask;
            end else if(temp_fire) begin
                idle_1 <= 1;
            end
        end
    end
    // 地址decoder
    assign addr_index = ic_req_addr_i[OFFSET_WIDTH+INDEX_WIDTH-1:OFFSET_WIDTH];
    assign addr_tag = ic_req_addr_i[31:OFFSET_WIDTH+INDEX_WIDTH];
    // 判断是否命中
    integer j,k;
    always @(*) begin
        hit_mask = {NUM_WAY{1'b0}};
        for (k = 0; k < NUM_WAY; k = k + 1) begin
            if (cache_valid[k][addr_index] && (cache_tag[k][addr_index] == addr_tag))
                hit_mask[k] = 1'b1;
        end
    end
    assign ic_req_ready_o = idle_1 || temp_fire;
    assign temp_valid = !(idle_1 || ic_flush_i);

    // 第二级流水线
    always @(posedge clk) begin
        if(reset) begin
            idle_2 <= 1;
            addr_2 <= 0;
            hit_word_2 <= 0;
            hit_2 <= 0;
        end else begin
            if(ic_flush_i) begin
                idle_2 <= 1;
            end else if(temp_fire) begin
                idle_2 <= 0;
                hit_word_2 <= hit_word;
                addr_2 <= addr_1;
                hit_2 <= |hit_mask_1;
            end else if(out_fire_2) begin
                idle_2 <= 1;
            end
        end
    end
    // 地址decoder
    assign addr_index_1 = addr_1[OFFSET_WIDTH+INDEX_WIDTH-1:OFFSET_WIDTH];
    assign addr_offset_1 = (OFFSET_WIDTH > 2) ? addr_1[OFFSET_WIDTH-1:2] : 0;
    // 读data_sram
    always @(*) begin
        selected_line = {LINE_WIDTH{1'b0}};
        for (k = 0; k < NUM_WAY; k = k + 1) begin
            if (hit_mask_1[k]) selected_line = cache_data[k][addr_index_1];
        end
    end
    generate
    for (genvar i = 0; i < WORDS; i = i + 1) begin : SPLIT_0
        assign line_word[i] = selected_line[i*32 +: 32];
    end
    endgenerate
    assign hit_word = line_word[addr_offset_1];
    // MISS时阻塞逻辑
    // 命中冲突
    assign conflict = addr_1[31:OFFSET_WIDTH] == addr_2[31:OFFSET_WIDTH];
    assign miss = ~(|hit_mask_1 | (conflict & |hit_mask));
    always @(posedge clk) begin
        if(reset) begin
            state <= IDLE;
            replace_way <= 0;
            miss_way <= 0;
        end else begin
            case(state)
                IDLE: begin
                    if(miss & temp_fire) begin
                        state <= MISS;
                    end
                    replace_way <= (NUM_WAY == 1) ? 0 : replace_way + 1;
                end
                MISS: begin
                    if(ia_ret_valid_i) begin
                        cache_data[replace_way][addr_index_2] <= {ia_ret_data_i, cache_data[replace_way][addr_index_2][LINE_WIDTH-1:32]};
                        if(ia_ret_last_i) begin
                            cache_tag[replace_way][addr_index] <= addr_tag_2;
                            cache_valid[replace_way][addr_index] <= 1'b1;
                            miss_way <= replace_way;
                            state <= IDLE;
                        end
                    end
                end
            endcase
        end
    end
    assign addr_index_2 = addr_2[OFFSET_WIDTH+INDEX_WIDTH-1:OFFSET_WIDTH];
    assign addr_tag_2 = addr_2[31:OFFSET_WIDTH+INDEX_WIDTH];
    assign addr_offset_2 = (OFFSET_WIDTH > 2) ? addr_2[OFFSET_WIDTH-1:2] : 0;
    generate
    for (genvar i = 0; i < WORDS; i = i + 1) begin : SPLIT_1
        assign buf_word[i] = cache_data[miss_way][addr_index_2][i*32 +: 32];
    end
    endgenerate
    assign miss_word = buf_word[addr_offset_2];

    assign ia_rd_req_o = (state == MISS);
    assign ia_rd_addr_o = addr_2;
    assign ready_go_2 = (state == IDLE);

    assign ic_ret_rdata_o = hit_2 ? hit_word_2 : miss_word;
    assign ic_ret_addr_o = addr_2;
    assign temp_ready = idle_2 || out_fire_2;
    assign ic_ret_valid_o = !(idle_2 || ic_flush_i) && ready_go_2;

`ifdef verilator
    reg [79:0] dbg_state;
    always @(*) begin
        case (state)
            IDLE        : dbg_state = "IDLE"      ;
            MISS        : dbg_state = "MISS"      ;
            default     : dbg_state = "UNKNOW"    ;
        endcase
    end
`endif    
endmodule //ysyx_25050136_ICACHE
