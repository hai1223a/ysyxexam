import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input int wmask);
module ysyx_25050136_SRAM
    #(
         ADDR_WIDTH = 32,
         DATA_WIDTH = 32
     )
     (
         // 通用数据
         input                                aclk,
         input                             aresetn,
         // 写地址
         input                         s_awvalid_i,
         output                        s_awready_o,
         input      [ADDR_WIDTH-1:0]    s_awaddr_i,
         // 写数据
         input                          s_wvalid_i,
         output                         s_wready_o,
         input      [DATA_WIDTH-1:0]     s_wdata_i,
         input      [3:0]                s_wstrb_i,
         // 写响应
         output                         s_bvalid_o,
         input                          s_bready_i,
         output     [1:0]                s_bresp_o,
         // 读地址
         input                         s_arvalid_i,
         output                        s_arready_o,
         input      [ADDR_WIDTH-1:0]    s_araddr_i,
         // 读数据 
         output                        s_rvalid_o,
         input                         s_rready_i,
         output     [DATA_WIDTH-1:0]    s_rdata_o,
         output     [1:0]               s_rresp_o 
     );
    localparam RAM_DELAY = 0;
    // 读事务
localparam R_IDLE = 2'd0;
localparam R_WAIT = 2'd1;
localparam R_RESP = 2'd2;

reg [1:0] r_state;
reg [ADDR_WIDTH-1:0] s_araddr_r;
reg [DATA_WIDTH-1:0] s_rdata_r;
reg [4:0] count_delay;

always @(posedge aclk) begin
    if (!aresetn) begin
        r_state     <= R_IDLE;
        s_araddr_r  <= 0;
        s_rdata_r   <= 0;
        count_delay <= 0;
    end else begin
        case (r_state)
            R_IDLE: begin
                if (s_arvalid_i) begin
                    s_araddr_r  <= s_araddr_i;
                    count_delay <= 0;
                    r_state     <= R_WAIT;
                end
            end
            R_WAIT: begin
                if (count_delay == RAM_DELAY) begin
                    s_rdata_r <= pmem_read(s_araddr_r);
                    r_state   <= R_RESP;
                end else begin
                    count_delay <= count_delay + 1;
                end
            end
            R_RESP: begin
                if (s_rready_i) begin
                    r_state <= R_IDLE;
                end
            end
            default: begin
                r_state <= R_IDLE;
            end
        endcase
    end
end

assign s_arready_o = (r_state == R_IDLE);
assign s_rvalid_o  = (r_state == R_RESP);
assign s_rdata_o   = s_rdata_r;
assign s_rresp_o   = 2'b00; // OKAY
    // 写事务
    localparam IEDL = 2'd0;
    localparam WAIT_DATA = 2'd1;
    localparam WAIT_ADDR = 2'd2;
    localparam GOOD = 2'd3;
    reg s_awready_r;
    reg s_wready_r;
    reg s_bvalid_r;
    reg [ADDR_WIDTH-1:0] s_awaddr_r;
    reg [DATA_WIDTH-1:0] s_wdata_r;
    reg [3:0] s_wstrb_r;
    reg [1:0] wstatu;
    wire [DATA_WIDTH-1:0] wstrb_full;
    wire aw_fire, w_fire, b_fire;
    always @(posedge aclk) begin
        if(!aresetn) begin
            wstatu <= 0;
        end else begin
            case (wstatu)
                IEDL: begin
                    if(w_fire)
                        if(aw_fire)
                            wstatu <= GOOD;
                        else
                            wstatu <= WAIT_ADDR;
                    else
                        if(aw_fire)
                            wstatu <= WAIT_DATA;    
                end
                WAIT_DATA: begin    
                    if(aw_fire)
                        wstatu <= GOOD;
                end
                WAIT_ADDR: begin
                    if(w_fire)
                        wstatu <= GOOD;
                end
                GOOD:   wstatu <= IEDL;
            endcase
        end
    end

    always @(posedge aclk) begin
        if(!aresetn) begin
            s_awready_r <= 0;
            s_wready_r <= 0;
            s_awaddr_r <= 0;
            s_wdata_r <= 0;
            s_wstrb_r <= 0;
        end else begin
            if(aw_fire) begin
                s_awaddr_r <= s_awaddr_i;
                if((wstatu == WAIT_DATA) & ~w_fire) begin
                    s_awready_r <= 0;
                end else begin
                    s_awready_r <= 1;                    
                end
            end else begin
                s_awready_r <= 1;
            end
            if(w_fire) begin
                s_wdata_r <= s_wdata_i;
                s_wstrb_r <= s_wstrb_i;
                if((wstatu == WAIT_ADDR) & ~w_fire) begin
                    s_wready_r <= 0; 
                end else begin
                    s_wready_r <= 0; 
                end
            end else begin
                s_wready_r <= 1;
            end
        end
    end

    always @(posedge aclk) begin
        if(!aresetn) begin
            s_bvalid_r <= 0;
        end else begin
            if(wstatu == GOOD) begin
                s_bvalid_r <= 1;
            end
            if(b_fire) begin
                s_bvalid_r <= 0;
            end
        end
    end

    always @(*) begin
        if(wstatu == GOOD) begin
            pmem_write(s_awaddr_r, s_wdata_r, wstrb_full);
        end
    end
    assign wstrb_full = {{8{s_wstrb_r[3]}}, {8{s_wstrb_r[2]}}, {8{s_wstrb_r[1]}}, {8{s_wstrb_r[0]}}};
    assign s_awready_o = s_awready_r;
    assign s_wready_o = s_wready_r;
    assign s_bvalid_o = s_bvalid_r | (wstatu == GOOD);
    assign s_bresp_o = 0;
    assign aw_fire = s_awvalid_i & s_awready_o;
    assign w_fire = s_wvalid_i & s_wready_o;
    assign b_fire = s_bvalid_o & s_bready_i;
endmodule
