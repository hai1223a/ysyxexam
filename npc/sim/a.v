module add(
    input  clk,
    input  reset,
    input  [31:0] a,
    input  [31:0] b,
    output [31:0] y
    );
    reg [31:0] a_r;
    reg [31:0] b_r;
    reg [31:0] y_r;
    always @(posedge clk) begin
        if (reset) begin
            a_r <= 32'b0;
            b_r <= 32'b0;
            y_r <= 32'b0;
        end
        else begin
            a_r <= a;
            b_r <= b;
            y_r <= a_r + b_r;
        end
    end
    assign y = y_r;
    
endmodule //add

module alu(
    input  clk,
    input  reset,
    input  [31:0] a,
    input  [31:0] b,
    input  [2:0]  op,
    output reg    y
    );

    parameter OP_EQ  = 3'b000; 
    parameter OP_NE  = 3'b001; 
    parameter OP_SLT = 3'b010; 
    parameter OP_SGE = 3'b011; 
    parameter OP_ULT = 3'b100; 
    parameter OP_UGE = 3'b101; 

    reg [31:0] a_r, b_r;
    reg [2:0]  op_r;
    reg y_r, y_temp;
    always @(posedge clk) begin
        if (reset) begin
            a_r <= 32'b0;
            b_r <= 32'b0;
            op_r <= 3'b0;
            y_r <= 1'b0;
        end
        else begin
            a_r <= a;
            b_r <= b;
            op_r <= op;
            y_r <= y_temp;
        end
    end    
    
    wire is_equal = (a_r == b_r);
    wire is_slt   = ($signed(a_r) < $signed(b_r));
    wire is_ult   = (a_r < b_r);
    always @(*) begin
        case (op_r)
            OP_EQ:  y_temp = is_equal;
            OP_NE:  y_temp = ~is_equal;
            OP_SLT: y_temp = is_slt;
            OP_SGE: y_temp = ~is_slt;
            OP_ULT: y_temp = is_ult;
            OP_UGE: y_temp = ~is_ult;
            default: y_temp = 1'b0;
        endcase
    end
    assign y = y_r;
endmodule //alu

`define ysyx_25050136_ALU_OP_NUM 11
`define ysyx_25050136_ALU_ADD    0
`define ysyx_25050136_ALU_SUB    1
`define ysyx_25050136_ALU_XOR    2
`define ysyx_25050136_ALU_OR     3
`define ysyx_25050136_ALU_AND    4
`define ysyx_25050136_ALU_LEQ_U  5
`define ysyx_25050136_ALU_LEQ    6
`define ysyx_25050136_ALU_SRA    7
`define ysyx_25050136_ALU_SLL    8
`define ysyx_25050136_ALU_SRL    9
`define ysyx_25050136_ALU_OPD2   10
// ... existing `define`s ...

