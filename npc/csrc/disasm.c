#include <dlfcn.h>
#include "../tool/capstone/repo/include/capstone/capstone.h"
#include "../include/common.h"

// 动态加载的函数指针
static size_t (*cs_disasm_dl)(csh handle, const uint8_t *code,
    size_t code_size, uint64_t address, size_t count, cs_insn **insn);
static void (*cs_free_dl)(cs_insn *insn, size_t count);
static csh handle;

// 动态加载 Capstone 库
void *load_capstone_library() {
  void *dl_handle = dlopen("tool/capstone/repo/libcapstone.so.5", RTLD_LAZY);
  if (!dl_handle) {
    fprintf(stderr, "Failed to load Capstone library: %s\n", dlerror());
    exit(1);
  }

  // 加载 cs_open 函数
  cs_err (*cs_open_dl)(cs_arch arch, cs_mode mode, csh *handle) = NULL;
  cs_open_dl = (cs_err (*)(cs_arch, cs_mode, csh *))dlsym(dl_handle, "cs_open");
  if (!cs_open_dl) {
    fprintf(stderr, "Failed to load function cs_open: %s\n", dlerror());
    exit(1);
  }

  // 加载 cs_disasm 函数
  cs_disasm_dl = (size_t (*)(csh, const uint8_t *, size_t, uint64_t, size_t, cs_insn **))dlsym(dl_handle, "cs_disasm");
  if (!cs_disasm_dl) {
    fprintf(stderr, "Failed to load function cs_disasm: %s\n", dlerror());
    exit(1);
  }

  // 加载 cs_free 函数
  cs_free_dl = (void (*)(cs_insn *, size_t))dlsym(dl_handle, "cs_free");
  if (!cs_free_dl) {
    fprintf(stderr, "Failed to load function cs_free: %s\n", dlerror());
    exit(1);
  }

  return cs_open_dl;
}

// 初始化 Capstone
void init_disasm() {
  void *cs_open_dl = load_capstone_library();

  cs_arch arch = CS_ARCH_RISCV;
  cs_mode mode = CS_MODE_RISCV32;

  int ret = ((cs_err (*)(cs_arch, cs_mode, csh *))cs_open_dl)(arch, mode, &handle);
  if (ret != CS_ERR_OK) {
    fprintf(stderr, "Failed to initialize Capstone: %d\n", ret);
    exit(1);
  }
}

// 反汇编指令
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte) {
  cs_insn *insn;
  size_t count = cs_disasm_dl(handle, code, nbyte, pc, 0, &insn);

  if (count == 0) {
    snprintf(str, size, "Failed to disassemble at 0x%lx", pc);
    return;
  }

  // 格式化反汇编结果
  int ret = snprintf(str, size, "%s", insn[0].mnemonic);
  if (insn[0].op_str[0] != '\0') {
    snprintf(str + ret, size - ret, "\t%s", insn[0].op_str);
  }

  // 释放资源
  cs_free_dl(insn, count);
}