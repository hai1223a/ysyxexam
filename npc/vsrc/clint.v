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
        input      [3:0]              s_awid_i    , 
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
        end
    end

    // 读事务
    localparam READ_IDLE = 0;
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
            state_read <= READ_IDLE;       
        end else begin
            case (state_read)
                READ_IDLE: begin
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
                            state_read <= READ_IDLE;
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
                32'h2000000: begin
                    s_rdata_r = mtime[31:0];
                end 
                32'h2000004: begin
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

    // ==================== 写事务状态机 ====================
    // 写事务状态定义
    localparam WRITE_IDLE = 2'd0;
    localparam WRITE_ADDR = 2'd1;
    localparam WRITE_DATA = 2'd2;
    localparam WRITE_RESP = 2'd3;

    // 写事务寄存器
    reg [1:0] state_write;
    reg [ADDR_WIDTH-1:0] s_awaddr_r;
    reg [ADDR_WIDTH-1:0] s_awaddr_align;
    reg [7:0] s_awlen_r;
    reg [2:0] s_awsize_r;
    reg [1:0] s_awburst_r;
    reg [3:0] s_awid_r;
    reg s_awready_r;
    reg s_wready_r;
    reg s_bvalid_r;
    reg [7:0] wdata_count;
    reg [DATA_WIDTH-1:0] write_data;

    // 写事务控制信号
    wire aw_fire = s_awvalid_i & s_awready_o;
    wire w_fire = s_wvalid_i & s_wready_o;
    wire b_fire = s_bvalid_o & s_bready_i;

    // 地址对齐掩码
    wire [ADDR_WIDTH-1:0] aw_align_mask = ~((1 << s_awsize_i) - 1);

    // 写事务状态机
    always @(posedge aclk) begin
        if (!aresetn) begin
            state_write <= WRITE_IDLE;
            s_awready_r <= 1'b0;
            s_wready_r <= 1'b0;
            s_bvalid_r <= 1'b0;
            s_awaddr_r <= 0;
            s_awaddr_align <= 0;
            s_awlen_r <= 0;
            s_awsize_r <= 0;
            s_awburst_r <= 0;
            s_awid_r <= 0;
            wdata_count <= 0;
            write_data <= 0;
        end else begin
            case (state_write)
                WRITE_IDLE: begin
                    // 等待写地址有效
                    if (s_awvalid_i) begin
                        s_awready_r <= 1'b1;
                        state_write <= WRITE_ADDR;
                    end
                end

                WRITE_ADDR: begin
                    if (aw_fire) begin
                        // 锁存地址和相关信息
                        s_awaddr_r <= s_awaddr_i;
                        s_awaddr_align <= s_awaddr_i & aw_align_mask;
                        s_awlen_r <= s_awlen_i;
                        s_awsize_r <= s_awsize_i;
                        s_awburst_r <= s_awburst_i;
                        s_awid_r <= s_awid_i;
                        s_awready_r <= 1'b0;
                        s_wready_r <= 1'b1;  // 准备接收写数据
                        state_write <= WRITE_DATA;
                    end
                end

                WRITE_DATA: begin
                    if (w_fire) begin
                        // 处理写数据
                        if (s_wlast_i || (wdata_count == s_awlen_r)) begin
                            // 最后一个数据或达到指定长度
                            s_wready_r <= 1'b0;
                            s_bvalid_r <= 1'b1;  // 准备发送响应
                            state_write <= WRITE_RESP;
                            wdata_count <= 0;
                        end else begin
                            // 继续接收数据
                            wdata_count <= wdata_count + 8'd1;
                            
                            // 根据突发类型更新地址
                            case (s_awburst_r)
                                2'b01: begin // INCR突发
                                    s_awaddr_r <= s_awaddr_align + (1 << s_awsize_r);
                                    s_awaddr_align <= s_awaddr_align + (1 << s_awsize_r);
                                end
                                // 其他突发类型可以在这里添加
                                default: begin // FIXED突发
                                    s_awaddr_r <= s_awaddr_align;
                                end
                            endcase
                        end

                        // 根据地址写入数据到相应寄存器
                        case (s_awaddr_r)
                            32'h2000000: begin
                                if (s_wstrb_i[0]) mtime[7:0]   <= s_wdata_i[7:0];
                                if (s_wstrb_i[1]) mtime[15:8]  <= s_wdata_i[15:8];
                                if (s_wstrb_i[2]) mtime[23:16] <= s_wdata_i[23:16];
                                if (s_wstrb_i[3]) mtime[31:24] <= s_wdata_i[31:24];
                            end
                            32'h2000004: begin
                                if (s_wstrb_i[0]) mtime[39:32]  <= s_wdata_i[7:0];
                                if (s_wstrb_i[1]) mtime[47:40]  <= s_wdata_i[15:8];
                                if (s_wstrb_i[2]) mtime[55:48]  <= s_wdata_i[23:16];
                                if (s_wstrb_i[3]) mtime[63:56]  <= s_wdata_i[31:24];
                            end
                            default: begin
                                // 其他地址的写操作（如果有需要）
                            end
                        endcase
                    end
                end

                WRITE_RESP: begin
                    if (b_fire) begin
                        // 响应已被接受
                        s_bvalid_r <= 1'b0;
                        state_write <= WRITE_IDLE;
                        s_awready_r <= 1'b1;  // 准备接收新的写事务
                    end
                end

                default: begin
                    state_write <= WRITE_IDLE;
                end
            endcase
        end
    end

    // ==================== 写事务输出赋值 ====================
    assign s_awready_o = s_awready_r;
    assign s_wready_o = s_wready_r;
    assign s_bvalid_o = s_bvalid_r;
    assign s_bresp_o = 2'b00;  // OKAY响应
    assign s_bid_o = s_awid_r;
endmodule //ysyx_25050136_UART