module real_alu
     (
         input                                  clk,
         input                                  reset,
         input  [31:0]                          op1_i,
         input  [31:0]                          op2_i,
         // op_i 位宽改为4，使用二进制编码
         input  [3:0]                           op_i, 
         output [31:0]                          out_o
     );

    // --- 1. 流水线寄存器 ---
    reg [31:0] op1_r, op2_r;
    reg [3:0]  op_r; // op_r 位宽改为4
    reg [31:0] out_r;
    reg [31:0] out_temp;

    always @(posedge clk) begin
        if (reset) begin
            op1_r <= 32'b0;
            op2_r <= 32'b0;
            op_r  <= 4'b0;
            out_r <= 32'b0;
        end
        else begin
            op1_r <= op1_i;
            op2_r <= op2_i;
            op_r  <= op_i;
            out_r <= out_temp;
        end
    end

    // --- 2. 组合逻辑计算部分 (资源高度复用) ---

    // **核心加法器 (用于加、减、比较)**
    wire [31:0] adder_op2 = op_r == `ysyx_25050136_ALU_SUB || op_r == `ysyx_25050136_ALU_LEQ || op_r == `ysyx_25050136_ALU_LEQ_U ? ~op2_r : op2_r;
    wire        adder_cin = op_r == `ysyx_25050136_ALU_SUB || op_r == `ysyx_25050136_ALU_LEQ || op_r == `ysyx_25050136_ALU_LEQ_U ? 1'b1 : 1'b0;
    wire [31:0] adder_result;
    wire        adder_cout;
    // 使用一个全加器模块或直接相加
    assign {adder_cout, adder_result} = op1_r + adder_op2 + adder_cin;

    // **从加法器结果派生出比较结果**
    wire slt_result = (op1_r[31] & ~op2_r[31]) | (~(op1_r[31] ^ op2_r[31]) & adder_result[31]);
    wire ult_result = ~adder_cout; // 无符号小于等价于减法不产生进位(即产生借位)

    // **通用移位器**
    wire [31:0] shifter_result;
    wire [31:0] sra_operand = {{32{op1_r[31]}}, op1_r}; // 算术右移的扩展操作数
    wire [5:0]  shift_amount = op2_r[4:0];
    // 根据op_r选择移位方向和类型
    assign shifter_result = (op_r == `ysyx_25050136_ALU_SLL) ? (op1_r << shift_amount) :
                          (op_r == `ysyx_25050136_ALU_SRL) ? (op1_r >> shift_amount) :
                          (op_r == `ysyx_25050136_ALU_SRA) ? ($signed(op1_r) >>> shift_amount) :
                          32'b0;
    
    // --- 3. 组合逻辑选择部分 (高效的 MUX) ---
    always @(*) begin
        // 使用二进制编码的 case 语句，生成高效 MUX
        case (op_r)
            `ysyx_25050136_ALU_ADD:   out_temp = adder_result;
            `ysyx_25050136_ALU_SUB:   out_temp = adder_result;
            `ysyx_25050136_ALU_XOR:   out_temp = op1_r ^ op2_r;
            `ysyx_25050136_ALU_OR:    out_temp = op1_r | op2_r;
            `ysyx_25050136_ALU_AND:   out_temp = op1_r & op2_r;
            `ysyx_25050136_ALU_LEQ_U: out_temp = {{31{1'b0}}, ult_result};
            `ysyx_25050136_ALU_LEQ:   out_temp = {{31{1'b0}}, slt_result};
            `ysyx_25050136_ALU_SRA:   out_temp = shifter_result;
            `ysyx_25050136_ALU_SLL:   out_temp = shifter_result;
            `ysyx_25050136_ALU_SRL:   out_temp = shifter_result;
            `ysyx_25050136_ALU_OPD2:  out_temp = op2_r;
            default:                 out_temp = 32'b0;     
        endcase
    end

    // --- 4. 输出 ---
    assign out_o = out_r;

endmodule //real_alu

module ysyx_25050136_ICACHE
#(
    parameter OFFSET_WIDTH = 4,
    parameter NUM_WAY = 1,
    parameter INDEX_WIDTH = 2
)
(
    input                                      clk          ,
    input                                      reset        ,
    // CPU 接口
    input                                   flush           ,
    input                                   in_valid_i      ,
    input    [31:0]                         in_pc_i         ,
    output                                  in_ready_o      ,
    input                                   out_ready_i     ,
    output   [31:0]                         out_pc_o        ,
    output                                  out_valid_o     
);

    // 流水寄存器
    reg        ic_idle;
    reg [31:0] ic_pc;
    wire       in_fire  = in_valid_i && in_ready_o;
    wire       out_fire = out_valid_o && out_ready_i;
    always @(posedge clk) begin
        if (reset) begin
            ic_idle    <= 1'b1;
        end else begin
            if (flush) begin
                ic_idle <= 1'b1; 
            end else if (in_fire) begin
                ic_idle    <= 1'b0;
                ic_pc    <= in_pc_i;
            end else if (out_fire) begin
                ic_idle <= 1'b1;
            end
        end
    end

    assign ready_go = 内部逻辑;

    assign in_ready_o   = (out_fire || ic_idle);
    assign out_valid_o   = !ic_idle && !flush && ready_go;
    
    assign out_pc_o    = ic_pc;

endmodule
