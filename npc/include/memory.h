#ifndef __MEMORY_H__
#define __MEMORY_H__

#define RESET_VECTOR CONFIG_IMEM_BASE              // 程序复位地址
extern uint8_t imem[CONFIG_IMEM_SIZE] __attribute((aligned(4096))); // 程序存储变量

enum {
    wen, ren
};

typedef struct {
  uint64_t ifu_count;         // 取指数量
  uint64_t lsu_count;         // 访存操作数量
  uint64_t bqu_count;         // 跳转操作数量
  uint64_t csru_count;        // CSR操作数量
  uint64_t alu_count;         // 其他操作数量
  uint64_t ifu_cycle;         // 取指总周期
  uint64_t icache_count;      // icache取指数量
  uint64_t icache_cycle;      // icache总周期
  uint64_t icache_hit;        // icache命中数量
  uint64_t lsu_noclint_count; // 访存数量， 不包含对clint的访问 
  uint64_t lsu_noclint_cycle; // 访存总周期, 不包含对clint的访问
  uint64_t dcache_count;      // dcache访存数量
  uint64_t dcache_cycle;      // dcache总周期
  uint64_t dcache_hit;        // dcache命中数量
} NPC_perforcount;

extern NPC_perforcount npc_perC;
long init_imem(char *img_file);
uint32_t vaddr_read(uint32_t paddr);


#endif