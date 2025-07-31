// CSR文件
module ysyx_25050136_CSR_File
    #(
         DATA_WIDTH = 32
     )
     (
         input                                                 clk,
         input                                               reset,
         input      [11:0]                            csr_waddr1_i,
         input                                          csr_wen1_i,
         input      [DATA_WIDTH-1:0]                  csr_wdata1_i,
         input      [11:0]                            csr_waddr2_i,
         input                                          csr_wen2_i,
         input      [DATA_WIDTH-1:0]                  csr_wdata2_i,
         input      [11:0]                             csr_raddr_i,
         input                                           csr_ren_i,
         output reg [DATA_WIDTH-1:0]                   csr_rdata_o
     );
    localparam MEPC    = 12'h341;
    localparam MCAUSE  = 12'h342;
    localparam MTVEC   = 12'h305;
    localparam MSTATUS = 12'h300;
    reg [DATA_WIDTH-1:0] mepc, mcause, mtvec, mstatus;
    // 两个写端口的选择，以避免multi drive
    reg [1:0] mepc_hit, mcause_hit, mtvec_hit, mstatus_hit;
    wire [DATA_WIDTH-1:0] mepc_din, mcause_din, mtvec_din, mstatus_din;
    always @(*) begin
        mepc_hit = 0;
        mcause_hit = 0;
        mtvec_hit = 0;
        mstatus_hit = 0;
        case (csr_waddr1_i)
            MEPC:
                mepc_hit[0] = csr_wen1_i;
            MCAUSE:
                mcause_hit[0] = csr_wen1_i;
            MTVEC:
                mtvec_hit[0] = csr_wen1_i;
            MSTATUS:
                mstatus_hit[0] = csr_wen1_i;
            default:
                ;
        endcase
        case (csr_waddr2_i)
            MEPC:
                mepc_hit[1] = csr_wen2_i;
            MCAUSE:
                mcause_hit[1] = csr_wen2_i;
            MTVEC:
                mtvec_hit[1] = csr_wen2_i;
            MSTATUS:
                mstatus_hit[1] = csr_wen2_i;
            default:
                ;
        endcase
    end
    assign mepc_din = mepc_hit[0] ? csr_wdata1_i : (mepc_hit[1] ? csr_wdata2_i : 0);
    assign mcause_din = mcause_hit[0] ? csr_wdata1_i : (mcause_hit[1] ? csr_wdata2_i : 0);
    assign mtvec_din = mtvec_hit[0] ? csr_wdata1_i : (mtvec_hit[1] ? csr_wdata2_i : 0);
    assign mstatus_din = mstatus_hit[0] ? csr_wdata1_i : (mstatus_hit[1] ? csr_wdata2_i : 0);
    // 写寄存器
    always @(posedge clk) begin
        if(reset) begin
            mepc    <= 0;
            mcause  <= 0;
            mtvec   <= 0;
            mstatus <= 0;
        end
        else begin
            if(|mepc_hit)
                mepc <= mepc_din;
            if(|mcause_hit)
                mcause <= mcause_din;
            if(|mtvec_hit)
                mtvec <= mtvec_din;
            if(|mstatus_hit)
                mstatus <= mstatus_din;
        end
    end
    // 读寄存器
    always @(*) begin
        csr_rdata_o = 0;
        if(csr_ren_i)
        case (csr_raddr_i)
            MEPC   :
                csr_rdata_o = mepc;
            MCAUSE :
                csr_rdata_o = mcause;
            MTVEC  :
                csr_rdata_o = mtvec;
            MSTATUS:
                csr_rdata_o = mstatus;
            default:;
        endcase
    end
endmodule
