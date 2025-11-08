module ysyx_25050136_IF
    (
        input         clk           ,
        input         reset         ,
        input         flush         ,
        input         branch_taken_i,
        input  [31:0] branch_pc_i   ,
        input  [31:0] update_pc_i   ,
        input         pht_update_i  ,
        input         btb_update_i  ,
        input         out_ready_i   ,
        output [31:0] out_pc_o      ,
        output [31:0] out_prepc_o   ,
        output        out_taken_o   ,
        output        out_btb_hit_o ,
        output        out_valid_o
    );
     
`ifdef ysyx_25050136_RESET_PC
    localparam RESET_PC = `ysyx_25050136_RESET_PC;
`else
    localparam RESET_PC = 32'h80000000;  // 默认复位地址
`endif
    localparam PHT_INDEX = 4;
    localparam BTB_INDEX = 3;
    localparam BTB_TAG   = 1;
    localparam RAS_WIDTH = 2;
    // ==== 信号定义 ====
    // 时序逻辑
    reg [31:0] pc;
    reg idle;
    // 组合逻辑
    wire ready_go = 1;
    wire out_fire = out_ready_i & out_valid_o;
    wire branch_update = pht_update_i | btb_update_i;
    wire [PHT_INDEX-1:0] pht_pc_index = branch_update ? update_pc_i[2+:PHT_INDEX] : pc[2+:PHT_INDEX];
    wire [BTB_INDEX-1:0] btb_pc_index = branch_update ? update_pc_i[2+:BTB_INDEX] ^ update_pc_i[2+BTB_INDEX+:BTB_INDEX] : pc[2+:BTB_INDEX] ^ pc[2+BTB_INDEX+:BTB_INDEX];
    wire [BTB_TAG-1:0]   btb_pc_tag   = branch_update ? update_pc_i[2+BTB_INDEX+:BTB_TAG] ^ update_pc_i[9+BTB_INDEX+:BTB_TAG] : update_pc_i[2+BTB_INDEX+:BTB_TAG] ^ update_pc_i[9+BTB_INDEX+:BTB_TAG];
    wire        pht_pred_taken;
    wire [31:0] btb_pred_npc;

    // === 复用加法器 ===
    // 选择信号：flush 时用 branch_pc_i，否则用 pc
    wire adder_sel = flush;
    wire [31:0] adder_op1 = adder_sel ? branch_pc_i : pc;
    wire [31:0] adder_op2 = 32'h4;  
    wire [31:0] adder_out = adder_op1 + adder_op2;  
    
    // next_pc: 预测跳转时用 BTB 目标，否则用 pc + 4 (adder_out)
    wire [31:0] next_pc = (pht_pred_taken & out_btb_hit_o) ? btb_pred_npc : adder_out;
    // branch_npc: 跳转时用 branch_pc_i，否则用 branch_pc_i + 4 (adder_out)
    wire [31:0] branch_npc = branch_taken_i ? branch_pc_i : adder_out;
 
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
            pc <= RESET_PC;
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
    assign out_prepc_o = next_pc; 
    assign out_taken_o = pht_pred_taken;  
    assign out_valid_o = !(idle || flush) && ready_go;

    ysyx_25050136_PHT 
    #(
        .INDEX_WIDTH (PHT_INDEX  )
    ) u_PHT (
        .clk          (clk            ),
        .reset        (reset          ),
        .index        (pht_pc_index   ),
        .pred_taken_i (branch_taken_i ),
        .update_en_i  (pht_update_i   ),
        .pred_taken_o (pht_pred_taken)
    );

    ysyx_25050136_BTB
    #(
        .INDEX_WIDTH (BTB_INDEX     ),
        .TAG_WIDTH   (BTB_TAG       )
    ) u_BTB (
        .clk          (clk             ),
        .reset        (reset           ),
        .index        (btb_pc_index    ),
        .tag          (btb_pc_tag      ),
        .update_en_i  (btb_update_i    ),
        .target_pc_i  (branch_pc_i     ),
        .hit_o        (out_btb_hit_o   ),
        .target_pc_o  (btb_pred_npc)
    );


endmodule

module ysyx_25050136_PHT
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
    reg [1:0] pht_array [0:PHT_SIZE-1]; // 2-bit saturating counter
    integer i;
    // ==== 逻辑实现 ====
    // PHT 初始化
    always @(posedge clk) begin
        if(reset) begin
            for(i = 0; i < PHT_SIZE; i = i + 1) begin
                pht_array[i] = 2'b01; // 初始状态为弱不跳转
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

module ysyx_25050136_BTB
    #(
        parameter INDEX_WIDTH = 10,
        parameter TAG_WIDTH   = 20
    )
    (
        input                     clk         ,
        input                     reset       ,
        input  [INDEX_WIDTH-1:0]  index       ,
        input  [TAG_WIDTH-1:0]    tag         ,
        input                     update_en_i ,
        input  [31:0]             target_pc_i ,
        output                    hit_o       ,
        output [31:0]             target_pc_o
    );
    localparam BTB_SIZE = 1 << INDEX_WIDTH;
    // ==== 信号定义 ====
    reg btb_valid [0:BTB_SIZE-1];
    reg [TAG_WIDTH-1:0] btb_tag [0:BTB_SIZE-1];
    reg [31:0] btb_target [0:BTB_SIZE-1];
    // 查找逻辑
    wire btb_hit = btb_valid[index] && (btb_tag[index] == tag);
    integer i;
    // ==== 逻辑实现 ====
    // BTB 初始化
    always @(posedge clk) begin
        if(reset) begin
            for(i = 0; i < BTB_SIZE; i = i + 1) begin
                btb_valid[i] = 0;
            end
        end else if(update_en_i) begin
            btb_valid[index]  <= 1'b1;
            btb_tag[index]    <= tag;
            btb_target[index] <= target_pc_i;
        end
    end
    // 输出目标地址
    assign hit_o = btb_hit;
    assign target_pc_o = btb_hit ? btb_target[index] : 32'b0;

endmodule