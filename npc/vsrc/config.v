// 操作部件相关宏定义
`define ysyx_25050136_FU_NUM 4
`define ysyx_25050136_ALU 0
`define ysyx_25050136_LSU 1
`define ysyx_25050136_BQU 2
`define ysyx_25050136_CSRU 3 

`define ysyx_25050136_ALU_OP_NUM 15
`define ysyx_25050136_ALU_NOP   0
`define ysyx_25050136_ALU_ADD   1
`define ysyx_25050136_ALU_SUB   2
`define ysyx_25050136_ALU_XOR   3
`define ysyx_25050136_ALU_OR    4
`define ysyx_25050136_ALU_AND   5
`define ysyx_25050136_ALU_EQ    6
`define ysyx_25050136_ALU_NEQ   7
`define ysyx_25050136_ALU_LEQ_U 8
`define ysyx_25050136_ALU_GEQ_U 9
`define ysyx_25050136_ALU_LEQ   10
`define ysyx_25050136_ALU_GEQ   11
`define ysyx_25050136_ALU_SRA   12
`define ysyx_25050136_ALU_SLL   13
`define ysyx_25050136_ALU_SRL   14

`define ysyx_25050136_BQU_OP_NUM 3
`define ysyx_25050136_BQU_JALR  0
`define ysyx_25050136_BQU_JAL   1
`define ysyx_25050136_BQU_OTHER 2

`define ysyx_25050136_LSU_OP_NUM 2
`define ysyx_25050136_LSU_LOAD  0
`define ysyx_25050136_LSU_STORE 1

`define ysyx_25050136_CSRU_OP_NUM 6
`define ysyx_25050136_CSRU_CSRRW  0
`define ysyx_25050136_CSRU_CSRRS  1
`define ysyx_25050136_CSRU_CSRRC  2
`define ysyx_25050136_CSRU_MRET   3
`define ysyx_25050136_CSRU_ECALL  4
`define ysyx_25050136_CSRU_EBREAK 5

// 综合时注释
`define VERILATOR_DPIC 