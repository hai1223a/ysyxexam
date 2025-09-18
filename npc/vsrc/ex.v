module ysyx_25050136_EX
    #(
        parameter DATA_WIDTH = 32
     )
     (
        // 内部
        input                                      clk          ,
        input                                      reset        ,
        input    [DATA_WIDTH-1:0]                  pc_i         ,
        input                                      rd_en_i      ,
        input    [`ysyx_25050136_FU_NUM-1:0]       fu_i         ,
        input    [`ysyx_25050136_ALU_OP_NUM-1:0]   alu_op_i     ,
        input    [`ysyx_25050136_LSU_OP_NUM-1:0]   lsu_op_i     ,
        input    [`ysyx_25050136_BQU_OP_NUM-1:0]   bqu_op_i     ,
        input    [`ysyx_25050136_CSRU_OP_NUM-1:0]  csru_op_i    ,
        input    [DATA_WIDTH-1:0]                  alu_opd1_i   ,
        input    [DATA_WIDTH-1:0]                  alu_opd2_i   ,
        input    [DATA_WIDTH-1:0]                  bqu_opd1_i   ,
        input    [DATA_WIDTH-1:0]                  bqu_opd2_i   ,
        input    [DATA_WIDTH-1:0]                  lsu_opd1_i   ,
        input    [DATA_WIDTH-1:0]                  csru_opd1_i  ,
        input    [11:0]                            csru_opd2_i  ,
        input                                      csru_wen_i   ,
        input                                      csru_ren_i   ,
        input    [3:0]                             mem_mask_i   ,
        input                                      mem_signed_i ,
        input                                      fvalid_i     ,
        output                                     gpr_wen_o    ,
        output   [DATA_WIDTH-1:0]                  gpr_data_o   ,
        output                                     jump_en_o    ,
        output   [DATA_WIDTH-1:0]                  jump_addr_o  ,
        output                                     fready_o     ,
        // 与DCACHE握手信号
        input    [31:0]                            req_rdata_i  ,
        input                                      req_ready_i  ,
        output   [31:0]                            req_addr_o   ,
        output                                     req_valid_o  ,
        output                                     req_ren_o    ,
        output                                     req_wen_o    ,
        output   [3:0]                             req_mask_o   ,
        output   [2:0]                             req_size_o   ,
        output                                     req_use_o    ,
        output   [31:0]                            req_wdata_o   
     );    
    //===================================================
    // ALU
    //===================================================
    wire alu_en = fu_i[`ysyx_25050136_ALU];
    wire [DATA_WIDTH-1:0] alu_out_o;

    ysyx_25050136_ALU u_ysyx_25050136_ALU(
        .op1_i          (alu_opd1_i   ),
        .op2_i          (alu_opd2_i   ),
        .operation_i 	(alu_op_i     ),
        .en_i        	(alu_en       ),
        .out_o       	(alu_out_o    )
    );
    //===================================================
    // LSU
    //===================================================
    wire lsu_en = fu_i[`ysyx_25050136_LSU];
    wire mem_ren = lsu_en & lsu_op_i[`ysyx_25050136_LSU_LOAD];
    wire mem_wen = lsu_en & lsu_op_i[`ysyx_25050136_LSU_STORE];
    wire [DATA_WIDTH-1:0] load_data_o;
    wire mem_valid_o;
    
    ysyx_25050136_LSU #(
        .DATA_WIDTH 	(32  ))
    u_ysyx_25050136_LSU(
        .clk          	(clk           ),
        .reset        	(reset         ),
        .req_rdata_i  	(req_rdata_i   ),
        .req_ready_i  	(req_ready_i   ),
        .req_addr_o   	(req_addr_o    ),
        .req_valid_o  	(req_valid_o   ),
        .req_ren_o    	(req_ren_o     ),
        .req_wen_o    	(req_wen_o     ),
        .req_mask_o   	(req_mask_o    ),
        .req_size_o   	(req_size_o    ),
        .req_use_o    	(req_use_o     ),
        .req_wdata_o  	(req_wdata_o   ),
        .fvalid_i     	(fvalid_i      ),
        .mem_ren_i    	(mem_ren       ),
        .mem_wen_i    	(mem_wen       ),
        .mem_mask_i   	(mem_mask_i    ),
        .mem_signed_i 	(mem_signed_i  ),
        .mem_addr_i   	(alu_out_o    ),
        .store_data_i 	(lsu_opd1_i  ),
        .load_data_o  	(load_data_o   ),
        .mem_valid_o  	(mem_valid_o   )
    );
    
    //===================================================
    // BQU
    //===================================================
    wire bqu_en = fu_i[`ysyx_25050136_BQU];
    wire [DATA_WIDTH-1:0] bqu_out;
    ysyx_25050136_BQU u_ysyx_25050136_BQU(
        .op1_i          (bqu_opd1_i    ),
        .op2_i          (bqu_opd2_i    ),
        .operation_i 	(bqu_op_i      ),
        .en_i        	(bqu_en        ),
        .out_o       	(bqu_out       )
    );
    //===================================================
    // CSRU
    //===================================================
    wire csru_en = fu_i[`ysyx_25050136_CSRU];

    // output declaration of module ysyx_25050136_CSRU
    wire [DATA_WIDTH-1:0] csru_rdata_o;
    
    ysyx_25050136_CSRU u_ysyx_25050136_CSRU(
        .clk         	(clk          ),
        .reset       	(reset        ),
        .pc_i           (pc_i         ),
        .en_i           (csru_en      ),
        .operation_i 	(csru_op_i    ),
        .csru_opd1_i 	(csru_opd1_i  ),
        .csru_opd2_i  	(csru_opd2_i  ),
        .csru_ren_i   	(csru_ren_i   ),
        .csru_wen_i   	(csru_wen_i   ),
        .csru_rdata_o 	(csru_rdata_o )
    );
    //===================================================
    // 寄存器
    //===================================================
    assign gpr_data_o = lsu_op_i[`ysyx_25050136_LSU_LOAD] ? load_data_o : 
                        csru_en ? csru_rdata_o : alu_out_o;
    assign gpr_wen_o = fready_o & rd_en_i;
    //===================================================
    // 跳转路径
    //===================================================
    assign jump_en_o = csru_op_i[`ysyx_25050136_CSRU_ECALL] | csru_op_i[`ysyx_25050136_CSRU_MRET] | 
                        bqu_op_i[`ysyx_25050136_BQU_JALR] | bqu_op_i[`ysyx_25050136_BQU_JAL] |
                       (bqu_en & |alu_out_o) ;
    assign jump_addr_o = bqu_en ? bqu_out : csru_rdata_o;
    //===================================================
    // 握手信号
    //===================================================
    reg fready_r;
    always @(posedge clk) begin
        if (reset) begin
            fready_r <= 1;
        end else begin
            fready_r <= fvalid_i;
        end
    end
    assign fready_o = lsu_en ? mem_valid_o : fready_r;


endmodule //ysyx_25050136_EX
