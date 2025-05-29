#ifndef __TRACE_H__
#define __TRACE_H__

// itrace
#define IRINGBUF_DEEPTH 10
#define PRINT_INST_NUM 10
extern char itrace_buf[128];
void Itrace(uint32_t inst_in, uint32_t pc_in);
void print_iringbuf();
// mtrace
void add_mtrace();
void printf_mtrace();
// ftrace

#endif