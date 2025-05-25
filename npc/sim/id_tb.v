`timescale 1ns/1ps
`include "../vsrc/config.v"
module id_tb;

    // 参数定义
    localparam ADDR_WIDTH = 5;
    localparam DATA_WIDTH = 32;

    // 信号定义
    reg [31:0] inst_i;
    reg [DATA_WIDTH-1:0] rdata1_i;
    reg [DATA_WIDTH-1:0] rdata2_i;
    wire [ADDR_WIDTH-1:0] raddr1_o;
    wire [ADDR_WIDTH-1:0] raddr2_o;
    wire [`ysyx_25050136_FU_NUM-1:0] fu_o;
    wire [`ysyx_25050136_ALU_OP_NUM-1:0] alu_op_o;
    wire [DATA_WIDTH-1:0] op1_o;
    wire [DATA_WIDTH-1:0] op2_o;
    wire [ADDR_WIDTH-1:0] rd_o;

    // 实例化被测试模块
    ysyx_25050136_ID #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(DATA_WIDTH)
    ) uut (
        .inst_i(inst_i),
        .rdata1_i(rdata1_i),
        .rdata2_i(rdata2_i),
        .raddr1_o(raddr1_o),
        .raddr2_o(raddr2_o),
        .fu_o(fu_o),
        .alu_op_o(alu_op_o),
        .op1_o(op1_o),
        .op2_o(op2_o),
        .rd_o(rd_o)
    );

    // 测试逻辑
    initial begin
        $dumpfile("npc/prj/id_tb.vcd");
        $dumpvars(0, id_tb);
        // 初始化信号
        rdata1_i = 32'h12345678;
        rdata2_i = 32'h87654321;

        // 测试 ADDI 指令
        $display("测试 ADDI 指令...");
        inst_i = 32'b000000000001_00001_000_00010_0010011; // ADDI x2, x1, 1
        #10;
        if (raddr1_o == 5'd1 && rd_o == 5'd2 && fu_o[`ysyx_25050136_ALU] && alu_op_o[`ysyx_25050136_ALU_ADD] && op1_o == rdata1_i && op2_o == 32'h1)
            $display("测试通过: ADDI 指令译码正确");
        else
            $display("测试失败: ADDI 指令译码错误");

        // 测试 LUI 指令
        $display("测试 LUI 指令...");
        inst_i = 32'b00000000000000000001_00010_0110111; // LUI x2, 0x1
        #10;
        if (rd_o == 5'd2 && op2_o == 32'h1000)
            $display("测试通过: LUI 指令译码正确");
        else
            $display("测试失败: LUI 指令译码错误");

        // 测试 BEQ 指令
        $display("测试 BEQ 指令...");
        inst_i = 32'b0000000_00001_00010_000_00000_1100011; // BEQ x1, x2, 0
        #10;
        if (raddr1_o == 5'd1 && raddr2_o == 5'd2 && fu_o[`ysyx_25050136_ALU] == 0)
            $display("测试通过: BEQ 指令译码正确");
        else
            $display("测试失败: BEQ 指令译码错误");

        // 测试结束
        $display("测试完成");
        $finish;
    end

endmodule