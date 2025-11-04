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

module PHT
    #(
        parameter INDEX_WIDTH = 10
    )
    (
        input                     clk         ,
        input                     reset       ,
        input  [INDEX_WIDTH-1:0]  index       ,
        input                     pred_taken_i,
        input                     update_en_i ,
        output                    pred_taken_o
    );
    localparam PHT_SIZE = 1 << INDEX_WIDTH;
    // ==== 信号定义 ====
    reg [1:0] pht_array [0:INDEX_WIDTH-1]; // 2-bit saturating counter
    integer i;
    // ==== 逻辑实现 ====
    // PHT 初始化
    always @(posedge clk) begin
        if(reset) begin
            for(i = 0; i < 1024; i = i + 1) begin
                pht_array[i] <= 2'b01; // 初始状态为弱不跳转
            end
        end else if(update_en_i) begin
            if(pred_taken_i) begin
                // 实际跳转，状态加1，饱和在11
                if(pht_array[index] != 2'b11)
                    pht_array[index] <= pht_array[index] + 2'b01;
            end else begin
                // 实际不跳转，状态减1，饱和在00
                if(pht_array[index] != 2'b00)
                    pht_array[index] <= pht_array[index] - 2'b01;
            end
        end
    end
    // 输出预测结果
    assign pred_taken_o = (pht_array[index][1] == 1'b1) ? 1'b1 : 1'b0;
endmodule