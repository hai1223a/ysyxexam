#include "Vtop.h"

#ifdef CONFIG_VERILATOR
	#include <verilated.h>
	// 包含fst的头文件
	#include "verilated_fst_c.h"
	#include <cstdlib>
	#include <assert.h>
	#define MAX_TIME 20

	vluint64_t sim_time = 0;

	void check_out_valid(Vtop *dut){
		int8_t Y,overflow,carry,zero;
		Y = 0;
		overflow = 0;
		carry = 0;
		zero =0;
		switch (dut->op_i)
		{
		case 0:
			Y = (int8_t)dut->A_i + (int8_t)dut->B_i;
			overflow = (Y > 7 || Y < -8) ? 1 : 0;
			zero = !Y;
			carry = (Y > 15) ? 1 : 0;
			break;
		case 1:	
			Y = (int8_t)dut->A_i - (int8_t)dut->B_i;
			overflow = (Y > 7 || Y < -8) ? 1 : 0;
			zero = !Y;
			carry = ((int8_t)dut->A_i < (int8_t)dut->B_i) ? 1 : 0;
			break;
		case 2:	
			Y = ~(dut->A_i);
			break;
		case 3:	
			Y = dut->A_i & dut->B_i;
			break;
		case 4:	
			Y = dut->A_i | dut->B_i;
			break;
		case 5:	
			Y = dut->A_i ^ dut->B_i;
			break;
		case 6:	
			Y = (dut->A_i < dut->B_i) ? 1 : 0;
			break;
		case 7:	
			Y = (dut->A_i == dut->B_i) ? 1 : 0;
			break;
		default:
			break;
		}
		printf("Y = %d, zero = %d, overflow_o = %d, carry_o = %d\n",Y,zero,overflow,carry);
		// assert(dut->out_o == Y);
		// assert(dut->zero_o == zero);
		// assert(dut->overflow_o == overflow);
		// assert(dut->carry_o == carry);
	}

	int main(int argc, char **argv)
	{
		srand (time(NULL));
		// 传递参数给verilator,建议在创建任何模型之前使用
		Verilated::commandArgs(argc, argv);
		// 创建一个fst波形文件指针
		VerilatedFstC *tfp = new VerilatedFstC;
		// 构建一个名为top的仿真模型
		Vtop *top = new Vtop;
		int8_t Y;
		// 启用跟踪
		Verilated::traceEverOn(true);
		// 采样深度为5
		top->trace(tfp, 5);
		// 打开波形文件
		tfp->open("waveform.fst");
		while (sim_time < MAX_TIME)
		{
			top->A_i = rand()%16-8;
			top->B_i = rand()%16-8;
			top->op_i = 0;
			top->eval();
			Y = (top->out_o < 7) ? top->out_o : (int8_t)top->out_o-16;
			printf("A = %d, B = %d, Y = %d\n", (int8_t)top->A_i, (int8_t)top->B_i, Y);
			check_out_valid(top);
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
