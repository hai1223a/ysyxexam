module ysyx_25050136_LSU
    #(
         DATA_WIDTH = 32
     )
     (
         input                                     clk,
         input                                  resetn,
         // 写地址
         output                            m_awvalid_o,
         input                             m_awready_i,
         output    [DATA_WIDTH-1:0]         m_awaddr_o,
         // 写数据             
         output                             m_wvalid_o,
         input                              m_wready_i,
         output    [DATA_WIDTH-1:0]          m_wdata_o,
         output    [3:0]                     m_wstrb_o,
         // 写响应               
         input                               m_bvalid_i,
         output                              m_bready_o,
         input     [1:0]                      m_bresp_i,
         // 读地址               
         output                             m_arvalid_o,
         input                              m_arready_i,
         output    [DATA_WIDTH-1:0]          m_araddr_o,
         // 读数据                
         input                               m_rvalid_i,
         output                              m_rready_o,
         input     [DATA_WIDTH-1:0]           m_rdata_i,
         input     [1:0]                      m_rresp_i, 
         // 内部
         input                                 fvalid_i,
         input                                mem_ren_i,
         input                                mem_wen_i,                    
         input      [3:0]                    mem_mask_i,
         input                             mem_signed_i,
         input      [DATA_WIDTH-1:0]         mem_addr_i,
         input      [DATA_WIDTH-1:0]       store_data_i,
         output     [DATA_WIDTH-1:0]        load_data_o,
         output                             mem_valid_o
     );
    // 读事务
    localparam READ_IDEL = 2'd0;
    localparam READ_ADDR = 2'd1;
    localparam READ_DATA = 2'd2;
    reg m_arvalid_r;
    reg m_rready_r;
    reg [DATA_WIDTH-1:0] load_data_r;
    reg [1:0] state_read;
    wire ar_fire, r_fire;

    always @(posedge clk) begin
        if (!resetn) begin
            state_read   <= READ_IDEL;
            m_arvalid_r  <= 0;
            m_rready_r   <= 0;
        end else begin
            case (state_read)
                READ_IDEL: begin
                    m_rready_r <= 1;
                    if (fvalid_i & mem_ren_i) begin
                        state_read <= READ_ADDR;
                    end
                end 
                READ_ADDR: begin
                    m_rready_r <= 1;
                    if (ar_fire) begin
                        state_read <= READ_DATA;                        
                    end
                end 
                READ_DATA: begin
                    if (r_fire) begin
                        m_rready_r <= 0;
                        state_read <= READ_IDEL;
                    end
                end 
                default: ;
            endcase
        end
    end

    always @(*) begin
        case (mem_mask_i)
            4'hF:begin
                load_data_r = m_rdata_i;
            end
            4'h3:begin
                if (mem_signed_i)
                    load_data_r = {{16{m_rdata_i[15]}},m_rdata_i[15:0]};
                else
                    load_data_r = {16'h0,m_rdata_i[15:0]};
            end
            4'h1:begin
                if (mem_signed_i)
                    load_data_r = {{24{m_rdata_i[7]}},m_rdata_i[7:0]};
                else
                    load_data_r = {24'h0,m_rdata_i[7:0]};
            end
            default:begin
                load_data_r = 0;
            end
        endcase
    end

    assign m_arvalid_o = (state_read == READ_ADDR);
    assign m_araddr_o  = mem_addr_i;
    assign m_rready_o = m_rready_r;
    assign ar_fire = m_arvalid_o & m_arready_i;
    assign r_fire = m_rvalid_i & m_rready_o;
    assign load_data_o = load_data_r;
    // 写事务
    localparam WRITE_IDEL    = 0;
    localparam WRITE_RUNNING = 1;
    reg m_bready_r;
    reg state_write;
     wire b_fire;
    always @(posedge clk) begin
        if(!resetn) begin
            state_write <= WRITE_IDEL;
        end else begin
            case (state_write)
                WRITE_IDEL: begin
                    m_bready_r <= 1;
                    if(fvalid_i & mem_wen_i) begin
                        state_write <= WRITE_RUNNING;
                    end
                end 
                WRITE_RUNNING: begin
                    if(b_fire) begin
                        m_bready_r  <= 0;
                        state_write <= WRITE_IDEL;
                    end 
                end
            endcase
        end
    end

    assign m_awvalid_o = (state_write == WRITE_RUNNING);
    assign m_awaddr_o  = mem_addr_i;
    assign m_wvalid_o  = (state_write == WRITE_RUNNING);
    assign m_wdata_o   = store_data_i;
    assign m_wstrb_o   = mem_mask_i;
    assign m_bready_o  = m_bready_r;    
    assign b_fire      = m_bvalid_i & m_bready_o;
    // 内部
    assign mem_valid_o = (r_fire & (m_rresp_i == 0)) | (b_fire & (m_bresp_i == 0));
 endmodule
