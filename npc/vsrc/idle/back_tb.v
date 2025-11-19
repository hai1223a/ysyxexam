`timescale 1ns / 1ps

module csru_tb;

    // 输入信号
    reg clk;
    reg reset;
    reg [31:0] pc_i;
    reg [`ysyx_25050136_CSRU_OP_NUM-1:0] operation_i;
    reg [31:0] csru_wdata_i;
    reg [11:0] csru_addr_i;
    reg csru_ren_i;
    reg csru_wen_i;

    // 输出信号
    wire [31:0] csru_rdata_o;

    // 实例化 DUT
    ysyx_25050136_CSRU dut (
        .clk(clk),
        .reset(reset),
        .pc_i(pc_i),
        .operation_i(operation_i),
        .csru_wdata_i(csru_wdata_i),
        .csru_addr_i(csru_addr_i),
        .csru_ren_i(csru_ren_i),
        .csru_wen_i(csru_wen_i),
        .csru_rdata_o(csru_rdata_o)
    );

    // 时钟生成
    initial begin
        clk = 0;
        forever #5 clk = ~clk;  // 10ns 周期
    end

    // 测试序列
    initial begin
        // 初始化
        reset = 1;
        pc_i = 32'h80000000;
        operation_i = 0;
        csru_wdata_i = 0;
        csru_addr_i = 0;
        csru_ren_i = 0;
        csru_wen_i = 0;

        #10;  // 等待复位
        reset = 0;

        // 触发 CSRRS 操作（可能形成环路的场景：在修复前代码中，csr_wdata1 = csru_rdata_o | csru_wdata_i，而 csru_rdata_o 依赖 csr_raddr）
        // 设置地址为 MEPC (0x341)，读写使能为1，写入数据为 0x12345678
        operation_i = (1 << `ysyx_25050136_CSRU_CSRRS);
        csru_addr_i = 12'h341;  // MEPC
        csru_wdata_i = 32'h12345678;
        csru_ren_i = 1;
        csru_wen_i = 1;

        #10;  // 等待一个时钟周期

        // 观察输出：如果有环路，仿真时间会停滞，csru_rdata_o 可能为 X 或不稳定
        $display("Time: %t, csru_rdata_o: %h", $time, csru_rdata_o);

        // 再触发一次，观察是否稳定
        #10;
        $display("Time: %t, csru_rdata_o: %h", $time, csru_rdata_o);

        // 结束仿真
        #10;
        $finish;
    end

    // 监控信号（可选，用于调试）
    initial begin
        $monitor("Time: %t, clk: %b, reset: %b, operation_i: %b, csru_addr_i: %h, csru_rdata_o: %h",
                 $time, clk, reset, operation_i, csru_addr_i, csru_rdata_o);
    end

endmodule