`timescale 1ns/1ps
`include "../vsrc/top.v"

module top_tb;

    // 时钟和复位信号
    reg clk;
    reg reset;

    // 输入信号
    reg [31:0] inst_i;
    reg [31:0] mem_rdata_i;

    // 输出信号
    wire [31:0] mem_wdata_o;
    wire [31:0] mem_addr_o;
    wire [31:0] pc_o;

    // 实例化被测试模块
    ysyx_25050136_NPC uut (
        .clk(clk),
        .reset(reset),
        .inst_i(inst_i),
        .mem_rdata_i(mem_rdata_i),
        .mem_wdata_o(mem_wdata_o),
        .mem_addr_o(mem_addr_o),
        .pc_o(pc_o)
    );

    // 时钟生成
    always #5 clk = ~clk;

    // 测试逻辑
    initial begin
        $dumpfile("top_tb.vcd");
        $dumpvars(0, top_tb);

        // 初始化信号
        clk = 0;
        reset = 1;
        inst_i = 0;
        mem_rdata_i = 0;

        // 复位信号
        #10 reset = 0;

        // 测试指令输入
        #10 inst_i = 32'h12345678;
        #10 inst_i = 32'h87654321;

        // 测试内存数据输入
        #10 mem_rdata_i = 32'hDEADBEEF;
        #10 mem_rdata_i = 32'hCAFEBABE;

        // 等待一段时间观察输出
        #50;

        // 测试结束
        $display("测试完成");
        $finish;
    end

endmodule