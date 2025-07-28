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
    reg m_arvalid_r;
    reg m_rready_r;
    reg [DATA_WIDTH-1:0] load_data_r;
    wire ar_fire, r_fire;
    always @(posedge clk) begin
        if(resetn) begin
            m_arvalid_r <= 0;
        end else begin
            if(ar_fire) begin
                m_arvalid_r <= 0;                
            end else begin
                if(fvalid_i & mem_ren_i) begin
                    m_arvalid_r <= 1;
                end else begin
                    m_arvalid_r <= 0;
                end
            end
        end
    end

    always @(posedge clk) begin
        if(!resetn) begin
            m_rready_r <= 0;
        end else begin
            if(r_fire) begin
                m_rready_r <= 0;
            end else begin
                m_rready_r <= 1;
            end
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
    
    assign m_arvalid_o = (fvalid_i & mem_ren_i) | m_arvalid_r;
    assign m_rready_o = m_rready_r;
    assign m_araddr_o = m_arvalid_o ? mem_addr_i : 0;
    assign load_data_o = load_data_r;
    assign ar_fire = m_arvalid_o & m_arready_i;
    assign r_fire =m_rvalid_i & m_rready_o;

    // 写事务
    reg m_awvalid_r;
    reg m_wvalid_r;
    reg m_bready_r;
    wire aw_fire, w_fire, b_fire;

    always @(posedge clk) begin
        if(resetn) begin
            m_awvalid_r <= 0;
            m_wvalid_r <= 0;
        end else begin
            if(aw_fire) begin
                m_awvalid_r <= 0;                
            end else begin
                if(fvalid_i & mem_wen_i) begin
                    m_awvalid_r <= 1;
                end else begin
                    m_awvalid_r <= 0;
                end
            end
            if(w_fire) begin
                m_wvalid_r <= 0;                
            end else begin
                if(fvalid_i & mem_wen_i) begin
                    m_wvalid_r <= 1;
                end else begin
                    m_wvalid_r <= 0;
                end
            end
        end
    end

    always @(posedge clk) begin
        if(resetn) begin
            m_bready_r <= 0;
        end else begin
            if(b_fire) begin
                m_bready_r <= 0;
            end else begin
                m_bready_r <= 1;
            end
        end
    end

    assign m_awaddr_o = m_awvalid_o ? mem_addr_i : 0;
    assign m_awvalid_o = (fvalid_i & mem_wen_i) | m_awvalid_r;
    assign m_wvalid_o = (fvalid_i & mem_wen_i) | m_wvalid_r;
    assign m_wdata_o = m_awvalid_o ? store_data_i : 0;
    assign m_wstrb_o = m_awvalid_o ? mem_mask_i : 0;
    assign m_bready_o = m_bready_r;
    assign aw_fire = m_awvalid_o & m_awready_i;
    assign w_fire = m_wvalid_o & m_wready_i;
    assign b_fire = m_bvalid_i & m_bready_o;
    // 内部
    assign mem_valid_o = (r_fire & (m_rresp_i == 0)) | (b_fire & (m_bresp_i == 0));
 endmodule
