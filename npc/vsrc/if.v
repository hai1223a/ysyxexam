module ysyx_25050136_IF
    #(
         DATA_WIDTH = 32
     )
     (
         input                                    clk,
         input                                 resetn,
         // 读地址
         output                           m_arvalid_o,
         input                            m_arready_i,
         output     [DATA_WIDTH-1:0]       m_araddr_o,
         // 读数据
         input                             m_rvalid_i,
         output                            m_rready_o,
         input      [31:0]                  m_rdata_i,
         input      [1:0]                   m_rresp_i,
         // 内部
         input                        dynamic_valid_i,
         input      [DATA_WIDTH-1:0]    dynamic_npc_i,
         output     [DATA_WIDTH-1:0]     static_npc_o,
         output     [31:0]                     inst_o,
         input                               bready_i,  // 该信号有EX模块告知可以进行下一条指令了
         output                              bvalid_o   // 该信号告诉后面的模块新指令来了
     );
     
    reg [DATA_WIDTH-1:0] pc;
    reg m_arvalid_r;
    reg m_rready_r;
    reg [31:0] inst_r;
    wire ar_fire, r_fire;
    always @(posedge clk) begin
        if(!resetn) begin
            m_arvalid_r <= 0;
            pc <= 0;
        end
        else begin
            if(bready_i) begin
                m_arvalid_r <= 1;
                pc <= dynamic_valid_i ? dynamic_npc_i : static_npc_o;
            end else if(ar_fire) begin
                m_arvalid_r <= 0;
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

    always @(posedge clk) begin
        if(!resetn) begin
            inst_r <= 0;
        end else begin
            if(r_fire) begin
                inst_r <= m_rdata_i;
            end
        end
    end

    assign static_npc_o = (pc == 0) ? 32'h80000000 : (pc + 32'h4);
    
    assign m_arvalid_o = m_arvalid_r;
    assign m_araddr_o = pc;
    assign m_rready_o = m_rready_r;
    assign bvalid_o = r_fire & (m_rresp_i == 2'd0);
    assign inst_o = (m_rdata_i == 0) ? inst_r : m_rdata_i;
    assign ar_fire = m_arvalid_o & m_arready_i;
    assign r_fire = m_rvalid_i & m_rready_o;

endmodule
