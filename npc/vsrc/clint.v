module ysyx_25050136_CLINT
    #(
         ADDR_WIDTH = 32,
         DATA_WIDTH = 32
     )
     (
        // 通用数据
        input                         aclk        ,
        input                         aresetn     ,
        input                         s_awvalid_i ,
        output                        s_awready_o ,
        input      [ADDR_WIDTH-1:0]   s_awaddr_i  ,
        input      [3:0]              s_awid_i    , /* verilator lint_off PINMISSING */
        input      [7:0]              s_awlen_i   ,
        input      [2:0]              s_awsize_i  ,
        input      [1:0]              s_awburst_i ,
        input                         s_wvalid_i  ,
        output                        s_wready_o  ,
        input      [DATA_WIDTH-1:0]   s_wdata_i   ,
        input      [3:0]              s_wstrb_i   ,
        input                         s_wlast_i   ,
        output                        s_bvalid_o  ,
        input                         s_bready_i  ,
        output     [1:0]              s_bresp_o   ,
        output     [3:0]              s_bid_o     ,
        input                         s_arvalid_i ,
        output                        s_arready_o ,
        input      [ADDR_WIDTH-1:0]   s_araddr_i  ,
        input      [3:0]              s_arid_i    ,
        input      [7:0]              s_arlen_i   ,
        input      [2:0]              s_arsize_i  ,
        input      [1:0]              s_arburst_i ,
        output                        s_rvalid_o  ,
        input                         s_rready_i  ,
        output     [DATA_WIDTH-1:0]   s_rdata_o   ,
        output     [1:0]              s_rresp_o   ,
        output                        s_rlast_o   ,
        output     [3:0]              s_rid_o
     );

    reg [63:0] mtime;
    always @(posedge aclk) begin
        if (!aresetn) begin
            mtime <= 0;
        end else begin
            mtime <= mtime + 64'd1;
        end
    end

    // 读事务
    localparam READ_IDEL = 0;
    localparam READ_DATA = 1;
    reg [ADDR_WIDTH-1:0] s_araddr_r;
    reg [ADDR_WIDTH-1:0] s_araddr_align;
    reg [7:0] s_arlen_r;
    reg [2:0] s_arsize_r;
    reg [1:0] s_arburst_r;
    reg s_arready_r;
    reg [DATA_WIDTH-1:0] s_rdata_r;
    reg [3:0] s_rid_r;
    reg [7:0] rdata_count;
    reg state_read;
    wire [ADDR_WIDTH-1:0] align_mask;
    wire ar_fire, r_fire;
    always @(posedge aclk) begin
        if(!aresetn) begin
            s_arready_r <= 0;
            s_araddr_r <= 0;
            s_araddr_align <= 0;
            s_arlen_r <= 0;
            s_arsize_r <= 0;
            s_arburst_r <= 0;
            s_rid_r <= 0;
            rdata_count <= 0;
            state_read <= READ_IDEL;       
        end else begin
            case (state_read)
                READ_IDEL: begin
                    if(ar_fire) begin
                        s_arready_r <= 0;
                        s_araddr_align <= s_araddr_i & align_mask;
                        s_araddr_r <= s_araddr_i;
                        s_arlen_r <= s_arlen_i;
                        s_arsize_r <= s_arsize_i;
                        s_arburst_r <= s_arburst_i;                        
                        s_rid_r <= s_arid_i;
                        state_read <= READ_DATA;
                    end else begin
                        s_arready_r <= 1;
                    end
                end 
                READ_DATA: begin
                    s_arready_r <= 1;
                    if(r_fire) begin
                        if(rdata_count == s_arlen_r) begin
                            rdata_count <= 0;
                            state_read <= READ_IDEL;
                        end else begin
                            rdata_count <= rdata_count + 7'd1;
                            case (s_arburst_r)
                                2'b01: begin
                                    s_araddr_r <= s_araddr_align + (1 << s_arsize_r);        
                                    s_araddr_align <= s_araddr_align + (1 << s_arsize_r);                                            
                                end 
                                default: begin
                                    s_araddr_r <= s_araddr_align;
                                end 
                            endcase
                            state_read <= READ_DATA;
                        end
                    end
                end
                default:; 
            endcase
        end
    end

    always @(*) begin
        s_rdata_r = 0;
        if(s_rvalid_o && (s_arsize_r == 3'b010)) begin
            case (s_araddr_r)
                32'h20000000: begin
                    s_rdata_r = mtime[31:0];
                end 
                32'h20000004: begin
                    s_rdata_r = mtime[63:32];                    
                end 
                default: ;
            endcase
        end
    end

    assign s_arready_o = s_arready_r;
    assign s_rvalid_o = (state_read == READ_DATA);
    assign s_rlast_o  = (state_read == READ_DATA) & (rdata_count == s_arlen_r);
    assign s_rresp_o = 0;
    assign s_rid_o = s_rid_r;
    assign s_rdata_o = s_rdata_r;
    assign align_mask = ~((1 << s_arsize_i) - 1);
    assign ar_fire = s_arvalid_i & s_arready_o;
    assign r_fire = s_rvalid_o & s_rready_i;
    // 写事务
    assign s_awready_o = 1'b0;
    assign s_wready_o  = 1'b0;
    assign s_bvalid_o  = 1'b0;
    assign s_bresp_o   = 2'b00;
    assign s_bid_o     = 4'b0000;
endmodule //ysyx_25050136_UART
