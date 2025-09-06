module ysyx_25050136_LSU
    #(
         DATA_WIDTH = 32
     )
     (
         input                         clk          ,
         input                         resetn       ,
         // 写地址                     
         output                        m_awvalid_o  ,
         input                         m_awready_i  ,
         output   [DATA_WIDTH-1:0]     m_awaddr_o   ,
         output   [3:0]                m_awid_o     ,
         output   [7:0]                m_awlen_o    ,
         output   [2:0]                m_awsize_o   ,
         output   [1:0]                m_awburst_o  ,
         // 写数据                       
         output                        m_wvalid_o   ,
         input                         m_wready_i   ,
         output   [DATA_WIDTH-1:0]     m_wdata_o    ,
         output   [3:0]                m_wstrb_o    ,
         output                        m_wlast_o    ,
         // 写响应                           
         input                         m_bvalid_i   ,
         output                        m_bready_o   ,
         input    [1:0]                m_bresp_i    ,
         input    [3:0]                m_bid_i      ,
         // 读地址                           
         output                        m_arvalid_o  ,
         input                         m_arready_i  ,
         output   [DATA_WIDTH-1:0]     m_araddr_o   ,
         output   [3:0]                m_arid_o     ,
         output   [7:0]                m_arlen_o    ,
         output   [2:0]                m_arsize_o   ,
         output   [1:0]                m_arburst_o  ,
         // 读数据                           
         input                         m_rvalid_i   ,
         output                        m_rready_o   ,
         input    [DATA_WIDTH-1:0]     m_rdata_i    ,
         input    [1:0]                m_rresp_i    ,
         input                         m_rlast_i    ,
         input    [3:0]                m_rid_i      ,
         // 内部                             
         input                         fvalid_i     ,
         input                         mem_ren_i    ,
         input                         mem_wen_i    ,                      
         input    [3:0]                mem_mask_i   ,
         input                         mem_signed_i ,
         input    [DATA_WIDTH-1:0]     mem_addr_i   ,
         input    [DATA_WIDTH-1:0]     store_data_i ,
         output   [DATA_WIDTH-1:0]     load_data_o  ,
         output                        mem_valid_o
     );
    // 内部
    wire [3:0] byte_sel;
    wire misaligned;
    // 读事务
    localparam READ_IEDL = 2'd0;
    localparam READ_ADDR = 2'd1;
    localparam READ_DATA = 2'd2;
    reg m_rready_r;
    reg [2:0] m_arsize_r, m_arsize_q;
    reg [DATA_WIDTH-1:0] load_data_r;
    reg [31:0] m_araddr_r;
    reg [1:0] state_read;
    wire ar_fire, r_fire;
    // 写事务
    localparam WRITE_IDLE    = 2'd0;
    localparam WRITE_RUNNING = 2'd1;
    localparam WRITE_WAIT    = 2'd2;
    reg m_bready_r;
    reg aw_en, w_en;
    reg [2:0] m_awsize_r, m_awsize_q;
    reg [1:0] state_write;
    reg [31:0] m_awaddr_r;
    reg [31:0] m_wdata_r;
    reg [3:0] m_wstrb_r;
    wire aw_fire, w_fire, b_fire;
    // 内部
    assign byte_sel = 4'b1 << mem_addr_i[1:0];
