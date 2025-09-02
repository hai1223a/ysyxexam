module ysyx_25050136_IF
    #(
         DATA_WIDTH = 32
     )
     (
         input                      clk             ,
         input                      resetn          ,
         // 读地址
         output                     m_arvalid_o     ,
         input                      m_arready_i     ,
         output   [DATA_WIDTH-1:0]  m_araddr_o      ,
         output   [3:0]             m_arid_o        ,
         output   [7:0]             m_arlen_o       ,
         output   [2:0]             m_arsize_o      ,
         output   [1:0]             m_arburst_o     ,
         // 读数据
         input                      m_rvalid_i      ,
         output                     m_rready_o      ,
         input    [31:0]            m_rdata_i       ,
         input    [1:0]             m_rresp_i       ,
         input                      m_rlast_i       ,
         input    [3:0]             m_rid_i         ,
         // 内部 
         input                      dynamic_valid_i ,
         input    [DATA_WIDTH-1:0]  dynamic_npc_i   ,
         output   [DATA_WIDTH-1:0]  static_npc_o    ,
         output   [31:0]            inst_o          ,
         input                      bready_i        ,   // 该信号有EX模块告知可以进行下一条指令了
         output                     bvalid_o            // 该信号告诉后面的模块新指令来了
     );
     
    reg [DATA_WIDTH-1:0] pc;
    reg m_rready_r;
    reg [31:0] inst_r;
    wire ar_fire, r_fire;
    localparam READ_IEDL = 2'd0;
    localparam READ_ADDR = 2'd1;
    localparam READ_DATA = 2'd2;
    localparam RESET_PC  = 32'h30000000;

    reg [1:0] state_read;
    always @(posedge clk) begin
        if (!resetn) begin
            state_read   <= READ_IEDL;
            pc           <= 0;
            m_rready_r   <= 0;
            inst_r       <= 0;
        end else begin
            case(state_read)
                READ_IEDL: begin
                    m_rready_r <= 1;
                    if (bready_i) begin
                        state_read <= READ_ADDR;
                        pc <= dynamic_valid_i ? dynamic_npc_i : static_npc_o;
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
                        if(m_rlast_i) begin
                            state_read <= READ_IEDL;
                        end
                        inst_r <= m_rdata_i; 
                        m_rready_r <= 0;
                    end else begin
                        m_rready_r <= 1;                        
                    end
                end 
                default: ;
            endcase
        end
    end
    assign static_npc_o = (pc == 0) ? RESET_PC : (pc + 32'h4);
    assign bvalid_o = (state_read == READ_DATA) && r_fire & m_rlast_i & (m_rresp_i == 2'd0);
    assign inst_o = (state_read == READ_IEDL) ? inst_r : m_rdata_i;
    assign m_arvalid_o = (state_read == READ_ADDR);
    assign m_araddr_o  = pc;
    assign m_arid_o = 0;
    assign m_arlen_o = 0;
    assign m_arsize_o = 3'b010;
    assign m_arburst_o = 0;
    assign m_rready_o = m_rready_r;
    assign ar_fire = m_arvalid_o & m_arready_i;
    assign r_fire = m_rvalid_i & m_rready_o;

endmodule
