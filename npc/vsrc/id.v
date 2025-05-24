`include "../vsrc/config.v"
module ysyx_25050136_ID
    #(
         ADDR_WIDTH = 4,
         DATA_WIDTH = 32
     )
     (
         input  [31:0]                            inst_i,
         input  [31:0]                              pc_i,
         input  [31:0]                      static_npc_i,
         input  [DATA_WIDTH-1:0]                rdata1_i,
         output [ADDR_WIDTH-1:0]                raddr1_o,
         input  [DATA_WIDTH-1:0]                rdata2_i,
         output [ADDR_WIDTH-1:0]                raddr2_o,
         output [`ysyx_25050136_FU_NUM-1:0]         fu_o,
         output [`ysyx_25050136_ALU_OP_NUM-1:0] alu_op_o,
         output [`ysyx_25050136_LSU_OP_NUM-1:0] lsu_op_o,
         output [`ysyx_25050136_BQU_OP_NUM-1:0] bqu_op_o,
         output [DATA_WIDTH-1:0]                   op1_o,
         output [DATA_WIDTH-1:0]                   op2_o,
         output [DATA_WIDTH-1:0]                   op3_o,
         output [DATA_WIDTH-1:0]                   op4_o,
         output [DATA_WIDTH-1:0]                   op5_o,
         output [2:0]                          mem_len_o,
         output                             mem_signed_o,
         output [ADDR_WIDTH-1:0]                    rd_o,
         output                                  rd_en_o
     );

    wire [6:0] opcode = inst_i[6:0];
    wire [4:0] rd = inst_i[11:7];
    wire [4:0] rs1 = inst_i[19:15];
    wire [4:0] rs2 = inst_i[24:20];
    wire [2:0] funct3 = inst_i[14:12];
    wire [6:0] funct7 = inst_i[31:25];

    // 这一部分用于译码,识别指令,得到指令类型和指令名称
    //=========================================
    // opcode判断
    wire type_load   = (opcode == 7'b0000011);
    wire type_op_imm = (opcode == 7'b0010011);
    wire type_auipc  = (opcode == 7'b0010111);
    wire type_store  = (opcode == 7'b0100011);
    wire type_op     = (opcode == 7'b0110011);
    wire type_lui    = (opcode == 7'b0110111);
    wire type_branch = (opcode == 7'b1100011);
    wire type_jalr   = (opcode == 7'b1100111);
    wire type_jal    = (opcode == 7'b1101111);
    // funct3判断
    wire funct3_000  = (funct3 == 3'b000);
    wire funct3_001  = (funct3 == 3'b001);
    wire funct3_010  = (funct3 == 3'b010);
    wire funct3_011  = (funct3 == 3'b011);
    wire funct3_100  = (funct3 == 3'b100);
    wire funct3_101  = (funct3 == 3'b101);
    wire funct3_110  = (funct3 == 3'b110);
    wire funct3_111  = (funct3 == 3'b111);
    // funt7判断
    wire funct7_0000000 = (funct7 == 7'b0000000);
    wire funct7_0100000 = (funct7 == 7'b0100000);
    // 具体指令判断
    wire inst_auipc = type_auipc;
    wire inst_lui = type_lui;
    wire inst_jal = type_jal;
    wire inst_jalr = type_jalr;
    wire inst_addi = type_op_imm & funct3_000;
    wire inst_sw = type_store & funct3_010;
    wire inst_ebreak = (inst_i == 32'h00100073);
    // 指令类型判断
    wire inst_Rtype = type_op;
    wire inst_Itype = type_op_imm | type_load | type_jalr;
    wire inst_Stype = type_store;
    wire inst_Utype = type_auipc | type_lui;
    wire inst_Btype = type_branch;
    wire inst_Jtype = type_jal;
    //=========================================
    // 下面用于得到立即数和读操作数
    //=========================================
    wire [31:0] immI = {{20{inst_i[31]}}, inst_i[31:20]};
    wire [31:0] immS = {{20{inst_i[31]}}, inst_i[31:25], inst_i[11:7]};
    wire [31:0] immB = {{20{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};
    wire [31:0] immU = {inst_i[31:12], 12'h0};
    wire [31:0] immJ = {{12{inst_i[31]}}, inst_i[19:12], inst_i[20], inst_i[30:21], 1'b0};
    wire [31:0] imm = inst_Itype ? immI : (inst_Stype ? immS :
                     (inst_Utype ? immU : (inst_Btype ? immB : 
                     (inst_Jtype ? immJ : 0))));

    assign raddr1_o = rs1;
    assign raddr2_o = rs2;
    //=========================================
    // 下面用于选择工作部件,相关操作,对应操作数,判断空指令
    //=========================================
    // 选择工作部件
    assign fu_o[`ysyx_25050136_ALU] = 1;
    assign fu_o[`ysyx_25050136_LSU] = type_store | type_load;
    assign fu_o[`ysyx_25050136_BQU] = type_jalr | type_jal | type_branch;
    // 选择ALU相关操作
    assign alu_op_o[`ysyx_25050136_ALU_NOP] = type_jal | type_jalr | type_lui;
    assign alu_op_o[`ysyx_25050136_ALU_ADD] = type_auipc | type_store | type_load | inst_addi;
    // 选择BQU相关操作
    assign bqu_op_o[`ysyx_25050136_BQU_JALR]  = type_jalr;
    assign bqu_op_o[`ysyx_25050136_BQU_JAL]   = type_jal;
    assign bqu_op_o[`ysyx_25050136_BQU_OTHER] = type_branch;
    // 选择LSU相关操作
    assign lsu_op_o[`ysyx_25050136_LSU_LOAD] = type_load;
    assign lsu_op_o[`ysyx_25050136_LSU_STORE] = type_store;
    // 选择ALU的操作数
    assign op1_o = inst_lui ? imm : (inst_auipc ? pc_i :
                  ((inst_jal | inst_jalr) ? static_npc_i : rdata1_i));
    assign op2_o = (type_op | type_branch) ? rdata2_i : 
                  ((type_store | type_load | type_op_imm | type_auipc) ? imm : 0);
    // 选择BQU的操作数
    assign op3_o = type_jalr ? rdata1_i : pc_i;
    assign op4_o = imm;
    // 选择LSU
    assign op5_o = rdata2_i;
    assign mem_len_o = 4;
    assign mem_signed_o = 1;
    // 写回寄存器地址
    assign rd_o  = rd;
    assign rd_en_o = (type_store | type_branch) ? 0 : 1;
    //=========================================
endmodule //ysyx_25050136_ID
