module ysyx_25050136_MEM
    #(
       parameter ADDR_WIDTH = 4
    )
    (
        input                                              clk ,
        input                                            reset ,
        input                                          stall_i ,
        input                                          flush_i ,
        input    [ADDR_WIDTH-1:0]                         rd_i ,
        input                                          rd_en_i ,
        input    [31:0]                            gpr_wdata_i ,
        input                                        lsu_ren_i ,
        input                                        lsu_wen_i ,
        input    [3:0]                              lsu_mask_i ,
        input                                     lsu_signed_i ,
        input    [31:0]                             lsu_addr_i ,
        input    [31:0]                            lsu_wdata_i ,
`ifdef ysyx_25050136_VERILATOR_DPIC
        input      [`ysyx_25050136_DBG_NUM-1:0]       dbg_op_i ,
        input      [31:0]                             dbg_pc_i ,
        input      [31:0]                           dbg_inst_i ,
        output reg [`ysyx_25050136_DBG_NUM-1:0]       dbg_op_o ,
        output reg [31:0]                             dbg_pc_o ,
        output reg [31:0]                           dbg_inst_o ,
`endif
        output                                        lsu_en_o ,
        output                                     lsu_valid_o ,
        output   [ADDR_WIDTH-1:0]                         rd_o ,
        output                                         rd_en_o ,
        output   [31:0]                            gpr_wdata_o ,
        // 与DCACHE握手信号
        input    [31:0]                            req_rdata_i ,
        input                                      req_ready_i ,
        output   [31:0]                            req_addr_o  ,
        output                                     req_valid_o ,
        output                                     req_ren_o   ,
        output                                     req_wen_o   ,
        output   [3:0]                             req_mask_o  ,
        output   [2:0]                             req_size_o  ,
        output                                     req_use_o   ,
        output   [31:0]                            req_wdata_o  
    );

    wire [31:0] lsu_rdata;
    wire [31:0] clint_raddr;
    wire [31:0] clint_rdata;
    wire clint_valid;
    wire clint_ready;
    ysyx_25050136_LSU 
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
        .clint_addr_o 	(clint_raddr   ),
        .clint_rdata_i	(clint_rdata   ),
        .clint_valid_o  (clint_valid   ), 
        .clint_ready_i  (clint_ready   ),
        .lsu_ren_i    	(lsu_ren_i     ),
        .lsu_wen_i    	(lsu_wen_i     ),
        .lsu_mask_i   	(lsu_mask_i    ),
        .lsu_signed_i 	(lsu_signed_i  ),
        .lsu_addr_i   	(lsu_addr_i    ),
        .store_data_i 	(lsu_wdata_i   ),
        .load_data_o  	(lsu_rdata     ),
        .lsu_valid_o  	(lsu_valid_o   )
    );
    
    clint u_clint(
        .clk    	(clk          ),
        .reset  	(reset        ),
        .valid_i	(clint_valid  ),
        .ready_o    (clint_ready  ),
        .addr_i 	(clint_raddr  ),
        .data_o 	(clint_rdata  )
    );

    //===================================================
    // 中间信号定义
    //=================================================== 
    assign lsu_en_o = lsu_ren_i | lsu_wen_i;
    wire no_stall = (~lsu_en_o) | lsu_valid_o;
    wire [31:0] gpr_wdata_t = lsu_en_o ? lsu_rdata : gpr_wdata_i;

`ifdef ysyx_25050136_VERILATOR_DPIC
    always @(posedge clk) begin
        if(reset) begin
            dbg_op_o <= 0;
            dbg_pc_o <= 0;
            dbg_inst_o <= 0;
        end else begin
            if(!stall_i) begin
                dbg_op_o <= dbg_op_i;
                dbg_pc_o <= dbg_pc_i;
                dbg_inst_o <= dbg_inst_i;
            end
        end
    end
`endif

    ysyx_25050136_MEM_REG #(
        .ADDR_WIDTH(ADDR_WIDTH)
    ) MEM_REG (
        .clk         	(clk                    ),
        .reset       	(reset                  ),
        .en          	(!stall_i & no_stall    ),
        .flush       	(flush_i                ),
        .rd_i        	(rd_i                   ),
        .rd_en_i     	(rd_en_i                ),
        .gpr_wdata_i 	(gpr_wdata_t            ),
        .rd_o        	(rd_o                   ),
        .rd_en_o     	(rd_en_o                ),
        .gpr_wdata_o 	(gpr_wdata_o            )
    );

endmodule

module ysyx_25050136_MEM_REG
    #(
        parameter ADDR_WIDTH = 4
    )
    (
        input clk                         ,
        input reset                       ,
        input en                          ,
        input flush                       ,
        input [ADDR_WIDTH-1:0] rd_i       ,
        input               rd_en_i       ,
        input [31:0]    gpr_wdata_i       ,
        output reg  [ADDR_WIDTH-1:0] rd_o ,
        output reg                rd_en_o ,
        output reg  [31:0]    gpr_wdata_o 
    );

    // =========== 标准逻辑 ======================
    always @(posedge clk) begin
        if(reset) begin
            rd_o <= 0;
            rd_en_o <= 0;
            gpr_wdata_o <= 0;
        end else begin
            if(flush) begin
                rd_o <= 0;
                rd_en_o <= 0;
                gpr_wdata_o <= 0;
            end else if(en) begin
                rd_o <= rd_i;
                rd_en_o <= rd_en_i;
                gpr_wdata_o <= gpr_wdata_i;
            end
        end
    end

endmodule //moduleName

