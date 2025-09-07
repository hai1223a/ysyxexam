module ysyx_25050136_ICACHE
    #(
        parameter OFFSET_WIDTH = 2,
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
   // cache内部信号定义
   parameter LINE_WIDTH = 8 * 2 ** OFFSET_WIDTH;
   parameter TAG_WIDTH = 32 - OFFSET_WIDTH - INDEX_WIDTH;
   parameter INDEX_SIZE = 2 ** INDEX_WIDTH;

   localparam IDLE      = 2'd0;
   localparam INCACHE   = 2'd1;
   localparam CACHEMISS = 2'd2;
   localparam MISSIN    = 2'd3;

   reg [LINE_WIDTH-1:0] cache_data [0:INDEX_SIZE-1];
   reg [TAG_WIDTH-1 :0] cache_tag [0:INDEX_SIZE-1];
   reg [INDEX_SIZE-1:0] cache_valid ;

   reg [1:0] state;
   reg [31:0] req_addr_r;
   reg [31:0] req_rdata_r;
   reg req_ready_r;

   wire [INDEX_WIDTH-1:0] addr_index = req_addr_r[OFFSET_WIDTH+INDEX_WIDTH-1:OFFSET_WIDTH];
   wire [TAG_WIDTH-1:0] addr_tag = req_addr_r[31:OFFSET_WIDTH+INDEX_WIDTH];

   // axi信号定义
   localparam READ_IEDL = 2'd0;
   localparam READ_ADDR = 2'd1;
   localparam READ_DATA = 2'd2;


   reg [1:0] state_read;
   reg m_rready_r;
   reg [31:0] m_araddr_r;
   wire ar_fire, r_fire;
   
   always @(posedge clk) begin
      if (reset) begin
         state <= IDLE;
         req_addr_r <= 0;
         cache_valid <= 0;
      end else begin
         case (state)
            IDLE: begin
               if(req_valid_i) begin
                  state <= INCACHE;
                  req_addr_r <= req_addr_i;
               end         
            end 
            INCACHE: begin
               if(cache_valid[addr_index] && (cache_tag[addr_index] == addr_tag)) begin
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

   always @(*) begin
      req_rdata_r = 0;
      req_ready_r = 0;
      case (state)
         INCACHE: begin
            if(cache_valid[addr_index] && (cache_tag[addr_index] == addr_tag)) begin
               req_rdata_r = cache_data[addr_index];
               req_ready_r = 1;               
            end
         end 
         MISSIN: begin
            req_rdata_r = cache_data[addr_index];
            req_ready_r = 1;               
         end
         default: ;
      endcase
   end

   assign req_rdata_o = req_rdata_r;
   assign req_ready_o = req_ready_r;

   always @(posedge clk) begin
      if (reset) begin
         state_read   <= READ_IEDL;
         m_rready_r   <= 0;
         m_araddr_r   <= 0;
      end else begin
         case(state_read)
            READ_IEDL: begin
               m_rready_r <= 1;
               if ((state == INCACHE) && !cache_valid[addr_index] || (cache_tag[addr_index] != addr_tag)) begin
                  state_read <= READ_ADDR;
                  m_araddr_r <= req_addr_r;
               end
            end 
            READ_ADDR: begin
               m_rready_r <= 1;
               if (ar_fire) begin
                  m_araddr_r <= 0;
                  state_read <= READ_DATA;                        
               end
            end 
            READ_DATA: begin
               if (r_fire) begin
                  if(m_rlast_i) begin
                     state_read <= READ_IEDL;
                     cache_data[addr_index] <= m_rdata_i;
                     cache_tag[addr_index] <= addr_tag;
                     cache_valid[addr_index] <= 1'b1;
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
   assign m_arsize_o = 3'b010;
   assign m_arburst_o = 0;
   assign m_rready_o = m_rready_r;
   assign ar_fire = m_arvalid_o & m_arready_i;
   assign r_fire = m_rvalid_i & m_rready_o;
endmodule //ysyx_25050136_ICACHE
