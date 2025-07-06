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
    *pmem_w++ = 0x00000297; // auipc t0,0
    *pmem_w++ = 0x00000297; // auipc t0,0
    *pmem_w++ = 0x00000297; // auipc t0,0
    *pmem_w++ = 0x00000297; // auipc t0,0
    *pmem_w++ = 0x00028823; // sb  zero,16(t0)
    *pmem_w++ = 0x0102c503; // lbu a0,16(t0)
    *pmem_w++ = 0x00100073; // ebreak (used as nemu_trap)
    *pmem_w++ = 0xdeadbeef; // some data
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
extern "C" int pmem_read(int raddr)
{
  if(!ysyx_25050136_NPC->reset) {
    uint32_t addr = (uint32_t)raddr & ~0x3u;
    uint32_t data;
    IFDEF(CONFIG_MTRACE, add_mtrace());
    if (likely(in_pmem(addr)))
    {
      data = *(uint32_t *)guest_to_host(addr);
    }
  #ifdef CONFIG_HAS_TIMER
    else if (ysyx_25050136_NPC->mem_addr_o == CONFIG_TIMER_BASE)
    {
      data = (uint32_t)get_time();
    }
    else if (ysyx_25050136_NPC->mem_addr_o == (CONFIG_TIMER_BASE + 4))
    {
      data = get_time() >> 32;
    }
  #endif
    else
    {
      IFDEF(CONFIG_MTRACE, printf_mtrace());
      Assert(0, "你访存的地址值不合法,raddr = 0x%08x,addr = 0x%08x\n", raddr, addr);
    }
    return data;
  }
  if(raddr == RESET_VECTOR) return *(uint32_t *)guest_to_host(raddr);
  return 0;
}

extern "C" void pmem_write(int waddr, int wdata, char wmask)
{
  uint32_t addr = waddr & ~0x3u;
  IFDEF(CONFIG_MTRACE, add_mtrace());
  if (likely(in_pmem(addr)))
  {
    uint8_t *p = guest_to_host(addr);
    for (int i = 0; i < 4; i++)
    {
      if (wmask & (1 << i))
      {
        p[i] = (wdata >> (8 * i)) & 0xff;
      }
    }
  }
#ifdef CONFIG_HAS_SERIAL
  else if (ysyx_25050136_NPC->mem_addr_o == CONFIG_SERIAL_BASE)
  {
    Assert(ysyx_25050136_NPC->mem_wmask_o == 1, "你写串口的长度不对");
    if (ysyx_25050136_NPC->clk == 1)
      putc((char)(ysyx_25050136_NPC->mem_wdata_o), stderr);
  }
#endif
  else
  {
    IFDEF(CONFIG_MTRACE, printf_mtrace());
    Assert(0, "你访存的地址值不合法,raddr = 0x%08x,addr = 0x%08x\n", waddr, addr);
  }
}

extern "C" void find_ebreak() {
  set_nemu_state(NPC_END, ysyx_25050136_NPC->pc_o, get_reg(10));
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