module ysyx_25050136_ID
    #(
        parameter ADDR_WIDTH = 5
    )
    (
        input                                                   clk,
        input                                                 reset,
        input                                                 flush,
        input                                            in_valid_i,
        input      [31:0]                                 in_inst_i,
        input      [31:0]                                   in_pc_i,
        output                                           in_ready_o,
        input                                           out_ready_i,
`ifdef ysyx_25050136_VERILATOR_DPIC
        output     [31:0]                            out_dbg_inst_o,
        output     [5:0]                           out_dbg_optype_o,
`endif
        // 读操作数以及解决数据冒险
        input                                           ex_wvalid_i,
        input      [ADDR_WIDTH-1:0]                      ex_waddr_i,
        input      [31:0]                                ex_wdata_i,
        input                                          mem_wvalid_i,
        input      [ADDR_WIDTH-1:0]                     mem_waddr_i,
        input      [31:0]                               mem_wdata_i,
        input      [31:0]                              out_rdata1_i,
        output     [ADDR_WIDTH-1:0]                    out_raddr1_o,
        input      [31:0]                              out_rdata2_i,
        output     [ADDR_WIDTH-1:0]                    out_raddr2_o,
        // 传递给EX
        output     [31:0]                                  out_pc_o,
        output     [31:0]                              out_rdata1_o,
        output     [31:0]                              out_rdata2_o,
        output     [31:0]                                 out_imm_o,
        output     [`ysyx_25050136_ALU_OP_NUM-1:0]     out_alu_op_o,
        output     [`ysyx_25050136_CSRU_OP_NUM-1:0]   out_csru_op_o,
        output                                 out_alu_op1_use_pc_o,
        output                                out_alu_op2_use_imm_o,
        output                                  out_alu_op2_use_4_o,
        output                                        out_is_jalr_o,
        output                             out_unconditional_jump_o,
        output                               out_conditional_jump_o,
        output                                        out_lsu_ren_o,
        output                                        out_lsu_wen_o,
        output     [3:0]                             out_lsu_mask_o,
        output                                     out_lsu_signed_o,
        output     [11:0]                            out_csr_addr_o,
        output                                        out_csr_ren_o,
        output                                        out_csr_wen_o,
        output                              out_csr_wdata_use_rs1_o,
        output     [4:0]                                  out_rs1_o,
        output     [ADDR_WIDTH-1:0]                        out_rd_o,
        output                                          out_rd_en_o,
        output                                          out_valid_o
    );
    // ==== 信号定义 ====
    // 时序逻辑
    reg idle;
    reg [31:0] id_pc;
    reg [31:0] id_inst;
    // 组合逻辑
    wire in_fire = in_valid_i & in_ready_o;
    wire out_fire = out_valid_o & out_ready_i;
    wire ready_go;
    //=== 指令各段分解 ===
    wire [6:0] opcode = id_inst[6:0];
    wire [4:0] rd = id_inst[11:7];
    wire [4:0] rs1 = id_inst[19:15];
    wire [4:0] rs2 = id_inst[24:20];
    wire [2:0] funct3 = id_inst[14:12];
    wire [6:0] funct7 = id_inst[31:25];
    //=== opcode判断 ===
    wire type_load     = (opcode == 7'b0000011);
    wire type_op_imm   = (opcode == 7'b0010011);
    wire type_auipc    = (opcode == 7'b0010111);
    wire type_store    = (opcode == 7'b0100011);
    wire type_op       = (opcode == 7'b0110011);
    wire type_lui      = (opcode == 7'b0110111);
    wire type_branch   = (opcode == 7'b1100011);
    wire type_jalr     = (opcode == 7'b1100111);
    wire type_jal      = (opcode == 7'b1101111);
    wire type_system   = (opcode == 7'b1110011);
    // wire type_misc_lsu = (opcode == 7'b0001111);
    //=== funct3判断 ===
    wire funct3_000  = (funct3 == 3'b000);
    wire funct3_001  = (funct3 == 3'b001);
    wire funct3_010  = (funct3 == 3'b010);
    wire funct3_011  = (funct3 == 3'b011);
    wire funct3_100  = (funct3 == 3'b100);
    wire funct3_101  = (funct3 == 3'b101);
    wire funct3_110  = (funct3 == 3'b110);
    wire funct3_111  = (funct3 == 3'b111);
    // === funt7判断 ===
    wire funct7_0000000 = (funct7 == 7'b0000000);
    wire funct7_0100000 = (funct7 == 7'b0100000);
    // === 指令判断 ===
    // wire inst_lui = type_lui;
    // wire inst_auipc = type_auipc;
    // wire inst_jal = type_jal;
    // wire inst_jalr = type_jalr;
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
    wire inst_mret = (id_inst == 32'h30200073);
    wire inst_ecall = (id_inst == 32'h00000073);
    wire inst_ebreak = (id_inst == 32'h00100073);
    // === 指令类型判断 ===
    // wire inst_Rtype = type_op;
    wire inst_Itype = type_op_imm | type_load | type_jalr;
    wire inst_Stype = type_store;
    wire inst_Utype = type_auipc | type_lui;
    wire inst_Btype = type_branch;
    wire inst_Jtype = type_jal;
    // === 用于得到立即数和读操作数 ===
    wire [31:0] immI = inst_srai ? {27'd0, id_inst[24:20]} : {{20{id_inst[31]}}, id_inst[31:20]};
    wire [31:0] immS = {{20{id_inst[31]}}, id_inst[31:25], id_inst[11:7]};
    wire [31:0] immB = {{20{id_inst[31]}}, id_inst[7], id_inst[30:25], id_inst[11:8], 1'b0};
    wire [31:0] immU = {id_inst[31:12], 12'h0};
    wire [31:0] immJ = {{12{id_inst[31]}}, id_inst[19:12], id_inst[20], id_inst[30:21], 1'b0};
    // === 数据冒险 ===
    wire raw1_hazard;
    wire raw2_hazard;
    wire ren1, ren2;
    // ==== 逻辑实现 ====
    always @(posedge clk) begin
        if(reset) begin
            idle <= 1;
            id_pc <= 0;
            id_inst <= 0;
        end else begin
            if(flush) begin
                idle <= 1;
            end else if(in_fire) begin
                idle <= 0;
                id_pc <= in_pc_i;
                id_inst <= in_inst_i;
            end else if(out_fire) begin
                idle <= 1;
            end
        end
    end
    // === 选择ALU相关操作 ===
    assign out_alu_op_o[`ysyx_25050136_ALU_ADD]   = type_auipc | type_store | type_load | inst_addi | inst_add | type_jalr | type_jal;
    assign out_alu_op_o[`ysyx_25050136_ALU_SUB]   = inst_sub;
    assign out_alu_op_o[`ysyx_25050136_ALU_XOR]   = inst_xor | inst_xori;
    assign out_alu_op_o[`ysyx_25050136_ALU_OR]    = inst_or | inst_ori;
    assign out_alu_op_o[`ysyx_25050136_ALU_AND]   = inst_and | inst_andi;
    assign out_alu_op_o[`ysyx_25050136_ALU_EQ]    = inst_beq;
    assign out_alu_op_o[`ysyx_25050136_ALU_NEQ]   = inst_bne;
    assign out_alu_op_o[`ysyx_25050136_ALU_LEQ_U] = inst_bltu | inst_sltiu | inst_sltu;
    assign out_alu_op_o[`ysyx_25050136_ALU_GEQ_U] = inst_bgeu;
    assign out_alu_op_o[`ysyx_25050136_ALU_LEQ]   = inst_blt | inst_slti | inst_slt;
    assign out_alu_op_o[`ysyx_25050136_ALU_GEQ]   = inst_bge;
    assign out_alu_op_o[`ysyx_25050136_ALU_SRA]   = inst_srai | inst_sra;
    assign out_alu_op_o[`ysyx_25050136_ALU_SLL]   = inst_slli | inst_sll;
    assign out_alu_op_o[`ysyx_25050136_ALU_SRL]   = inst_srli | inst_srl;
    assign out_alu_op_o[`ysyx_25050136_ALU_OPD2]  = type_lui;
    // === 选择CSRU相关操作 ===
    assign out_csru_op_o[`ysyx_25050136_CSRU_CSRRW] = inst_csrrw | inst_csrrwi;
    assign out_csru_op_o[`ysyx_25050136_CSRU_CSRRS] = inst_csrrs | inst_csrrsi;
    assign out_csru_op_o[`ysyx_25050136_CSRU_CSRRC] = inst_csrrc | inst_csrrci;
    assign out_csru_op_o[`ysyx_25050136_CSRU_MRET]  = inst_mret;
    assign out_csru_op_o[`ysyx_25050136_CSRU_ECALL] = inst_ecall;
    // === 选择ALU的操作数 ===
    assign out_alu_op1_use_pc_o = type_auipc | type_jal | type_jalr;
    assign out_alu_op2_use_imm_o = type_load | type_store | type_op_imm | type_auipc | type_lui;
    assign out_alu_op2_use_4_o = type_jal | type_jalr;
    // === 选择BQU的操作数 ===
    assign out_is_jalr_o = type_jalr;
    assign out_unconditional_jump_o = type_jalr | type_jal;
    assign out_conditional_jump_o = type_branch;
    // === 访存相关 ===
    assign out_lsu_ren_o = type_load;
    assign out_lsu_wen_o = type_store;
    assign out_lsu_mask_o = (inst_lw | inst_sw) ? 4'hF :
           ((inst_sh | inst_lhu | inst_lh) ? 4'h3 :
            ((inst_sb | inst_lbu | inst_lb) ? 4'h1 : 0));
    assign out_lsu_signed_o = (inst_lhu | inst_lbu) ? 0 : 1;
    // === 选择CSR的操作数 ===
    assign out_csr_addr_o = id_inst[31:20];
    assign out_csr_ren_o = (type_system & ~inst_ebreak) & !((inst_csrrw | inst_csrrwi) && (rd == 0));
    assign out_csr_wen_o = (type_system & ~inst_ebreak) & !((inst_csrrs | inst_csrrsi | inst_csrrc | inst_csrrci) && (rs1 == 0));
    assign out_csr_wdata_use_rs1_o = inst_csrrw | inst_csrrs | inst_csrrc;
    // === 写回寄存器地址 ===
    assign out_rd_o  = rd[ADDR_WIDTH-1:0];
    assign out_rd_en_o = type_op_imm | type_auipc | type_lui | type_op | type_system | type_load | type_jalr | type_jal;
    // === 操作数 ===
    // === 读操作数与数据冒险 ===
    assign raw1_hazard = (out_raddr1_o != 0) && ren1 && (((out_raddr1_o == ex_waddr_i) && !ex_wvalid_i) ||
                          ((out_raddr1_o == mem_waddr_i) && !mem_wvalid_i));
    assign raw2_hazard = (out_raddr2_o != 0) && ren2 && (((out_raddr2_o == ex_waddr_i) && !ex_wvalid_i) ||
                          ((out_raddr2_o == mem_waddr_i) && !mem_wvalid_i));
    assign ready_go = !(raw1_hazard | raw2_hazard);
    assign out_raddr1_o = rs1[ADDR_WIDTH-1:0];
    assign out_raddr2_o = rs2[ADDR_WIDTH-1:0];
    assign ren1 = ~(type_lui | type_auipc | type_jal | inst_csrrwi | inst_csrrsi | inst_csrrci);
    assign ren2 = type_branch | type_store | type_op;
    
    assign out_pc_o = id_pc;
    assign out_rdata1_o = ((out_raddr1_o != 0) && (out_raddr1_o == ex_waddr_i) && ex_wvalid_i) : ex_wdata_i :
                          ((out_raddr1_o != 0) && (out_raddr1_o == mem_waddr_i) && mem_wvalid_i) ? mem_wdata_i :
                          out_rdata1_i;
    assign out_rdata2_o =((out_rdata2_i != 0) && (out_raddr2_o == ex_waddr_i) && ex_wvalid_i) ? ex_wdata_i :
                         ((out_raddr2_o != 0) && (out_raddr2_o == mem_waddr_i) && mem_wvalid_i) ? mem_wdata_i :
                         out_rdata2_i;
    assign out_imm_o = inst_Itype ? immI : (inst_Stype ? immS :
                                           (inst_Utype ? immU : (inst_Btype ? immB :
                                                                 (inst_Jtype ? immJ : 0))));
    assign out_rs1_o = rs1;
    // === 握手信号 ===
    assign in_ready_o = idle || out_fire;
    assign out_valid_o = !(idle || flush) && ready_go;
`ifdef ysyx_25050136_VERILATOR_DPIC
    wire [31:0] id_dbg_pc = out_pc_o;
    assign out_dbg_inst_o = id_inst;
    assign out_dbg_optype_o = {type_jalr | type_jal, type_branch, type_load, type_store, type_system, type_op_imm | type_auipc | type_lui | type_op};
    always @(posedge clk) begin
        if(!reset) begin
            if(!ready_go) related_delay_get();
        end
    end
`endif

endmodule
