module ysyx_25050136_ICACHE
#(
    parameter OFFSET_WIDTH = 2,
    parameter NUM_WAY = 1,
    parameter INDEX_WIDTH = 4
)
(
    input                                      clk          ,
    input                                      reset        ,
    // 读地址                                        
    output                                     m_arvalid_o  ,
    input                                      m_arready_i  ,
    output   [31:0]                            m_araddr_o   ,
    output   [3:0]                             m_arid_o     ,
    output   [7:0]                             m_arlen_o    ,
    output   [2:0]                             m_arsize_o   ,
    output   [1:0]                             m_arburst_o  ,
    // 读数据                                        
    input                                      m_rvalid_i   ,
    output                                     m_rready_o   ,
    input    [31:0]                            m_rdata_i    ,
    input    [1:0]                             m_rresp_i    ,
    input                                      m_rlast_i    ,
    input    [3:0]                             m_rid_i      ,
    // 内部
    input    [31:0]                            req_addr_i   ,
    input                                      req_valid_i  ,
    output   [31:0]                            req_rdata_o  ,                           
    output                                     req_ready_o  
);
    // ====================cache内部信号定义==============================
    parameter LINE_WIDTH = 8 * 2 ** OFFSET_WIDTH;
    parameter TAG_WIDTH = 32 - OFFSET_WIDTH - INDEX_WIDTH;
    parameter NUM_SET = 2 ** INDEX_WIDTH;
    parameter WAY_WIDTH = $clog2(NUM_WAY);
    parameter BURST_NUM = 2 ** (OFFSET_WIDTH - 2) - 1;
    // icache状态机
    localparam IDLE      = 2'd0;
    localparam INCACHE   = 2'd1;
    localparam CACHEMISS = 2'd2;
    localparam MISSIN    = 2'd3;
    // icache存储阵列
    reg [LINE_WIDTH-1:0] cache_data  [0:NUM_WAY-1][0:NUM_SET-1];
    reg [TAG_WIDTH-1 :0] cache_tag   [0:NUM_WAY-1][0:NUM_SET-1];
    reg                  cache_valid [0:NUM_WAY-1][0:NUM_SET-1];
    // icache与CPU交互信号
    reg [1:0] state;
    reg [31:0] req_addr_r;
    reg [31:0] req_rdata_r;
    reg req_ready_r;
    // 命中信号
    reg [NUM_WAY-1:0] way_hit;
    reg [NUM_WAY-1:0] way_valid;
    wire [NUM_WAY-1:0] hot_hit = way_hit & way_valid;
    wire [WAY_WIDTH-1:0] bin_hit;
    ysyx_25050136_hot2bin #(.ONE_HOT_WIDTH(NUM_WAY))
        hot2bin_hit (
            .hot_hit(hot_hit),
            .bin_hit(bin_hit)
        );
    // 替换索引生成逻辑(随机替换) 
    reg [WAY_WIDTH-1:0] replace_way;
    reg [WAY_WIDTH-1:0] replace_way_use;
    wire [WAY_WIDTH-1:0] replace_way_dirty;
    wire replace_way_dirty_valid;
    always @(posedge clk) begin
        if (reset) begin
            replace_way <= 0;
        end else begin
            replace_way <= replace_way + 1;
        end
    end
    ysyx_25050136_encoder #(.WIDTH(NUM_WAY))
        replace_encoder (
            .in_code(~way_valid),
            .out_code(replace_way_dirty),
            .valid(replace_way_dirty_valid)
        );
    // 地址解析
    wire [INDEX_WIDTH-1:0] addr_index = req_addr_r[OFFSET_WIDTH+INDEX_WIDTH-1:OFFSET_WIDTH];
    wire [TAG_WIDTH-1:0] addr_tag = req_addr_r[31:OFFSET_WIDTH+INDEX_WIDTH];
    wire [OFFSET_WIDTH-1:0] addr_offset = req_addr_r[OFFSET_WIDTH-1:0];

    // ====================axi信号定义================================
    localparam READ_IEDL = 2'd0;
    localparam READ_ADDR = 2'd1;
    localparam READ_DATA = 2'd2;
    // axi读请求信号
    reg [1:0] state_read;
    reg m_rready_r;
    reg [31:0] m_araddr_r;
    reg [7:0] m_arlen_r;
    reg [2:0] m_arsize_r;
    reg [1:0] m_arburst_r;
    wire ar_fire, r_fire;
    // ====================icache逻辑实现==============================
    // icache总状态机
    integer i,j;
    always @(posedge clk) begin
        if (reset) begin
            state <= IDLE;
            req_addr_r <= 0;
            way_hit <= 0;
            way_valid <= 0;
            for (i = 0; i < NUM_WAY; i = i + 1) begin
                for (j = 0; j < NUM_SET; j = j + 1) begin
                    cache_valid[i][j] <= 0;
                end
            end
        end else begin
            case (state)
            IDLE: begin
                if(req_valid_i) begin
                    state <= INCACHE;
                    req_addr_r <= req_addr_i;
                end         
            end 
            INCACHE: begin
                for (i = 0; i < NUM_WAY ; i = i + 1) begin
                    way_valid[i] <= cache_valid[i][addr_index];
                    way_hit[i] <= (cache_tag[i][addr_index] == addr_tag);
                end
                if(hot_hit != 0) begin
    `ifdef ysyx_25050136_VERILATOR_DPIC
                    icache_hit();
    `endif 
                    state <= IDLE;
                end else begin
                    state <= CACHEMISS;
                end
            end
            CACHEMISS: begin
                if(r_fire && m_rlast_i && (m_rresp_i == 2'd0)) begin
                    state <= MISSIN;
                end
            end
            MISSIN: begin
                state <= IDLE;
            end
            endcase
        end
    end
    // cache读数据输出逻辑
    always @(*) begin
        req_rdata_r = 0;
        req_ready_r = 0;
        case (state)
            INCACHE: begin
            if(hot_hit != 0) begin
                req_rdata_r = cache_data[bin_hit][addr_index][addr_offset*8 +: 32];
                req_ready_r = 1;               
            end
            end 
            MISSIN: begin
            if(hot_hit != 0) begin
                req_rdata_r = cache_data[bin_hit][addr_index][addr_offset*8 +: 32];
                req_ready_r = 1;               
            end
            end
            default: ;
        endcase
    end

    assign req_rdata_o = req_rdata_r;
    assign req_ready_o = req_ready_r;

    // axi读请求状态机
    always @(posedge clk) begin
        if (reset) begin
            state_read      <= READ_IEDL;
            replace_way_use <= 0;
            m_araddr_r      <= 0;
            m_arlen_r       <= 0;   
            m_arsize_r      <= 0;
            m_arburst_r     <= 0;
            m_rready_r      <= 0;
        end else begin
            case(state_read)
            READ_IEDL: begin
                m_rready_r <= 1;
                if ((state == INCACHE) && (way_valid == 0) || (way_hit == 0)) begin
                    state_read <= READ_ADDR;
                    m_araddr_r <= {req_addr_r[31:OFFSET_WIDTH], {OFFSET_WIDTH{1'b0}}};
                    m_arlen_r <= BURST_NUM; // 4字节为一个beat
                    m_arsize_r <= 3'b010; // 4字节
                    m_arburst_r <= 2'b01; // 增量式
                end
            end 
            READ_ADDR: begin
                m_rready_r <= 1;
                if (ar_fire) begin
                    replace_way_use <= replace_way_dirty_valid ? replace_way_dirty : replace_way;
                    m_araddr_r <= 0;
                    m_arlen_r <= 0;
                    m_arsize_r <= 0;
                    m_arburst_r <= 0;
                    state_read <= READ_DATA;                        
                end
            end 
            READ_DATA: begin
                if (r_fire) begin
                    cache_data[replace_way_use][addr_index] <= {m_rdata_i, cache_data[replace_way_use][addr_index][LINE_WIDTH-1:32]};
                    if(m_rlast_i) begin
                        state_read <= READ_IEDL;
                        cache_tag[replace_way_use][addr_index] <= addr_tag;
                        cache_valid[replace_way_use][addr_index] <= 1'b1;
                    end
                    m_rready_r <= 0;
                end else begin
                    m_rready_r <= 1;                        
                end
            end 
            default: ;
            endcase
        end
    end

    assign m_arvalid_o = (state_read == READ_ADDR);
    assign m_araddr_o  = m_araddr_r;
    assign m_arid_o = 0;
    assign m_arlen_o = m_arlen_r;
    assign m_arsize_o = m_arsize_r;
    assign m_arburst_o = m_arburst_r;
    assign m_rready_o = m_rready_r;
    assign ar_fire = m_arvalid_o & m_arready_i;
    assign r_fire = m_rvalid_i & m_rready_o;
    endmodule //ysyx_25050136_ICACHE

module ysyx_25050136_hot2bin
#(
    parameter  ONE_HOT_WIDTH    = 4
)
(
    input   [ONE_HOT_WIDTH-1 : 0]               one_hot_code,
    output  [$clog2(ONE_HOT_WIDTH)-1 : 0]       bin_code
);

    wire [$clog2(ONE_HOT_WIDTH)-1 : 0] temp1 [ONE_HOT_WIDTH-1 : 0];
	wire [ONE_HOT_WIDTH-1 : 0] 		  temp2 [$clog2(ONE_HOT_WIDTH)-1 : 0];
		
	genvar i,j,k;
	generate
		for(i = 0; i < ONE_HOT_WIDTH; i = i+1)begin : temp1_loop
			assign temp1[i] = one_hot_code[i]? i:'b0;
		end
	endgenerate
	generate
		for(i = 0; i < ONE_HOT_WIDTH; i = i+1)begin : temp_ch1
			for(j = 0; j < $clog2(ONE_HOT_WIDTH); j = j+1)begin  : temp_ch2
				assign temp2[j][i] = temp1[i][j];
			end
		end
	endgenerate
	generate
		for(j = 0; j < $clog2(ONE_HOT_WIDTH); j = j+1)begin : temp2_loop
			assign bin_code[j] = |temp2[j];
		end
	endgenerate
    
endmodule //hot2bin

module ysyx_25050136_encoder
#(
    parameter WIDTH = 4
)
(
    input   [WIDTH-1 : 0]           in_code,
    output  [$clog2(WIDTH)-1 : 0]   out_code,
    output                          valid
);
    integer i;
    always @(*) begin
        out_code = 'b0;
        valid = 'b0;
        for(i = 0; i < WIDTH; i = i+1) begin
            if(in_code[i]) begin
                out_code = i;
                valid = 'b1;
            end
        end
    end
    
endmodule //hot2bin
