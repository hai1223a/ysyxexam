#include "../../include/common.h"
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

static void Itrace(uint32_t inst_in, uint32_t pc_in)
{
  char *p = itrace_buf;
  p += snprintf(p, sizeof(itrace_buf), "0x%08x:", pc_in);
  int ilen = 4;
  int i;
  uint8_t *inst_s = (uint8_t *)&inst_in;
  for (i = ilen - 1; i >= 0; i--)
  {
    p += snprintf(p, 4, " %02x", inst_s[i]);
  }
  int ilen_max = 4;
  int space_len = ilen_max - ilen;
  if (space_len < 0)
    space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
  disassemble(p, itrace_buf + sizeof(itrace_buf) - p, pc_in, inst_s, 4);
  // 这里也是IRINGBUF部分的代码
  // ===============================================
  IRINGBUF.now_p = IRINGBUF.p;
  strcpy(IRINGBUF.iringbuf[IRINGBUF.p], itrace_buf);
  if (IRINGBUF.p < IRINGBUF_DEEPTH - 1)
    IRINGBUF.p++;
  else
    IRINGBUF.p = 0;
  // ===============================================
}

void Itrace_log(uint32_t inst_in, uint32_t pc_in, uint32_t inst_num)
{
  Itrace(inst_in, pc_in);
  log_write("%s\n", itrace_buf);
  if (inst_num < PRINT_INST_NUM)
    printf("%s\n", itrace_buf);
}
// mtrace
char mtrace_buf[128][4] = {0};

void add_mtrace(uint32_t addr, int type, uint32_t data, int mask)
{
  static size_t ptr = 0;
  char *p = mtrace_buf[ptr];
  size_t buf_len = sizeof(mtrace_buf) / ARRLEN(mtrace_buf);
  p += snprintf(p, buf_len, "%ld  %08x:  ", ptr, top->rootp->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc);
  p += snprintf(p, mtrace_buf[ptr] + buf_len - p, "%8x  ", addr);
  if (type == wen)
    p += snprintf(p, mtrace_buf[ptr] + buf_len - p, "write %08x %08x", data, mask);
  else if (type == ren)
    p += snprintf(p, mtrace_buf[ptr] + buf_len - p, "read  %08x %08x", data, mask);
  *p = '\0';
  if(ptr == ARRLEN(mtrace_buf) - 1) 
    ptr = 0;
  else
    ptr += 1; 
}

void printf_mtrace()
{
  printf(ANSI_FMT("mtrace 访存出错报告\n", ANSI_FG_MAGENTA));
  printf(ANSI_FMT("PC值         访存地址  操作  写入数据/读出数据 \n", ANSI_FG_MAGENTA));
  for(int i = 0; i < ARRLEN(mtrace_buf); i++) 
  {
    puts(mtrace_buf[i]);
  }
}

// ftrace
FUNC_FTRACE func_ftracer[128] = {0};
int FUNC_stack[4096] = {0};
char space[10] = {0};

// 修改 load_elf 函数
void load_elf(const std::string &elf_file)
{
  if (elf_file.empty())
  {
    Log("没有elf文件输入");
    return;
  }

  FILE *file = fopen(elf_file.c_str(), "rb");
  Assert(file, "无法打开elf文件");

  // 读取 ELF 文件头
  Elf32_Ehdr ehdr;
  if (fread(&ehdr, 1, sizeof(ehdr), file) != sizeof(ehdr))
  {
    printf("Failed to read ELF header\n");
    fclose(file);
    return;
  }

  // 检查 ELF 魔数
  if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0)
  {
    printf("Not a valid ELF file\n");
    fclose(file);
    return;
  }

  // 定位到节头表
  fseek(file, ehdr.e_shoff, SEEK_SET);

  // 使用 std::vector 替代 malloc
  std::vector<Elf32_Shdr> sh_table(ehdr.e_shnum);
  if (fread(sh_table.data(), ehdr.e_shentsize, ehdr.e_shnum, file) != ehdr.e_shnum)
  {
    printf("Failed to read section header table\n");
    fclose(file);
    return;
  }

  // 找到字符串表节（.strtab）
  std::string strtab;
  for (const auto &sh : sh_table)
  {
    if (sh.sh_type == SHT_STRTAB && &sh - sh_table.data() != ehdr.e_shstrndx)
    {
      strtab.resize(sh.sh_size);
      fseek(file, sh.sh_offset, SEEK_SET);
      if (fread(&strtab[0], 1, sh.sh_size, file) != sh.sh_size)
      {
        printf("Failed to read string table\n");
        fclose(file);
        return;
      }
      break;
    }
  }

  // 找到符号表节（.symtab）
  for (const auto &sh : sh_table)
  {
    if (sh.sh_type == SHT_SYMTAB)
    {
      size_t symtab_entry_count = sh.sh_size / sh.sh_entsize;

      // 使用 std::vector 替代 malloc
      std::vector<Elf32_Sym> symtab(symtab_entry_count);
      fseek(file, sh.sh_offset, SEEK_SET);
      if (fread(symtab.data(), sh.sh_entsize, symtab_entry_count, file) != symtab_entry_count)
      {
        printf("Failed to read symbol table\n");
        fclose(file);
        return;
      }

      // 遍历符号表,筛选各个函数名的入口地址
      for (size_t j = 0, k = 0; j < symtab_entry_count; j++)
      {
        if (ELF32_ST_TYPE(symtab[j].st_info) == STT_FUNC)
        {
          func_ftracer[k].addr = symtab[j].st_value;
          strncpy(func_ftracer[k].func_name, &strtab[symtab[j].st_name], sizeof(func_ftracer[k].func_name) - 1);
          func_ftracer[k].func_name[sizeof(func_ftracer[k].func_name) - 1] = '\0';
          k++;
        }
      }
      break;
    }
  }

  // 清理资源
  fclose(file);
}

FILE *ftracer_log_fp = NULL;
void init_ftracer_log(const char *ftrace_log_file)
{
  ftracer_log_fp = stdout;
  if (ftrace_log_file != NULL)
  {
    FILE *fp = fopen(ftrace_log_file, "w");
    Assert(fp, "无法打开日志文件 '%s'", ftrace_log_file);
    ftracer_log_fp = fp;
  }
  Log("Ftracer 日志被输出到了 %s", ftrace_log_file ? ftrace_log_file : "stdout");
}

void ftracer_log(uint32_t inst_in, uint32_t pc_in)
{
  static int p_stack = 0;

  // 识别 call 调用函数
  if (is_jal(inst_in) || is_jalr(inst_in))
  {
    for (int i = 0; i < ARRLEN(func_ftracer); i++)
    {
      if(func_ftracer[i].addr == 0) break;
      if (top->rootp->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc == func_ftracer[i].addr)
      {
        ftracer_write("0x%8x %*scall [%s @ 0x%8x]\n", pc_in, 4 * p_stack, " ", func_ftracer[i].func_name, top->rootp->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc);
        Assert(p_stack < ARRLEN(FUNC_stack), "ftracer 的返回函数堆栈溢出\n");
        FUNC_stack[p_stack++] = i;
      }
    }
  }
  // 识别 ret 返回函数
  if (is_ret(inst_in))
  {
    Assert(p_stack > 0, "ftracer 的返回函数堆栈为空\n");
    p_stack--;
    ftracer_write("0x%8x %*sret [%s @ 0x%8x]\n", pc_in, 4 * p_stack, " ", func_ftracer[FUNC_stack[p_stack]].func_name, get_reg(1));
  }
}