#include "Vtop.h"

#ifdef CONFIG_VERILATOR
	#include <verilated.h>
	#include "verilated_fst_c.h"
	#include <assert.h>

	#define MAX_TIME 20000

	vluint64_t sim_time = 0;

	int main(int argc, char **argv)
	{
		// 为rand()设置种子
		srand (time(NULL));                         
		// 传递参数给verilator,建议在创建任何模型之前使用
		Verilated::commandArgs(argc, argv);
		// 构建一个名为top的仿真模型
		Vtop *top = new Vtop;
		VerilatedFstC *tfp = new VerilatedFstC;
	
		// 启用跟踪
		Verilated::traceEverOn(true);
		// 采样深度为5
		top->trace(tfp, 5);
		// 打开波形文件
		tfp->open("waveform.fst");
	
		while (sim_time < MAX_TIME)
		{
			top->a = rand()%2;
			top->b = rand()%2;
			int f = top->a ^ top->b; 
			top->eval();
			assert(top->f == f);
			tfp->dump(sim_time);
			sim_time++;
			/* code */
		}
		tfp->close();
		return 0;
	}
#endif

#if CONFIG_NVBOARD
	#include <nvboard.h>
	static TOP_NAME dut;
	
	void nvboard_bind_all_pins(TOP_NAME* top);
	  
	int main() {
		nvboard_bind_all_pins(&dut);
		nvboard_init();
		while(1) {
		  nvboard_update();
		  dut.eval();
		}
	  }
#endif
