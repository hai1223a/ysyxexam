module ysyx_25050136_IF
    (
        input         clk         ,
        input         reset       ,
        input         flush       ,
        input  [31:0] branch_npc  ,
        input         out_ready_i ,
        output [31:0] out_pc_o    ,
        output        out_valid_o
    );
     
`ifdef ysyx_25050136_RESET_PC
    localparam RESET_PC = `ysyx_25050136_RESET_PC;
`else
    localparam RESET_PC = 32'h80000000;  // 默认复位地址
`endif
    // ==== 信号定义 ====
    // 时序逻辑
    reg [31:0] pc;
    reg idle;
    // 组合逻辑
    wire ready_go = 1;
    wire out_fire = out_ready_i & out_valid_o;
    wire [31:0] next_pc = pc + 32'h4;
`ifdef ysyx_25050136_VERILATOR_DPIC
    wire [31:0] if_dbg_pc = out_pc_o;
    always @(posedge clk) begin
        if(out_fire) fetch_get();
    end
`endif
    // ==== 逻辑实现 ====
    always @(posedge clk) begin
        if(reset) begin
            idle <= 1;
            pc <= 32'h3000_0000;
        end else begin
            idle <= 0;
            if(flush) begin
                pc <= branch_npc;
            end else if(out_fire) begin
                pc <= next_pc;
            end
        end
    end
    assign out_pc_o = pc;
    assign out_valid_o = !(idle || flush) && ready_go;


endmodule
