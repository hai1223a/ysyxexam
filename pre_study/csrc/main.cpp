#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"

#define CONFIG_FST_WAVE_TRACE 0
#define CONFIG_NVBOARD 1
#define CONFIG_VERILATOR 0

#if CONFIG_VERILATOR
	#include <verilated.h>
#endif

#if CONFIG_NVBOARD
	#include <nvboard.h>
	static TOP_NAME dut;
#endif

#if CONFIG_FST_WAVE_TRACE
// 包含fst的头文件
#include "verilated_fst_c.h"
// 创建一个fst波形文件指针
VerilatedFstC *tfp = new VerilatedFstC;
#endif 

#if CONFIG_VERILATOR
	int main(int argc, char **argv)
	{
		// contextp用来保存仿真的时间
		VerilatedContext *contextp = new VerilatedContext;
		// 传递参数给verilator,建议在创建任何模型之前使用
		contextp->commandArgs(argc, argv);
		// 构建一个名为top的仿真模型
		Vtop *top = new Vtop{contextp};
		#if CONFIG_FST_WAVE_TRACE
			// 启用跟踪
			contextp->traceEverOn(true);
			// 采样深度为99
			top->trace(tfp, 99);
			// 打开波形文件
			tfp->open("top_wave.fst");
		#endif
		for(int i = 0; i < 10; i=i+2) {
		int a = rand() & 1;
		int b = rand() & 1;
		top->a = a;
		top->b = b;
		top->eval();
		printf("a = %d, b = %d, f = %d\n", a, b, top->f);
		assert(top->f == (a ^ b));
		#if CONFIG_FST_WAVE_TRACE
			tfp->dump(i);
		#endif
		}
		
		//仿真结束的善后工作
		#if CONFIG_FST_WAVE_TRACE
			// 关闭波形文件
			tfp->close();
		#endif
		// 清理top仿真模型，并销毁相关指针，并将指针变为空指针
		top->final();
		delete top;
		top = nullptr;
		delete contextp;
		contextp = nullptr;
		
		return 0;
	}
#endif

#if CONFIG_NVBOARD
	void nvboard_bind_all_pins(TOP_NAME* top);
	  
	int main() {
		nvboard_bind_all_pins(&dut);
		nvboard_init();
		dut.a = 0;
		dut.b = 0;
		while(1) {
		  nvboard_update();
		  dut.eval();
		}

		nvboard_quit();
	  }
#endif
