#include "Vtop.h"

#ifdef CONFIG_VERILATOR
	#include <verilated.h>
	// 包含fst的头文件
	#include "verilated_fst_c.h"
	#include <cstdlib>
	#include <assert.h>
	#define MAX_TIME 200

	vluint64_t sim_time = 0;


	int main(int argc, char **argv)
	{
		srand (time(NULL));
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
			top->clk_p ^= 1;
			if (sim_time > 10 && sim_time < 20)
			{
				top->rst_n = 1;
			}
			else
			{
				top->rst_n = 0;
			}
			top->eval();
			
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

	// 函数声明
	void nvboard_bind_all_pins(TOP_NAME* top);
	  
	int main() {
		// 绑定所有的引脚
		nvboard_bind_all_pins(&dut);
		// nvboard初始化
		nvboard_init();

		while(1) {
		  nvboard_update();
		  dut.eval();
		}
	  }
#endif
