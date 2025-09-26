// 要求OFFSET_WIDTH > 2
// 要求 NUM_WAY > 1
module ysyx_25050136_ICACHE
#(
    parameter OFFSET_WIDTH = 3,
    parameter NUM_WAY = 2,
    parameter INDEX_WIDTH = 4
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
    parameter LINE_WIDTH = 8 * 2 ** OFFSET_WIDTH;
    parameter TAG_WIDTH = 32 - OFFSET_WIDTH - INDEX_WIDTH;
    parameter NUM_SET = 2 ** INDEX_WIDTH;
    parameter WAY_WIDTH = NUM_WAY>1?$clog2(NUM_WAY):1;
    parameter BURST_NUM = 2 ** (OFFSET_WIDTH - 2) - 1;
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
    localparam OUT_VALID  = 3'd6;
    reg [2:0] state;
    // IDLE
    reg [31:0] req_addr_r;
    wire [INDEX_WIDTH-1:0]  addr_index  ;
    wire [TAG_WIDTH-1:0]    addr_tag    ;
    wire [OFFSET_WIDTH-1:0] addr_offset ;
    // IN_CAHCE
    reg [LINE_WIDTH-1:0] cache_data_mux ;
    reg [OFFSET_WIDTH-1:0] addr_offset_r;
    reg cache_hit;
    reg [LINE_WIDTH-1:0] way_data_or    ;
    reg way_hit_or;
    wire [TAG_WIDTH-1:0]  way_tag   [0:NUM_WAY-1];
    wire                  way_valid [0:NUM_WAY-1];
    wire                  way_hit   [0:NUM_WAY-1];
    wire [LINE_WIDTH-1:0] way_data  [0:NUM_WAY-1];
    // HIT
    wire [31:0] cache_data_out;
    // NO USE
    reg [31:0] no_use_data;
    // 输出寄存器
    wire [31:0] req_rdata;
    reg [31:0] req_rdata_r;
    // 替换策略
    reg [WAY_WIDTH-1:0] replace_way;
    // AXI接口处理
    reg [LINE_WIDTH-1:0] cache_buffer;
    // ====================icache逻辑实现==============================
    always @(posedge clk) begin
        if(reset) begin
            state <= IDLE;
            req_addr_r <= 0;
            cache_data_mux <= 0;
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
                    cache_data_mux <= way_data_or;
                    addr_offset_r <= addr_offset;
                    cache_hit <= way_hit_or;
                    if(way_hit_or) begin
                        state <= HIT;
                    end else begin
                        state <= MISS;
                    end
                end
                HIT: begin
                    state <= OUT_VALID;
                end
                MISS: begin
                    if(ret_last_i & ret_valid_i) begin
                        state <= HIT;
                    end
                end
                NO_USE: begin
                    if(ret_valid_i) begin
                        state <= OUT_VALID;
                    end
                end
                OVER: begin
                    state <= OUT_VALID;
                end
                OUT_VALID: begin
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
    integer j;
    always @(*) begin
        way_data_or = 0;
        way_hit_or = 0;
        for (j = 0; j < NUM_WAY; j = j + 1) begin
            way_data_or = way_data_or | way_data[j];
            way_hit_or = way_hit_or | way_hit[j];
        end
    end
    genvar i;
    generate
        for (i = 0; i < NUM_WAY; i = i + 1) begin : way_mux
            assign way_tag[i] = cache_tag[i][addr_index];
            assign way_valid[i] = cache_valid[i][addr_index];
            assign way_hit[i] = (way_tag[i] == addr_tag) & way_valid[i];
            assign way_data[i] = way_hit[i] ? cache_data[i][addr_index] : 'b0;
        end
    endgenerate
    // HIT
    assign cache_data_out = cache_data_mux[addr_offset_r * 8 +: 32];
    // NO USE & MISS
    always @(posedge clk) begin
        if(reset) begin
            cache_buffer <= 0;
        end else begin
            if(ret_valid_i) begin
                cache_buffer <= {ret_data_i, cache_buffer[LINE_WIDTH-1:32]};
            end
        end
    end
    // OVER
    always @(posedge clk) begin
        if(state == OVER) begin
            cache_data[replace_way][addr_index] <= cache_buffer;
            cache_tag[replace_way][addr_index] <= addr_tag;
            cache_valid[replace_way][addr_index] <= 1'b1;
        end
    end
    // 输出寄存器
    always @(posedge clk) begin
        if(reset) begin
            req_rdata_r <= 0;
        end else begin
            req_rdata_r <= req_rdata;
        end
    end
    assign req_rdata = (state == HIT) ? cache_data_out :
                       (state == NO_USE) ? ret_data_i :
                       (state == MISS) ? cache_buffer[addr_offset_r * 8 +: 32] :
                       32'b0;
    assign req_rdata_o = req_rdata_r;
    assign req_ready_o = (state == OUT_VALID);
    // cache替换
    always @(posedge clk) begin
        if (reset) begin
            replace_way <= 0;
        end else begin
            replace_way <= replace_way + 1;
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
            OUT_VALID   : dbg_state = "OUT_VALID" ;
            default     : dbg_state = "UNKNOW"    ;
        endcase
    end
`endif    
endmodule //ysyx_25050136_ICACHE
