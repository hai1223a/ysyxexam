#include "../../include/common.h"
#include <stdio.h>
// 内存
uint8_t imem[CONFIG_IMEM_SIZE] __attribute((aligned(4096))) = {}; // 内存变量
uint8_t dmem[CONFIG_DMEM_SIZE] __attribute((aligned(4096))) = {}; // 内存变量

static inline uint8_t *imem_guest_to_host(uint32_t paddr) { return imem + paddr - CONFIG_IMEM_BASE; }
static inline uint8_t *dmem_guest_to_host(uint32_t paddr) { return dmem + paddr - CONFIG_DMEM_BASE; }

static inline bool in_imem(uint32_t paddr) { return paddr - CONFIG_IMEM_BASE < CONFIG_IMEM_SIZE; }
static inline bool in_dmem(uint32_t paddr) { return paddr - CONFIG_DMEM_BASE < CONFIG_DMEM_SIZE; }

long init_imem(char *img_file)
{
  if (!img_file)
  {
    uint32_t *imem_w = (uint32_t *)imem;
   *imem_w++ = 0x00000297; // auipc t0,0
   *imem_w++ = 0x02428293; // addi t0,t0,36      // t0 = 指令区首地址+36
   *imem_w++ = 0x00100593; // li a1,1            // a1 = 1
   *imem_w++ = 0x00b2a023; // sw  a1,0(t0)       // [t0+0] = a1 (把1写到数据区)
   *imem_w++ = 0x0002a583; // lw  a1,0(t0)       // a1 = [t0+0] (从数据区读回a1)
   *imem_w++ = 0x0040006f; // jal zero, +4       // 跳转到下一条（演示jal）
   *imem_w++ = 0x00128293; // addi t0,t0,1       // t0 = t0 + 1
   *imem_w++ = 0xfe529ae3; // bne a0,a1,-4       // 如果a0!=a1, 跳回前面
   *imem_w++ = 0x00100073; // ebreak             // 终止
   *imem_w++ = 0xdeadbeef; // 数据区内容
   *imem_w++ = 0x12345678; // 数据区内容
    Log("没有给源文件, 程序使用了内置的代码.");
    return 20;
  }
  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("源文件是 %s, 文件大小为 %ld byte.", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(imem, size, 1, fp);
  assert(ret == 1);

  fclose(fp); 
  return size;
}

extern "C" void flash_read(int32_t addr, int32_t *data) {
  uint32_t raddr = addr & (~0x3);
  Assert((raddr < CONFIG_IMEM_SIZE), "FLASH模块读地址越界");
  *data = *(int32_t *)(imem + raddr);
}
extern "C" void mrom_read(int32_t addr, int32_t *data) {
  uint32_t raddr = addr & (~0x3);
  Assert(in_imem(raddr), "MROM模块读地址越界");
  *data = *(int32_t *)imem_guest_to_host(raddr);
}

extern "C" void find_ebreak() {
  set_nemu_state(NPC_END, SOC_PC, get_reg(10));
}

extern "C" void find_resp() {
  Log("NPC抛出Access Fault异常");
  set_nemu_state(NPC_END, SOC_PC, 2);
}

extern "C" void find_addr_0() {
  Log("你正在对地址0进行读写");
    set_nemu_state(NPC_END, SOC_PC, 3);
}

uint32_t vaddr_read(uint32_t paddr)
{
  Assert(in_imem(paddr) | in_dmem(paddr), "你使用sdb查看的地址值不合法,addr = 0x%08x\n", paddr);
  if (likely(in_imem(paddr))) return *(uint32_t *)imem_guest_to_host(paddr);
  if (likely(in_dmem(paddr))) return *(uint32_t *)dmem_guest_to_host(paddr);
}