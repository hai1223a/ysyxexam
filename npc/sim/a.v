`define ysyx_25050136_CSRU_OP_NUM 6
`define ysyx_25050136_CSRU_CSRRW  0
`define ysyx_25050136_CSRU_CSRRS  1
`define ysyx_25050136_CSRU_CSRRC  2
`define ysyx_25050136_CSRU_MRET   3
`define ysyx_25050136_CSRU_ECALL  4
`define ysyx_25050136_CSRU_EBREAK 5

// CSR读写单元
module ysyx_25050136_CSRU
     (
         input                                              clk,
         input                                            reset,
         input   [`ysyx_25050136_CSRU_OP_NUM-1:0]   operation_i,
         input   [31:0]                                    pc_i,
         input   [11:0]                              csr_addr_i,
         input   [31:0]                             csr_wdata_i,
         input                                       csru_ren_i,
         input                                       csru_wen_i,
         output  [31:0]                            csru_rdata_o
     );
    reg [31:0] csr_wdata;
    reg [11:0] csr_waddr, csr_raddr;
    reg csr_wen, csr_ren;
    reg cnt_delay;
    always@(posedge clk) begin
        if(reset) begin
            cnt_delay <= 0;
        end else begin
            cnt_delay <= operation_i[`ysyx_25050136_CSRU_ECALL]; 
        end
    end
    always @(*) begin
        csr_wdata = csr_wdata_i;
        csr_waddr = csr_addr_i;
        csr_wen = csru_wen_i;
        csr_raddr = csr_addr_i;
        csr_ren = csru_ren_i;
        case (1'b1)
            operation_i[`ysyx_25050136_CSRU_CSRRS]:
                csr_wdata = csru_rdata_o | csr_wdata_i;
            operation_i[`ysyx_25050136_CSRU_CSRRC]:
                csr_wdata = csru_rdata_o & (~csr_wdata_i);
            operation_i[`ysyx_25050136_CSRU_ECALL]: begin
                if(cnt_delay) begin
                    csr_wdata = 32'd11;
                    csr_waddr = 12'h342;
                    csr_wen = 1;
                    csr_raddr = 12'h305;
                    csr_ren = 1;
                end else begin
                    csr_wdata = pc_i;
                    csr_waddr = 12'h341;
                    csr_wen = 1;
                    csr_ren = 0;
                end
            end
            operation_i[`ysyx_25050136_CSRU_MRET]: begin
                csr_raddr = 12'h341;
                csr_wen = 0;
                csr_ren = 1;
            end
            default:;
        endcase
    end
    // output declaration of module ysyx_25050136_CSR_File
    ysyx_25050136_CSR_File u_ysyx_25050136_CSR_File(
                               .clk          	(clk           ),
                               .reset        	(reset         ),
                               .csr_waddr_i 	(csr_waddr     ),
                               .csr_wen_i   	(csr_wen       ),
                               .csr_wdata_i 	(csr_wdata     ),
                               .csr_raddr_i  	(csr_raddr     ),
                               .csr_ren_i    	(csr_ren       ),
                               .csr_rdata_o  	(csru_rdata_o  )
                           );

endmodule

// CSR文件
module ysyx_25050136_CSR_File
    #(
        parameter DATA_WIDTH = 32
     )
     (
         input                                                 clk,
         input                                               reset,
         input      [11:0]                             csr_waddr_i,
         input                                           csr_wen_i,
         input      [DATA_WIDTH-1:0]                   csr_wdata_i,
         input      [11:0]                             csr_raddr_i,
         input                                           csr_ren_i,
         output reg [DATA_WIDTH-1:0]                   csr_rdata_o
     );

    // 读写CSR
    localparam MEPC      = 12'h341;
    localparam MCAUSE    = 12'h342;
    localparam MTVEC     = 12'h305;
    localparam MSTATUS   = 12'h300;
    // 只读CSR
    localparam MVENDORID = 12'hf11;
    localparam MARCHID   = 12'hf12;
    reg [DATA_WIDTH-1:0] mepc, mcause, mtvec, mstatus;
    // 写寄存器
    always @(posedge clk) begin
        if(reset) begin
            mepc      <= 0;
            mcause    <= 0;
            mtvec     <= 0;
            mstatus   <= 0;
        end
        else begin
            if(csr_wen_i) begin
                case (csr_waddr_i)
                    MEPC   :
                        mepc    <= csr_wdata_i;
                    MCAUSE :
                        mcause  <= csr_wdata_i;
                    MTVEC  :
                        mtvec   <= csr_wdata_i;
                    MSTATUS:
                        mstatus <= csr_wdata_i;
                    default:;
                endcase
            end
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
            MVENDORID:
                csr_rdata_o = 32'h79737978;
            MARCHID:
                csr_rdata_o = 32'd25050136;
            default:;
        endcase
    end
endmodule
