`timescale 1ns/1ps

module if_tb;

    // 信号定义
    reg clk;
    reg reset;
    reg dynamic_valid_i;
    reg [31:0] dynamic_npc_i;
    wire [31:0] pc_o;

    // 实例化被测试模块
    ysyx_25050136_IF uut (
        .clk(clk),
        .reset(reset),
        .dynamic_valid_i(dynamic_valid_i),
        .dynamic_npc_i(dynamic_npc_i),
        .pc_o(pc_o)
    );

    // 时钟生成
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 10ns 时钟周期
    end

    // 测试逻辑
    initial begin
        $dumpfile("npc/prj/if_tb.vcd");
        $dumpvars(0, if_tb);
        // 初始化信号
        reset = 1;
        dynamic_valid_i = 0;
        dynamic_npc_i = 32'h0;

        // 复位测试
        $display("测试复位...");
        #10; // 等待一个时钟周期
        reset = 0;
        if (pc_o == 32'h80000000)
            $display("复位测试通过: pc_o = 0x%h", pc_o);
        else
            $display("复位测试失败: pc_o = 0x%h (期望值: 0x80000000)", pc_o);

        // 测试静态递增
        $display("测试静态递增...");
        #10; // 等待一个时钟周期
        if (pc_o == 32'h80000004)
            $display("静态递增测试通过: pc_o = 0x%h", pc_o);
        else
            $display("静态递增测试失败: pc_o = 0x%h (期望值: 0x80000004)", pc_o);

        #10; // 再等待一个时钟周期
        if (pc_o == 32'h80000008)
            $display("静态递增测试通过: pc_o = 0x%h", pc_o);
        else
            $display("静态递增测试失败: pc_o = 0x%h (期望值: 0x80000008)", pc_o);

        // 测试动态跳转
        $display("测试动态跳转...");
        dynamic_valid_i = 1;
        dynamic_npc_i = 32'h12345678;
        #10; // 等待一个时钟周期
        if (pc_o == 32'h12345678)
            $display("动态跳转测试通过: pc_o = 0x%h", pc_o);
        else
            $display("动态跳转测试失败: pc_o = 0x%h (期望值: 0x12345678)", pc_o);

        // 测试动态跳转后恢复静态递增
        $display("测试动态跳转后恢复静态递增...");
        dynamic_valid_i = 0;
        #10; // 等待一个时钟周期
        if (pc_o == 32'h1234567C)
            $display("恢复静态递增测试通过: pc_o = 0x%h", pc_o);
        else
            $display("恢复静态递增测试失败: pc_o = 0x%h (期望值: 0x1234567C)", pc_o);

        // 测试结束
        $display("测试完成");
        $finish;
    end

endmodule