`ifdef VERILATOR_DPIC
    always @(*) begin
        if ((!((mem_addr_i >= 32'ha0000000) & (mem_addr_i < 32'ha2000000))) & (mem_wen_i | mem_ren_i))
        begin
            find_diff_skip();
        end
    end
`endif
    always @(*) begin
        // 默认值
        m_wdata_r = 0;
        m_wstrb_r = 0;
        m_arsize_r = 3'b010; // 默认word
        m_awsize_r = 3'b010; // 默认word
        load_data_r = 0;
        
        // 统一处理读写
        case (mem_mask_i)
            4'h1: begin // Byte操作
                m_wstrb_r = byte_sel;
                m_wdata_r = {24'd0, {store_data_i[7:0]}} << (8 * mem_addr_i[1:0]);
                m_arsize_r = 3'b000;
                m_awsize_r = 3'b000;
                load_data_r = mem_signed_i ? 
                    {{24{m_rdata_i[8*mem_addr_i[1:0] + 7]}}, m_rdata_i[8*mem_addr_i[1:0] +: 8]} :
                    {24'd0, m_rdata_i[8*mem_addr_i[1:0] +: 8]};
            end
            4'h3: begin // Halfword操作
                m_wstrb_r = byte_sel | (byte_sel << 1);
                m_wdata_r = {16'd0, store_data_i[15:0]} << (8 * mem_addr_i[1:0]);
                m_arsize_r = 3'b001;
                m_awsize_r = 3'b001;
                load_data_r = mem_signed_i ?
                    {{16{m_rdata_i[16*mem_addr_i[1] + 15]}}, m_rdata_i[16*mem_addr_i[1] +: 16]} :
                    {16'd0, m_rdata_i[16*mem_addr_i[1] +: 16]};
            end
            4'hF: begin // Word操作
                m_wstrb_r = 4'b1111;
                m_wdata_r = store_data_i;
                m_arsize_r = 3'b010;
                m_awsize_r = 3'b010;            
                load_data_r = m_rdata_i;
            end
            default;
        endcase
    end

    assign misaligned = 
        (mem_mask_i == 4'h3) ? mem_addr_i[0] :       // halfword检查bit[0]
        (mem_mask_i == 4'hF) ? |mem_addr_i[1:0] :    // word检查bit[1:0]
        1'b0;                                        // byte总是对齐

    // 读事务
    always @(posedge clk) begin
        if (!resetn) begin
            state_read   <= READ_IEDL;
            m_rready_r   <= 0;
            m_araddr_r   <= 0;
            m_arsize_q   <= 0;
        end else begin
            case (state_read)
                READ_IEDL: begin
                    m_rready_r <= 1;
                    if (fvalid_i & mem_ren_i) begin
                        state_read <= READ_ADDR;
                        m_araddr_r <= mem_addr_i;
                        m_arsize_q <= m_arsize_r;
                    end
                end 
                READ_ADDR: begin
                    m_rready_r <= 1;
                    if (ar_fire) begin
                        m_araddr_r <= 0;
                        m_arsize_q <= 0;
                        state_read <= READ_DATA;                        
                    end
                end 
                READ_DATA: begin
                    if (r_fire) begin
                        if(m_rlast_i) begin
                            state_read <= READ_IEDL;
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
    assign m_arlen_o = 0;
    assign m_arsize_o = m_arsize_q;
    assign m_arburst_o = 0;
    assign m_rready_o = m_rready_r;
    assign ar_fire = m_arvalid_o & m_arready_i;
    assign r_fire = m_rvalid_i & m_rready_o;
    assign load_data_o = load_data_r;
    // 写事务
    always @(posedge clk) begin
        if(!resetn) begin
            m_awaddr_r  <= 0;
            m_awsize_q  <= 0;
            m_bready_r  <= 0;
            aw_en       <= 0;
            w_en        <= 0;
            state_write <= WRITE_IDLE;
        end else begin
            case (state_write)
                WRITE_IDLE: begin
                    aw_en <= 0;
                    w_en  <= 0;
                    m_bready_r <= 1;
                    if(fvalid_i & mem_wen_i) begin
                        state_write <= WRITE_RUNNING;
                        m_awaddr_r  <= mem_addr_i;
                        m_awsize_q <= m_awsize_r;
                    end
                end 
                WRITE_RUNNING: begin
                    m_bready_r <= 1;
                    if(aw_fire) begin
                        m_awaddr_r  <= 0;
                        m_awsize_q <= 0;
                        aw_en <= 1;
                    end
                    if(w_fire) begin
                        w_en  <= 1;
                    end
                    if((aw_fire & w_fire) | (aw_en & w_fire) | (w_en & aw_fire)) begin
                        state_write <= WRITE_WAIT;
                    end
                end
                WRITE_WAIT: begin
                    if(b_fire) begin
                        m_bready_r  <= 0;
                        state_write <= WRITE_IDLE;
                    end 
                end
                default:;    
            endcase
        end
    end

    assign m_awvalid_o = (state_write == WRITE_RUNNING) && ~aw_en;
    assign m_awaddr_o  = m_awaddr_r;
    assign m_awid_o    = 0;
    assign m_awlen_o   = 0;
    assign m_awsize_o  = m_awsize_q;
    assign m_awburst_o = 0;
    assign m_wvalid_o  = (state_write == WRITE_RUNNING) && ~w_en;
    assign m_wlast_o   = (state_write == WRITE_RUNNING) && ~w_en;
    assign m_wdata_o   = m_wdata_r;
    assign m_wstrb_o   = m_wstrb_r;
    assign m_bready_o  = m_bready_r;    
    assign aw_fire     = m_awvalid_o & m_awready_i;
    assign w_fire      = m_wvalid_o & m_wready_i;
    assign b_fire      = m_bvalid_i & m_bready_o;
    // 内部
    assign mem_valid_o = (r_fire & (m_rresp_i == 0)) | (b_fire & (m_bresp_i == 0));
 endmodule
