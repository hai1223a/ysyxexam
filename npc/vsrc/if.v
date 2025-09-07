module ysyx_25050136_IF
    #(
        parameter DATA_WIDTH = 32
     )
     (
         input                      clk             ,
         input                      reset           ,
         // 与icache握手信号
         input    [31:0]            req_rdata_i     ,
         input                      req_ready_i     ,
         output   [31:0]            req_addr_o      ,
         output                     req_valid_o     ,
         // 内部 
         input                      dynamic_valid_i ,
         input    [DATA_WIDTH-1:0]  dynamic_npc_i   ,
         output   [DATA_WIDTH-1:0]  pc_o            ,
         output   [DATA_WIDTH-1:0]  static_npc_o    ,
         output   [31:0]            inst_o          ,
         input                      bready_i        ,   // 该信号有EX模块告知可以进行下一条指令了
         output                     bvalid_o            // 该信号告诉后面的模块新指令来了
     );
     
`ifdef ysyx_25050136_RESET_PC
    localparam RESET_PC = `ysyx_25050136_RESET_PC;
`else
    localparam RESET_PC = 32'h80000000;  // 默认复位地址
`endif

    reg req_valid_r;
    reg [31:0] req_addr_r;
    reg [31:0] inst_r;
    reg [31:0] pc;
    always @(posedge clk) begin
        if (reset) begin
            pc          <= 0;
            req_addr_r  <= 0;
            req_valid_r <= 0;
        end else begin
            if(bready_i) begin
                req_addr_r <= dynamic_valid_i ? dynamic_npc_i : static_npc_o;
                pc <= dynamic_valid_i ? dynamic_npc_i : static_npc_o;
                req_valid_r <= 1;
            end
            if(req_ready_i) begin
                req_valid_r <= 0;
                inst_r <= req_rdata_i;
            end
        end
    end
    assign req_addr_o = req_addr_r;
    assign req_valid_o = req_valid_r;
    assign static_npc_o = (pc == 0) ? RESET_PC : (pc + 32'h4);
    assign bvalid_o = req_ready_i;
    assign inst_o = req_valid_r ? req_rdata_i : inst_r;
    assign pc_o = pc;

endmodule
