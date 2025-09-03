`include "config.v"
module ysyx_25050136_ID
    #(
         ADDR_WIDTH = 5,
         DATA_WIDTH = 32
     )
     (
         input      [31:0]                                inst_i,
         input      [DATA_WIDTH-1:0]                        pc_i,
         input      [DATA_WIDTH-1:0]                static_npc_i,
         input      [DATA_WIDTH-1:0]                    rdata1_i,
         output     [ADDR_WIDTH-1:0]                    raddr1_o,
         input      [DATA_WIDTH-1:0]                    rdata2_i,
         output     [ADDR_WIDTH-1:0]                    raddr2_o,
         output     [`ysyx_25050136_FU_NUM-1:0]             fu_o,
         output     [`ysyx_25050136_ALU_OP_NUM-1:0]     alu_op_o,
         output     [`ysyx_25050136_LSU_OP_NUM-1:0]     lsu_op_o,
         output     [`ysyx_25050136_BQU_OP_NUM-1:0]     bqu_op_o,
         output     [`ysyx_25050136_CSRU_OP_NUM-1:0]   csru_op_o,
         output     [DATA_WIDTH-1:0]                  alu_opd1_o,
         output     [DATA_WIDTH-1:0]                  alu_opd2_o,
         output     [DATA_WIDTH-1:0]                  bqu_opd1_o,
         output     [DATA_WIDTH-1:0]                  bqu_opd2_o,
         output     [DATA_WIDTH-1:0]                  lsu_opd1_o,
         output     [DATA_WIDTH-1:0]                 csru_opd1_o,
         output     [11:0]                           csru_opd2_o,
         output                                       csru_ren_o,
         output                                       csru_wen_o,
         output     [3:0]                             mem_mask_o,
         output                                     mem_signed_o,
         output     [ADDR_WIDTH-1:0]                        rd_o,
         output                                          rd_en_o
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
    wire type_system = (opcode == 7'b1110011);
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
    wire inst_lui = type_lui;
    wire inst_auipc = type_auipc;
    wire inst_jal = type_jal;
    wire inst_jalr = type_jalr;
    wire inst_beq = type_branch & funct3_000;
    wire inst_bne = type_branch & funct3_001;
    wire inst_blt = type_branch & funct3_100;
    wire inst_bge = type_branch & funct3_101;
    wire inst_bltu = type_branch & funct3_110;
    wire inst_bgeu = type_branch & funct3_111;
    wire inst_lb = type_load & funct3_000;
    wire inst_lh = type_load & funct3_001;
    wire inst_lw = type_load & funct3_010;
    wire inst_lbu = type_load & funct3_100;
    wire inst_lhu = type_load & funct3_101;
    wire inst_sb = type_store & funct3_000;
    wire inst_sh = type_store & funct3_001;
    wire inst_sw = type_store & funct3_010;
    wire inst_addi = type_op_imm & funct3_000;
    wire inst_slti = type_op_imm & funct3_010;
    wire inst_sltiu = type_op_imm & funct3_011;
    wire inst_xori = type_op_imm & funct3_100;
    wire inst_ori = type_op_imm & funct3_110;
    wire inst_andi = type_op_imm & funct3_111;
    wire inst_slli = type_op_imm & funct3_001;
    wire inst_srli = type_op_imm & funct3_101 & funct7_0000000;
    wire inst_srai = type_op_imm & funct3_101 & funct7_0100000;
    wire inst_add = type_op & funct3_000 & funct7_0000000;
    wire inst_sub = type_op & funct3_000 & funct7_0100000;
    wire inst_sll = type_op & funct3_001;
    wire inst_slt = type_op & funct3_010;
    wire inst_sltu = type_op & funct3_011;
    wire inst_xor = type_op & funct3_100;
    wire inst_srl = type_op & funct3_101;
    wire inst_sra = type_op & funct3_101 & funct7_0100000;
    wire inst_or = type_op & funct3_110;
    wire inst_and = type_op & funct3_111;
    wire inst_csrrw = type_system & funct3_001;
    wire inst_csrrs = type_system & funct3_010;
    wire inst_csrrc = type_system & funct3_011;
    wire inst_csrrwi = type_system & funct3_101;
    wire inst_csrrsi = type_system & funct3_110;
    wire inst_csrrci = type_system & funct3_011;
    wire inst_mret = (inst_i == 32'h30200073);
    wire inst_ecall = (inst_i == 32'h00000073);
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
    wire [31:0] immI = inst_srai ? {27'd0, inst_i[24:20]} : {{20{inst_i[31]}}, inst_i[31:20]};
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
    assign fu_o[`ysyx_25050136_ALU] = ~(inst_csrrw | inst_csrrs | inst_csrrc | inst_csrrwi | inst_csrrsi | inst_csrrci);
    assign fu_o[`ysyx_25050136_LSU] = type_store | type_load;
    assign fu_o[`ysyx_25050136_BQU] = type_jalr | type_jal | type_branch;
    assign fu_o[`ysyx_25050136_CSRU] = inst_csrrw | inst_csrrs | inst_csrrc | inst_csrrwi | inst_csrrsi | inst_csrrci;
    // 选择ALU相关操作
    assign alu_op_o[`ysyx_25050136_ALU_NOP]   = type_jal | type_jalr | type_lui;
    assign alu_op_o[`ysyx_25050136_ALU_ADD]   = type_auipc | type_store | type_load | inst_addi | inst_add;
    assign alu_op_o[`ysyx_25050136_ALU_SUB]   = inst_sub;
    assign alu_op_o[`ysyx_25050136_ALU_XOR]   = inst_xor | inst_xori;
    assign alu_op_o[`ysyx_25050136_ALU_OR]    = inst_or | inst_ori;
    assign alu_op_o[`ysyx_25050136_ALU_AND]   = inst_and | inst_andi;
    assign alu_op_o[`ysyx_25050136_ALU_EQ]    = inst_beq;
    assign alu_op_o[`ysyx_25050136_ALU_NEQ]   = inst_bne;
    assign alu_op_o[`ysyx_25050136_ALU_LEQ_U] = inst_bltu | inst_sltiu | inst_sltu;
    assign alu_op_o[`ysyx_25050136_ALU_GEQ_U] = inst_bgeu;
    assign alu_op_o[`ysyx_25050136_ALU_LEQ]   = inst_blt | inst_slti | inst_slt;
    assign alu_op_o[`ysyx_25050136_ALU_GEQ]   = inst_bge;
    assign alu_op_o[`ysyx_25050136_ALU_SRA]   = inst_srai | inst_sra;
    assign alu_op_o[`ysyx_25050136_ALU_SLL]   = inst_slli | inst_sll;
    assign alu_op_o[`ysyx_25050136_ALU_SRL]   = inst_srli | inst_srl;
    // 选择BQU相关操作
    assign bqu_op_o[`ysyx_25050136_BQU_JALR]  = type_jalr;
    assign bqu_op_o[`ysyx_25050136_BQU_JAL]   = type_jal;
    assign bqu_op_o[`ysyx_25050136_BQU_OTHER] = type_branch;
    // 选择LSU相关操作
    assign lsu_op_o[`ysyx_25050136_LSU_LOAD]  = type_load;
    assign lsu_op_o[`ysyx_25050136_LSU_STORE] = type_store;
    // 选择CSRU相关操作
    assign csru_op_o[`ysyx_25050136_CSRU_CSRRW] = inst_csrrw | inst_csrrwi;
    assign csru_op_o[`ysyx_25050136_CSRU_CSRRS] = inst_csrrs | inst_csrrsi;
    assign csru_op_o[`ysyx_25050136_CSRU_CSRRC] = inst_csrrc | inst_csrrci;
    assign csru_op_o[`ysyx_25050136_CSRU_MRET]  = inst_mret;
    assign csru_op_o[`ysyx_25050136_CSRU_ECALL] = inst_ecall;
    assign csru_op_o[`ysyx_25050136_CSRU_EBREAK] = inst_ebreak;
    // 选择ALU的操作数
    assign alu_opd1_o = inst_lui ? imm : (inst_auipc ? pc_i :
                                     ((inst_jal | inst_jalr) ? static_npc_i : rdata1_i));
    assign alu_opd2_o = (type_op | type_branch) ? rdata2_i :
           ((type_store | type_load | type_op_imm | type_auipc) ? imm : 0);
    // 选择BQU的操作数
    assign bqu_opd1_o = type_jalr ? rdata1_i : pc_i;
    assign bqu_opd2_o = imm;
    // 选择LSU的操作数
    assign lsu_opd1_o = rdata2_i;
    assign mem_mask_o = (inst_lw | inst_sw) ? 4'hF :
           ((inst_sh | inst_lhu | inst_lh) ? 4'h3 :
            ((inst_sb | inst_lbu | inst_lb) ? 4'h1 : 0));
    assign mem_signed_o = (inst_lhu | inst_lbu) ? 0 : 1;
    // 选择CSR的操作数
    assign csru_opd1_o = (inst_csrrwi | inst_csrrsi | inst_csrrci) ? {{DATA_WIDTH - 5{1'b0}}, rs1} : rdata1_i;
    assign csru_opd2_o = inst_i[31:20];
    assign csru_ren_o = !((inst_csrrw | inst_csrrwi) && (rd == 0));
    assign csru_wen_o = !((inst_csrrs | inst_csrrsi | inst_csrrc | inst_csrrci) && (rs1 == 0));
    // 写回寄存器地址
    assign rd_o  = rd;
    assign rd_en_o = (type_store | type_branch) ? 0 : 1;
endmodule //ysyx_25050136_ID
