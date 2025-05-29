#include "../include/common.h"
#include <elf.h>
// itrace
char itrace_buf[128] = {0};

struct
{
    uint8_t now_p;
    uint8_t p;
    char iringbuf[IRINGBUF_DEEPTH][128];
} IRINGBUF = {0};

void print_iringbuf()
{
    printf(ANSI_FMT("iringbuf打印, --->执行过的最后一条指令\n", ANSI_FG_MAGENTA));
    for (int i = 0; i < IRINGBUF_DEEPTH; i++)
    {
        if (i == IRINGBUF.now_p) 
            printf(ANSI_FMT("---> %s\n", ANSI_FG_MAGENTA), IRINGBUF.iringbuf[i]);
        else
            printf(">>>> %s\n", IRINGBUF.iringbuf[i]);
    }
}

void Itrace(uint32_t inst_in, uint32_t pc_in)
{
    char *p = itrace_buf;
    p += snprintf(p, sizeof(itrace_buf), "0x%08x:", pc_in);
    int ilen = 4;
    int i;
    uint8_t *inst_s = (uint8_t *)&inst_in;
    for (i = ilen - 1; i >= 0; i --) {
      p += snprintf(p, 4, " %02x", inst_s[i]);
    }
    int ilen_max = 4;
    int space_len = ilen_max - ilen;
    if (space_len < 0) space_len = 0;
    space_len = space_len * 3 + 1;
    memset(p, ' ', space_len);
    p += space_len;
    disassemble(p, itrace_buf + sizeof(itrace_buf) - p, pc_in, inst_s, 4);
    // 这里也是IRINGBUF部分的代码
    // ===============================================
    IRINGBUF.now_p = IRINGBUF.p;
    strcpy(IRINGBUF.iringbuf[IRINGBUF.p], itrace_buf);
    if(IRINGBUF.p < IRINGBUF_DEEPTH - 1)
      IRINGBUF.p++;
    else
      IRINGBUF.p = 0;
    // ===============================================
}

// mtrace
char mtrace_buf[128] = {0};

void add_mtrace()
{
  char *p = mtrace_buf;
  p += snprintf(p, sizeof(mtrace_buf), "0x%08x:  ", ysyx_25050136_NPC->pc_o);
  p += snprintf(p, mtrace_buf + sizeof(mtrace_buf) - p, "%8x  ", ysyx_25050136_NPC->mem_addr_o);
  if (ysyx_25050136_NPC->mem_wen_o)
    p += snprintf(p, mtrace_buf + sizeof(mtrace_buf) - p, "write  %d     %x", ysyx_25050136_NPC->mem_len_o, ysyx_25050136_NPC->mem_wdata_o);
  else if (ysyx_25050136_NPC->mem_ren_o)
    p += snprintf(p, mtrace_buf + sizeof(mtrace_buf) - p, "read  %d", ysyx_25050136_NPC->mem_len_o);
  *p = '\0';
}

void printf_mtrace()
{
  printf(ANSI_FMT("mtrace 访存出错报告\n", ANSI_FG_MAGENTA));
  printf(ANSI_FMT("PC值         访存地址  操作   字节  写入数据\n", ANSI_FG_MAGENTA));
  puts(mtrace_buf);
}

// ftrace
struct FUNC_FTRACE{
  uint32_t addr;
  char func_name[16];
} FUNC_FTRACER[10] = {0};

// 修改 load_elf 函数
void load_elf(const std::string &elf_file) {
  if (elf_file.empty()) {
    Log("没有elf文件输入\n");
    return;
  }

  FILE *file = fopen(elf_file.c_str(), "rb");
  Assert(file, "无法打开elf文件");

  // 读取 ELF 文件头
  Elf32_Ehdr ehdr;
  if (fread(&ehdr, 1, sizeof(ehdr), file) != sizeof(ehdr)) {
    printf("Failed to read ELF header\n");
    fclose(file);
    return;
  }

  // 检查 ELF 魔数
  if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0) {
    printf("Not a valid ELF file\n");
    fclose(file);
    return;
  }

  // 定位到节头表
  fseek(file, ehdr.e_shoff, SEEK_SET);

  // 使用 std::vector 替代 malloc
  std::vector<Elf32_Shdr> sh_table(ehdr.e_shnum);
  if (fread(sh_table.data(), ehdr.e_shentsize, ehdr.e_shnum, file) != ehdr.e_shnum) {
    printf("Failed to read section header table\n");
    fclose(file);
    return;
  }

  // 找到字符串表节（.strtab）
  std::string strtab;
  for (const auto &sh : sh_table) {
    if (sh.sh_type == SHT_STRTAB && &sh - sh_table.data() != ehdr.e_shstrndx) {
      strtab.resize(sh.sh_size);
      fseek(file, sh.sh_offset, SEEK_SET);
      if (fread(&strtab[0], 1, sh.sh_size, file) != sh.sh_size) {
        printf("Failed to read string table\n");
        fclose(file);
        return;
      }
      break;
    }
  }

  // 找到符号表节（.symtab）
  for (const auto &sh : sh_table) {
    if (sh.sh_type == SHT_SYMTAB) {
      size_t symtab_entry_count = sh.sh_size / sh.sh_entsize;

      // 使用 std::vector 替代 malloc
      std::vector<Elf32_Sym> symtab(symtab_entry_count);
      fseek(file, sh.sh_offset, SEEK_SET);
      if (fread(symtab.data(), sh.sh_entsize, symtab_entry_count, file) != symtab_entry_count) {
        printf("Failed to read symbol table\n");
        fclose(file);
        return;
      }

      // 遍历符号表,筛选各个函数名的入口地址
      for (size_t j = 0, k = 0; j < symtab_entry_count; j++) {
        if (ELF32_ST_TYPE(symtab[j].st_info) == STT_FUNC) {
          FUNC_FTRACER[k].addr = symtab[j].st_value;
          strncpy(FUNC_FTRACER[k].func_name, &strtab[symtab[j].st_name], sizeof(FUNC_FTRACER[k].func_name) - 1);
          FUNC_FTRACER[k].func_name[sizeof(FUNC_FTRACER[k].func_name) - 1] = '\0';
          k++;
        }
      }
      break;
    }
  }

  // 清理资源
  fclose(file);
}
