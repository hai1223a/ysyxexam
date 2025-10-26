#include "../../include/common.h"
#include <stdio.h>
// 内存
uint8_t imem[CONFIG_IMEM_SIZE] __attribute((aligned(4096))) = {}; // 内存变量
uint8_t dmem[CONFIG_DMEM_SIZE] __attribute((aligned(4096))) = {}; // 内存变量

static inline uint8_t *imem_guest_to_host(uint32_t paddr) { return imem + paddr - CONFIG_IMEM_BASE; }
static inline uint8_t *dmem_guest_to_host(uint32_t paddr) { return dmem + paddr - CONFIG_DMEM_BASE; }
static inline uint8_t *sram_guest_to_host(uint32_t paddr) { 
    uint32_t offset = paddr - CONFIG_SRAM_BASE;
    uint32_t word_index = offset / 4;  // 每个 unsigned int 是 4 字节
    uint32_t byte_offset = offset % 4;
    
    // 获取对应字的引用，然后转换为字节指针
    unsigned int& word = SOC_SRAM[word_index];
    return reinterpret_cast<uint8_t*>(&word) + byte_offset;
}
static inline bool in_imem(uint32_t paddr) { return paddr - CONFIG_IMEM_BASE < CONFIG_IMEM_SIZE; }
static inline bool in_dmem(uint32_t paddr) { return paddr - CONFIG_DMEM_BASE < CONFIG_DMEM_SIZE; }
static inline bool in_sram(uint32_t paddr) { return paddr - CONFIG_SRAM_BASE < CONFIG_SRAM_SIZE; }


long init_imem(char *img_file)
{
  if (!img_file)
  {
    uint32_t *imem_w = (uint32_t *)imem;
    *imem_w++ = 0x23458593;
    *imem_w++ = 0x00100073; // ebreak
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

extern "C" int pmem_read(int raddr) {assert(0);}

extern "C" void pmem_write(int waddr, int wdata, int wmask) {assert(0);}

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

extern "C" void psram_read(int32_t addr, int32_t *data) {
  uint32_t raddr = addr & (~0x3);
  Assert((raddr < CONFIG_DMEM_SIZE), "PSRAM模块读地址越界");
  *data = *(int32_t *)(dmem + raddr);
}

extern "C" void psram_write(int32_t addr, int32_t data, int32_t len) {
  Assert((addr < CONFIG_DMEM_SIZE), "PSRAM模块写地址越界");
  switch (len)
  {
  case 1:  
    *(uint8_t *)(dmem + addr) = (uint8_t)data;  
    break;
  case 2:  
    *(uint16_t *)(dmem + addr) = (uint16_t)data;  
    break;
  case 4:  
    *(uint32_t *)(dmem + addr) = (uint32_t)data;  
    break;
  default:
    break;
  }
}

extern "C" void find_ebreak() {
  set_nemu_state(NPC_END, SOC_NPC, get_reg(10));
}

extern "C" void find_resp() {
  Log("NPC抛出Access Fault异常");
  set_nemu_state(NPC_END, SOC_NPC, 2);
}

extern "C" void find_addr_0() {
  Log("你正在对地址0进行读写");
  set_nemu_state(NPC_END, SOC_NPC, 3);
}

extern "C" void find_diff_skip() {
  if_skip = true;
}

NPC_perforcount npc_perC = {0};

extern "C" void lsu_get()          {npc_perC.lsu_count++;        }
extern "C" void bqu_get()          {npc_perC.bqu_count++;        }
extern "C" void csru_get()         {npc_perC.csru_count++;       }
extern "C" void alu_get()          {npc_perC.alu_count++;        }
extern "C" void ifu_get()          {npc_perC.ifu_count++;        }
extern "C" void ifu_cycle()        {npc_perC.ifu_cycle++;        }
extern "C" void icache_get()       {npc_perC.icache_count++;     }
extern "C" void icache_hit()       {npc_perC.icache_hit++;       }
extern "C" void icache_cycle()     {npc_perC.icache_cycle++;     }    
extern "C" void lsu_noclint_get()  {npc_perC.lsu_noclint_count++;}
extern "C" void dcache_get()       {npc_perC.dcache_count++;     }
extern "C" void dcache_hit()       {npc_perC.dcache_hit++;       }
extern "C" void lsu_noclint_cycle(){npc_perC.lsu_noclint_cycle++; }        
extern "C" void dcache_cycle()     {npc_perC.dcache_cycle++;     }    

uint32_t vaddr_read(uint32_t paddr)
{
  if (in_imem(paddr)) return *(uint32_t *)imem_guest_to_host(paddr);
  if (in_dmem(paddr)) return *(uint32_t *)dmem_guest_to_host(paddr);
  if (in_sram(paddr)) return *(uint32_t *)sram_guest_to_host(paddr);
  Assert(0, "你使用sdb查看的地址值不合法,addr = 0x%08x\n", paddr);
  return 0;
}