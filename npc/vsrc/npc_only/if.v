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
         output                     req_use_o       ,     
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

    reg [31:0] pc;
    reg req_valid_r;
    reg req_use_r;
    reg [31:0] req_addr_r;
    reg [31:0] inst_r;
    wire [31:0] next_pc;
    always @(posedge clk) begin
        if (reset) begin
            pc          <= 0;
            req_addr_r  <= 0;
            req_valid_r <= 0;
            req_use_r   <= 0;
        end else begin
            if(bready_i) begin
                req_addr_r <= next_pc;
                pc <= next_pc;
                req_valid_r <= 1;
                req_use_r   <= ((next_pc) >= 32'ha000_0000) &&
                               ((next_pc) < 32'ha400_0000);
            end
            if(req_ready_i) begin
                req_use_r   <= 0;
                req_valid_r <= 0;
                inst_r <= req_rdata_i;
            end
        end
    end
    assign next_pc = pc + next_offset;
    assign next_offset = (pc == 0) ? RESET_PC : (branch_valid ? branch_offset : 32'h4);
    assign req_use_o = req_use_r;
    assign req_addr_o = req_addr_r;
    assign req_valid_o = req_valid_r;
    assign bvalid_o = req_ready_i;
    assign inst_o = req_valid_r ? req_rdata_i : inst_r;
    assign pc_o = pc;

endmodule

module ysyx_25050136_IF_REG
(
    clk,reset,en,flush,pc_i,inst_i,pc_o,inst_o
);
// =========== 输入输出 ======================
input clk;
input reset;
input en;
input flush;
input [31:0] pc_i;
input [31:0] inst_i;
output reg [31:0] pc_o;
output reg [31:0] inst_o;
// =========== 标准逻辑 ======================
always @(posedge clk) begin
    if(reset) begin
        pc_o <= 0;
        inst_o <= 0;
    end else begin
        if(flush) begin
            pc_o <= 0;
            inst_o <= 0;
        end else if(en) begin
            pc_o <= pc_i;
            inst_o <= inst_i;
        end
    end
end

endmodule
