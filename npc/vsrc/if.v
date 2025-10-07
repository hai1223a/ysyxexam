module ysyx_25050136_IF
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
         input                      stall_i         ,
         input                      flush_i         ,
         input                      branch_valid_i  ,
         input    [31:0]            branch_npc_i    ,
         output   [31:0]            pc_o            ,
         output   [31:0]            inst_o          
     );
     
`ifdef ysyx_25050136_RESET_PC
    localparam RESET_PC = `ysyx_25050136_RESET_PC;
`else
    localparam RESET_PC = 32'h80000000;  // 默认复位地址
`endif

    reg [31:0] pc;
    reg req_use_r;
    reg cnt;
    wire [31:0] next_pc;
    always @(posedge clk) begin
        if (reset) begin
            pc          <= RESET_PC;
            req_use_r   <= 0;
        end else begin
            if(req_ready_i & req_valid_o) begin
                pc          <= next_pc;
                req_use_r   <= ((next_pc) >= 32'ha000_0000) &&
                               ((next_pc) < 32'ha400_0000);
            end
        end
    end
    assign next_pc = branch_valid_i ? branch_npc_i : (pc + 32'h4);
    assign req_addr_o = pc;
    assign req_valid_o = ~stall_i;
    assign req_use_o = req_use_r;
    wire stall_if = req_valid_o & ~req_ready_i;

    ysyx_25050136_IF_REG 
    IF_REG (
        .clk    (clk                    ),
        .reset  (reset                  ),
        .stall  (stall_i      ),
        .stall_if(stall_if),
        .flush  (flush_i                ),
        .pc_i   (pc                     ),
        .inst_i (req_rdata_i            ),
        .pc_o   (pc_o                   ),
        .inst_o (inst_o                 )
    );

endmodule

module ysyx_25050136_IF_REG
    (
        input clk                ,
        input reset              ,
        input stall              ,
        input stall_if           ,
        input flush              ,
        input [31:0] pc_i        ,
        input [31:0] inst_i      ,
        output reg [31:0] pc_o   ,
        output reg [31:0] inst_o 
    );
    // =========== 标准逻辑 ======================
    always @(posedge clk) begin
        if(reset) begin
            pc_o <= 0;
            inst_o <= 0;
        end else begin
            if(stall_if) begin
                inst_o <= 0;
            end else if(stall)begin
                
            end else begin
                pc_o <= pc_i;
                inst_o <= inst_i;                
            end
        end
    end

endmodule
