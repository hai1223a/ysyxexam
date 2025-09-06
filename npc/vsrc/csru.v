// CSR读写单元
module ysyx_25050136_CSRU
    #(
        parameter DATA_WIDTH = 32
     )
     (
         input                                              clk,
         input                                            reset,
         input   [DATA_WIDTH-1:0]                          pc_i,
         input                                             en_i,
         input   [`ysyx_25050136_CSRU_OP_NUM-1:0]   operation_i,
         input   [DATA_WIDTH-1:0]                   csru_opd1_i,
         input   [11:0]                             csru_opd2_i,
         input                                       csru_ren_i,
         input                                       csru_wen_i,
         output  [DATA_WIDTH-1:0]                  csru_rdata_o
     );
    reg [DATA_WIDTH-1:0] csr_wdata1, csr_wdata2;
    reg [11:0] csr_waddr1, csr_waddr2, csr_raddr;
    reg csr_wen1, csr_wen2, csr_ren;
    always @(*) begin
        csr_wdata1 = 0;
        csr_waddr1 = csru_opd2_i;
        csr_wen1 = csru_wen_i;
        csr_wdata2 = 0;
        csr_waddr2 = 0;
        csr_wen2 = 0;
        csr_raddr = csru_opd2_i;
        csr_ren = csru_ren_i;
        case (1'b1)
            operation_i[`ysyx_25050136_CSRU_CSRRW]:
                csr_wdata1 = csru_opd1_i;
            operation_i[`ysyx_25050136_CSRU_CSRRS]:
                csr_wdata1 = csru_rdata_o | csru_opd1_i;
            operation_i[`ysyx_25050136_CSRU_CSRRC]:
                csr_wdata1 = csru_rdata_o & (~csru_opd1_i);
            operation_i[`ysyx_25050136_CSRU_ECALL]: begin
                csr_wdata1 = pc_i;
                csr_waddr1 = 12'h341;
                csr_wen1 = 1;
                csr_wdata2 = 32'd11;
                csr_waddr2 = 12'h342;
                csr_wen2 = 1;
                csr_raddr = 12'h305;
                csr_ren = 1;
            end
            operation_i[`ysyx_25050136_CSRU_MRET]: begin
                csr_wen1 = 0;
                csr_raddr = 12'h341;
                csr_ren = 1;
            end
            default:;
        endcase
    end
    // output declaration of module ysyx_25050136_CSR_File
    ysyx_25050136_CSR_File u_ysyx_25050136_CSR_File(
                               .clk          	(clk           ),
                               .reset        	(reset         ),
                               .csr_waddr1_i 	(csr_waddr1    ),
                               .csr_wen1_i   	(csr_wen1      ),
                               .csr_wdata1_i 	(csr_wdata1    ),
                               .csr_waddr2_i 	(csr_waddr2    ),
                               .csr_wen2_i   	(csr_wen2      ),
                               .csr_wdata2_i 	(csr_wdata2    ),
                               .csr_raddr_i  	(csr_raddr     ),
                               .csr_ren_i    	(csr_ren       ),
                               .csr_rdata_o  	(csru_rdata_o  )
                           );

endmodule
