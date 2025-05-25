`timescale 1ns/1ps
`include "../vsrc/config.v"

module alu_tb;

    // 参数定义
    localparam DATA_WIDTH = 32;

    // 信号定义
    reg [DATA_WIDTH-1:0] op1_i;
    reg [DATA_WIDTH-1:0] op2_i;
    reg [`ysyx_25050136_ALU_OP_NUM-1:0] operation_i;
    reg en_i;
    wire [DATA_WIDTH-1:0] out_o;

    // 实例化被测试模块
    ysyx_25050136_ALU #(
        .DATA_WIDTH(DATA_WIDTH)
    ) uut (
        .op1_i(op1_i),
        .op2_i(op2_i),
        .operation_i(operation_i),
        .en_i(en_i),
        .out_o(out_o)
    );

    // 测试逻辑
    initial begin
        $dumpfile("alu_tb.vcd");
        $dumpvars(0, alu_tb);

        // 初始化信号
        op1_i = 0;
        op2_i = 0;
        operation_i = 0;
        en_i = 0;

        // 等待复位完成
        #10;

        // 测试有符号加法操作
        $display("测试有符号加法操作...");
        op1_i = $signed(32'hFFFFFFF0); // -16 (有符号数)
        op2_i = $signed(32'h00000010); // 16 (有符号数)
        operation_i = 1 << `ysyx_25050136_ALU_ADD; // 选择加法操作
        en_i = 1; // 启用 ALU
        #10; // 等待结果
        if ($signed(out_o) == $signed(32'h0)) // 期望结果为 0
            $display("测试通过: 有符号加法操作正确，结果 = %d", $signed(out_o));
        else
            $display("测试失败: 有符号加法操作错误，结果 = %d (期望值: 0)", $signed(out_o));

        // 测试禁用 ALU
        $display("测试禁用 ALU...");
        en_i = 0; // 禁用 ALU
        #10;
        if (out_o == 32'h0)
            $display("测试通过: 禁用 ALU 时输出为 0");
        else
            $display("测试失败: 禁用 ALU 时输出错误，结果 = 0x%h (期望值: 0x0)", out_o);

        // 测试结束
        $display("测试完成");
        $finish;
    end

endmodule