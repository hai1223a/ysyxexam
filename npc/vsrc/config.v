// 操作部件相关宏定义
`define ysyx_25050136_ALU_OP_NUM 11
`define ysyx_25050136_ALU_ADD    0
`define ysyx_25050136_ALU_SUB    1
`define ysyx_25050136_ALU_XOR    2
`define ysyx_25050136_ALU_OR     3
`define ysyx_25050136_ALU_AND    4
`define ysyx_25050136_ALU_LEQ_U  5
`define ysyx_25050136_ALU_LEQ    6
`define ysyx_25050136_ALU_SRA    7
`define ysyx_25050136_ALU_SLL    8
`define ysyx_25050136_ALU_SRL    9
`define ysyx_25050136_ALU_OPD2   10


`define ysyx_25050136_CSRU_OP_NUM 5
`define ysyx_25050136_CSRU_CSRRW  0
`define ysyx_25050136_CSRU_CSRRS  1
`define ysyx_25050136_CSRU_CSRRC  2
`define ysyx_25050136_CSRU_MRET   3
`define ysyx_25050136_CSRU_ECALL  4

`ifdef VERILATOR
`define ysyx_25050136_DBG_NUM 5
`define ysyx_25050136_DBG_EBREAK 0
`define ysyx_25050136_DBG_ALU  1
`define ysyx_25050136_DBG_CSRU 2
`define ysyx_25050136_DBG_LSU  3
`define ysyx_25050136_DBG_BQU  4
`endif
