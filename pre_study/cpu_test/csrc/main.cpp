#include <verilated.h>
#include <verilated_fst_c.h>
#include "Vtop.h"

#define A printf("sim_time = %lu, clk = %d, reset = %d, data1_i = %d, data1_o = %d, data1_reg_o = %d\n", \
          sim_time, top->clk, top->reset, top->data1_i, top->data1_o, top->data1_reg_o); 

vluint64_t sim_time = 0;      // 记录仿真时间
vluint64_t reset_time = 3;   // 复位时间

int main(int argc, char **argv) {
    srand (time(NULL));                         // 为rand()设置种子
    Verilated::commandArgs(argc, argv);
    // 创建CPU仿真对象
    Vtop *top = new Vtop;
    VerilatedFstC *tfp = new VerilatedFstC;
    Verilated::traceEverOn(true);
    top->trace(tfp, 99); // 设置波形记录深度
    tfp->open("waveform.fst");

    // 初始化
    top->clk = 0;
    top->reset = 1; // 复位信号拉高
    top->data1_i = 0;
    while (sim_time < 10)
    {   
        top->clk = 1;
        top->reset = 0;
        if(sim_time < reset_time) top->reset = 1;
        top->data1_i = rand() % 100;
        top->eval();
        tfp->dump(sim_time);
        sim_time++;
        top->clk = 0;
        top->reset = 0;
        if(sim_time < reset_time) top->reset = 1;
        top->eval();
        tfp->dump(sim_time);
        sim_time++;
        printf("\n");
    }
    
    // 清理资源
    tfp->close();
    delete top;
    delete tfp;

    return 0;
}