module ysyx_25050136_ICACHE
#(
    parameter OFFSET_WIDTH = 4,
    parameter NUM_WAY = 1,
    parameter INDEX_WIDTH = 1
)
(
    input                                      clk          ,
    input                                      reset        ,
    // CPU Interface
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
    // AXI Interface
    output                                  ia_flush_o      ,
    output                                  ia_rd_req_o     ,
    output   [31:0]                         ia_rd_addr_o    ,
    input                                   ia_ret_valid_i  ,
    input                                   ia_ret_last_i   ,
    input    [31:0]                         ia_ret_data_i   
);

    // ==================== Parameters ====================
    parameter LINE_WIDTH   = 8 << OFFSET_WIDTH;
    parameter WORDS        = 1 << (OFFSET_WIDTH - 2);
    parameter TAG_WIDTH    = 32 - OFFSET_WIDTH - INDEX_WIDTH;
    parameter NUM_SET      = 1 << INDEX_WIDTH;
    parameter WAY_WIDTH    = (NUM_WAY > 1) ? $clog2(NUM_WAY) : 1;
    parameter OFFSET_INDEX = (OFFSET_WIDTH > 2) ? OFFSET_WIDTH-2 : 1;
    localparam IDLE = 1'd0;
    localparam MISS = 1'd1;

    // ==================== Signal Definitions ====================
    
    // Storage Arrays
    reg [LINE_WIDTH-1:0] cache_data  [0:NUM_WAY-1][0:NUM_SET-1]; 
    reg [TAG_WIDTH-1 :0] cache_tag   [0:NUM_WAY-1][0:NUM_SET-1];
    reg                  cache_valid [0:NUM_WAY-1][0:NUM_SET-1];

    // Pipeline Registers
    reg        ic_idle;
    reg [31:0] ic_addr;
    reg [31:0] ic_prepc;
    reg        ic_taken;
    reg        ic_btb_hit;

    // State Machine Registers
    reg state;
    reg [WAY_WIDTH-1:0] replace_way; 
    reg [WAY_WIDTH-1:0] miss_way;    

    // Wires & Intermediates
    wire in_fire;
    wire out_fire;
    wire ready_go;
    wire miss;
    
    wire [INDEX_WIDTH-1:0]  addr_index;
    wire [TAG_WIDTH-1:0]    addr_tag;
    wire [OFFSET_INDEX-1:0] addr_offset;

    reg  [NUM_WAY-1:0]    hit_mask;
    reg  [LINE_WIDTH-1:0] selected_line;
    
    wire [31:0] line_word [0:WORDS-1];
    wire [31:0] buf_word  [0:WORDS-1];
    wire [31:0] hit_word;
    wire [31:0] miss_word;

    // Loop Variables
    integer k, m, n;
    genvar i;

    // ==================== Logic Assignments ====================

    // --- 1. Address Decoding & Handshake ---
    assign addr_index  = ic_addr[OFFSET_WIDTH+INDEX_WIDTH-1:OFFSET_WIDTH];
    assign addr_tag    = ic_addr[31:OFFSET_WIDTH+INDEX_WIDTH];
    assign addr_offset = (OFFSET_WIDTH > 2) ? ic_addr[OFFSET_WIDTH-1:2] : 0;

    assign in_fire  = ic_req_valid_i & ic_req_ready_o;
    assign out_fire = ic_ret_valid_o & ic_ret_ready_i;

    // --- 2. Pipeline Register Update (Input Latching) ---
    always @(posedge clk) begin
        if (reset) begin
            ic_idle    <= 1'b1;
            ic_addr    <= 32'b0;
            ic_prepc   <= 32'b0;
            ic_taken   <= 1'b0;
            ic_btb_hit <= 1'b0;
        end else begin
            if (ic_flush_i) begin
                ic_idle <= 1'b1; 
            end else if (in_fire) begin
                ic_idle    <= 1'b0;
                ic_addr    <= ic_req_addr_i;
                ic_prepc   <= ic_req_prepc_i;
                ic_taken   <= ic_req_taken_i;
                ic_btb_hit <= ic_req_btb_hit_i;
            end else if (out_fire) begin
                ic_idle <= 1'b1;
            end
        end
    end

    // --- 3. Tag Compare & Data Select (Combinational) ---
    always @(*) begin
        hit_mask = {NUM_WAY{1'b0}};
        for (k = 0; k < NUM_WAY; k = k + 1) begin
            if (cache_valid[k][addr_index] && (cache_tag[k][addr_index] == addr_tag))
                hit_mask[k] = 1'b1;
        end
    end

    assign miss = ~(|hit_mask);

    always @(*) begin
        selected_line = {LINE_WIDTH{1'b0}};
        for (k = 0; k < NUM_WAY; k = k + 1) begin
            if (hit_mask[k]) selected_line = cache_data[k][addr_index];
        end
    end

    generate
        for (i = 0; i < WORDS; i = i + 1) begin : SPLIT_HIT
            assign line_word[i] = selected_line[i*32 +: 32];
        end
        for (i = 0; i < WORDS; i = i + 1) begin : SPLIT_MISS
            assign buf_word[i] = cache_data[miss_way][addr_index][i*32 +: 32];
        end
    endgenerate

    assign hit_word  = line_word[addr_offset];
    assign miss_word = buf_word[addr_offset];

    // --- 4. State Machine & Cache Maintenance ---
    always @(posedge clk) begin
        if (reset) begin
            state       <= IDLE;
            replace_way <= 0;
            miss_way    <= 0;
        end else begin
            if (ic_flush_i) begin
                if (ic_fencei_i) begin
                    for (m = 0; m < NUM_WAY; m = m + 1) begin
                        for (n = 0; n < NUM_SET; n = n + 1) begin
                            cache_valid[m][n] <= 1'b0;
                        end
                    end
                end else if (state == MISS) begin
                    cache_valid[replace_way][addr_index] <= 1'b0;
                end
                state <= IDLE;
            end else begin
                case (state)
                    IDLE: begin
                        if (!ic_idle && miss) begin
                            state    <= MISS;
                            miss_way <= replace_way;
                        end
                        if (!ic_idle && miss && NUM_WAY > 1) begin
                            replace_way <= (replace_way + 1) % NUM_WAY;
                        end
                    end

                    MISS: begin
                        if (ia_ret_valid_i) begin
                            cache_data[miss_way][addr_index] <= {ia_ret_data_i, cache_data[miss_way][addr_index][LINE_WIDTH-1:32]};
                            if (ia_ret_last_i) begin
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

    // --- 5. Output Assignments ---
    assign ready_go = (state == IDLE) && !miss;

    assign ic_req_ready_o   = (state == IDLE) && (out_fire || ic_idle);
    assign ic_ret_valid_o   = !ic_idle && !ic_flush_i && ready_go;
    
    assign ic_ret_rdata_o   = hit_word;
    assign ic_ret_addr_o    = ic_addr;
    assign ic_ret_prepc_o   = ic_prepc;
    assign ic_ret_taken_o   = ic_taken;
    assign ic_ret_btb_hit_o = ic_btb_hit;

    assign ia_flush_o       = ic_flush_i;
    assign ia_rd_req_o      = (state == MISS);
    assign ia_rd_addr_o     = ic_addr;

endmodule