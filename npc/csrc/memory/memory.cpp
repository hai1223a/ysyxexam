#include "../../include/common.h"
#include <stdio.h>

uint8_t pmem[CONFIG_MSIZE] __attribute((aligned(4096))) = {}; // 内存变量
uint8_t *guest_to_host(uint32_t paddr) { return pmem + paddr - CONFIG_MBASE; }
bool in_pmem(uint32_t paddr) { return paddr - CONFIG_MBASE < CONFIG_MSIZE; }

long init_pmem(char *img_file)
{
  if (!img_file)
  {
    uint32_t *pmem_w = (uint32_t *)pmem;
   *pmem_w++ = 0x00000297; // auipc t0,0
   *pmem_w++ = 0x02428293; // addi t0,t0,36      // t0 = 指令区首地址+36
   *pmem_w++ = 0x00100593; // li a1,1            // a1 = 1
  //  *pmem_w++ = 0x00b2a023; // sw  a1,0(t0)       // [t0+0] = a1 (把1写到数据区)
  //  *pmem_w++ = 0x0002a583; // lw  a1,0(t0)       // a1 = [t0+0] (从数据区读回a1)
   *pmem_w++ = 0x0040006f; // jal zero, +4       // 跳转到下一条（演示jal）
   *pmem_w++ = 0x00128293; // addi t0,t0,1       // t0 = t0 + 1
   *pmem_w++ = 0xfe529ae3; // bne a0,a1,-4       // 如果a0!=a1, 跳回前面
   *pmem_w++ = 0x00100073; // ebreak             // 终止
   *pmem_w++ = 0xdeadbeef; // 数据区内容
   *pmem_w++ = 0x12345678; // 数据区内容
    Log("没有给源文件, 程序使用了内置的代码.");
    return 20;
  }
  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("源文件是 %s, 文件大小为 %ld byte.", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp); 
  return size;
}

extern "C" int pmem_read(int raddr, int rmask)
{
  uint32_t addr = (uint32_t)raddr;
  uint32_t data;
  if(!top->reset) {
    if (likely(in_pmem(addr)))
    {
      data = *(uint32_t *)guest_to_host(addr);
      IFDEF(CONFIG_MTRACE, add_mtrace(addr, ren, data, rmask));
    }
#ifdef CONFIG_HAS_TIMER
    else if (addr == CONFIG_TIMER_BASE)
    {
      data = (uint32_t)get_time();
      IFDEF(CONFIG_MTRACE, add_mtrace(addr, ren, data, rmask));
    }
    else if (addr == (CONFIG_TIMER_BASE + 4))
    {
      data = get_time() >> 32;
      IFDEF(CONFIG_MTRACE, add_mtrace(addr, ren, data, rmask));
    }
#endif
    else
    {
      IFDEF(CONFIG_MTRACE, add_mtrace(addr, ren, 0xFFFFFFFF, 0x00000000));
      IFDEF(CONFIG_MTRACE, printf_mtrace());
      Assert(0, "你读的地址值不合法, 对齐前raddr = 0x%08x, 对齐后addr = 0x%08x\n", raddr, addr);
    }
  }
  else if(addr == RESET_VECTOR) {
    data = *(uint32_t *)guest_to_host(addr);
    IFDEF(CONFIG_MTRACE, add_mtrace(addr, ren, data, rmask));
  }
  return data;
}

extern "C" void pmem_write(int waddr, int wdata, int wmask)
{
  uint32_t addr = (uint32_t)waddr;
  IFDEF(CONFIG_MTRACE, add_mtrace(addr, wen, wdata, wmask));
  if (likely(in_pmem(addr)))
  {
    uint32_t *p = (uint32_t *)guest_to_host(addr);
    *p = (wdata & wmask) | *p & ~wmask;
  }
#ifdef CONFIG_HAS_SERIAL
  else if (addr == CONFIG_SERIAL_BASE)
  {
    Assert(wmask == 0xff, "你写串口的长度不对");
    if (top->clock == 1)
      putc((char)(wdata), stderr);
  }
#endif
  else
  {
    IFDEF(CONFIG_MTRACE, printf_mtrace());
    Assert(0, "你写的地址值不合法, 对齐前waddr = 0x%08x, 对齐后addr = 0x%08x\n", waddr, addr);
  }
}

extern "C" void flash_read(int32_t addr, int32_t *data) {
  uint32_t raddr = addr & (~0x3);
  *data = *(int32_t *)(pmem + raddr);
}
extern "C" void mrom_read(int32_t addr, int32_t *data) {
  uint32_t raddr = addr & (~0x3);
  *data = *(int32_t *)guest_to_host(raddr);
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

uint32_t vaddr_read(uint32_t paddr, int len)
{
  if (likely(in_pmem(paddr)))
  {
    uint8_t *addr = guest_to_host(paddr);
    switch (len)
    {
    case 1:
      return *(uint8_t *)addr;
    case 2:
      return *(uint16_t *)addr;
    case 4:
      return *(uint32_t *)addr;
    default:
      return 0;
    }
  }
  else
  {
    Assert(0, "你使用sdb查看的地址值不合法,addr = 0x%08x\n", paddr);
  }
}