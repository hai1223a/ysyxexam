#include "Vtop.h"

#ifdef CONFIG_VERILATOR
	#include <verilated.h>
	// 包含fst的头文件
	#include "verilated_fst_c.h"
	#define MAX_TIME 20000

	vluint64_t sim_time = 0;

	void reset(Vtop *top, vluint64_t &sim_time)
	{
		top->rst = 0;
		if (sim_time < 10)
		{
			top->rst = 1;
		}
		
	}

	int main(int argc, char **argv)
	{
		// 传递参数给verilator,建议在创建任何模型之前使用
		Verilated::commandArgs(argc, argv);
		// 创建一个fst波形文件指针
		VerilatedFstC *tfp = new VerilatedFstC;
		// 构建一个名为top的仿真模型
		Vtop *top = new Vtop;

		// 启用跟踪
		Verilated::traceEverOn(true);
		// 采样深度为5
		top->trace(tfp, 5);
		// 打开波形文件
		tfp->open("waveform.fst");


		while (sim_time < MAX_TIME)
		{
			reset(top, sim_time);
			top->clk ^= 1;
			top->eval();
			if(top->clk == 1)
			{

			}
			tfp->dump(sim_time);
			sim_time++;
		}

		tfp->close();
		delete top;
		return 0;
	}
#endif

#ifdef CONFIG_NVBOARD
	#include <nvboard.h>
	static TOP_NAME dut;

	static void single_cycle() {
		dut.clk = 0; dut.eval();
		dut.clk = 1; dut.eval();
	}

	static void reset(int n) {
		dut.rst = 1;
		while (n -- > 0) single_cycle();
		dut.rst = 0;
	}
	// 函数声明
	void nvboard_bind_all_pins(TOP_NAME* top);
	  
	int main() {
		// 绑定所有的引脚
		nvboard_bind_all_pins(&dut);
		// nvboard初始化
		nvboard_init();
		
		reset(10);
		while(1) {
		  nvboard_update();
		  single_cycle();
		}
	  }
#endif
