`timescale 1ns/1ps

module regfile_tb;

    // 参数定义
    localparam ADDR_WIDTH = 5;
    localparam DATA_WIDTH = 32;

    // 信号定义
    reg clk;
    reg [DATA_WIDTH-1:0] wdata_i;
    reg [ADDR_WIDTH-1:0] waddr_i;
    reg wen_i;
    reg [ADDR_WIDTH-1:0] raddr1_i;
    reg [ADDR_WIDTH-1:0] raddr2_i;
    wire [DATA_WIDTH-1:0] rdata1_o;
    wire [DATA_WIDTH-1:0] rdata2_o;

    // 实例化被测试模块
    ysyx_25050136_RegisterFile #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(DATA_WIDTH)
    ) uut (
        .clk(clk),
        .wdata_i(wdata_i),
        .waddr_i(waddr_i),
        .wen_i(wen_i),
        .raddr1_i(raddr1_i),
        .raddr2_i(raddr2_i),
        .rdata1_o(rdata1_o),
        .rdata2_o(rdata2_o)
    );

    // 时钟生成
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 10ns 时钟周期
    end

    // 测试逻辑
    initial begin
        $dumpfile("npc/prj/regfile_tb.vcd");
        $dumpvars(0, regfile_tb);
        // 初始化信号
        wdata_i = 0;
        waddr_i = 0;
        wen_i = 0;
        raddr1_i = 0;
        raddr2_i = 0;

        // 等待复位完成
        #10;

        // 测试写入和读取
        $display("开始测试写入和读取...");
        waddr_i = 5'd1; // 写入寄存器1,
        wdata_i = 32'h12345678;
        wen_i = 1;
        #10; // 等待一个时钟周期
        wen_i = 0;

        raddr1_i = 5'd1; // 读取寄存器1
        #10;
        if (rdata1_o == 32'h12345678)
            $display("测试通过: 寄存器1写入和读取成功");
        else
            $display("测试失败: 寄存器1读取错误，期望值=0x12345678，实际值=0x%h", rdata1_o);

        // 测试零号寄存器
        $display("测试零号寄存器...");
        waddr_i = 5'd0; // 写入零号寄存器
        wdata_i = 32'h87654321;
        wen_i = 1;
        #10; // 等待一个时钟周期
        wen_i = 0;

        raddr1_i = 5'd0; // 读取零号寄存器
        #10;
        if (rdata1_o == 32'h0)
            $display("测试通过: 零号寄存器始终为0");
        else
            $display("测试失败: 零号寄存器读取错误，期望值=0x0，实际值=0x%h", rdata1_o);

        // 测试多端口读取
        $display("测试多端口读取...");
        waddr_i = 5'd2; // 写入寄存器2
        wdata_i = 32'hAABBCCDD;
        wen_i = 1;
        #10; // 等待一个时钟周期
        wen_i = 0;

        raddr1_i = 5'd2; // 读取寄存器2
        raddr2_i = 5'd1; // 同时读取寄存器1
        #10;
        if (rdata1_o == 32'hAABBCCDD && rdata2_o == 32'h12345678)
            $display("测试通过: 多端口读取成功");
        else
            $display("测试失败: 多端口读取错误，rdata1_o=0x%h, rdata2_o=0x%h", rdata1_o, rdata2_o);

        // 测试结束
        $display("测试完成");
        $finish;
    end

endmodule