module ysyx_25050136_ID
    #(
        parameter ADDR_WIDTH = 5
    )
    (
        input                                               clk,
        input                                             reset,
        input      [31:0]                                inst_i,
        input      [31:0]                                  pc_i,
        input                                           stall_i,
        input                                           flush_i,
        input      [31:0]                              rdata1_i,
        output     [ADDR_WIDTH-1:0]                    raddr1_o,
        input      [31:0]                              rdata2_i,
        output     [ADDR_WIDTH-1:0]                    raddr2_o,
`ifdef ysyx_25050136_VERILATOR_DPIC
        output reg [`ysyx_25050136_DBG_NUM-1:0]        dbg_op_o,
        output reg [31:0]                              dbg_pc_o,
`endif
        output     [31:0]                                  pc_o,
        output     [31:0]                              rdata1_o,
        output     [31:0]                              rdata2_o,
        output     [31:0]                                 imm_o,
        output     [`ysyx_25050136_ALU_OP_NUM-1:0]     alu_op_o,
        output     [`ysyx_25050136_CSRU_OP_NUM-1:0]   csru_op_o,
        output                                 alu_op1_use_pc_o,
        output                                alu_op2_use_imm_o,
        output                                  alu_op2_use_4_o,
        output                                        is_jalr_o,
        output                             unconditional_jump_o,
        output                               conditional_jump_o,
        output                                        lsu_ren_o,
        output                                        lsu_wen_o,
        output     [3:0]                             lsu_mask_o,
        output                                     lsu_signed_o,
        output     [11:0]                            csr_addr_o,
        output                                        csr_ren_o,
        output                                        csr_wen_o,
        output                              csr_wdata_use_rs1_o,
        output                                            rs1_o,
        output     [ADDR_WIDTH-1:0]                        rd_o,
        output                                          rd_en_o
    );
    //============中间信号的定义=================
    wire [ADDR_WIDTH-1:0]                    raddr1_t;
    wire [ADDR_WIDTH-1:0]                    raddr2_t;
    wire [`ysyx_25050136_ALU_OP_NUM-1:0]     alu_op_t;
    wire [`ysyx_25050136_CSRU_OP_NUM-1:0]   csru_op_t;
    wire                             alu_op1_use_pc_t;
    wire                            alu_op2_use_imm_t;
    wire                              alu_op2_use_4_t;
    wire                                    is_jalr_t;
    wire                         unconditional_jump_t;
    wire                           conditional_jump_t;
    wire                                    lsu_wen_t;
    wire                                    lsu_ren_t;
    wire [3:0]                             lsu_mask_t;
    wire                                 lsu_signed_t;
    wire [11:0]                            csr_addr_t;
    wire                                    csr_ren_t;
    wire                                    csr_wen_t;
    wire                          csr_wdata_use_rs1_t;
    wire [ADDR_WIDTH-1:0]                        rd_t;
    wire                                      rd_en_t;
    //================指令各段分解===============
    wire [6:0] opcode = inst_i[6:0];
    wire [4:0] rd = inst_i[11:7];
    wire [4:0] rs1 = inst_i[19:15];
    wire [4:0] rs2 = inst_i[24:20];
    wire [2:0] funct3 = inst_i[14:12];
    wire [6:0] funct7 = inst_i[31:25];
    //================opcode判断================
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
    //================funct3判断=================
    wire funct3_000  = (funct3 == 3'b000);
    wire funct3_001  = (funct3 == 3'b001);
    wire funct3_010  = (funct3 == 3'b010);
    wire funct3_011  = (funct3 == 3'b011);
    wire funct3_100  = (funct3 == 3'b100);
    wire funct3_101  = (funct3 == 3'b101);
    wire funct3_110  = (funct3 == 3'b110);
    wire funct3_111  = (funct3 == 3'b111);
    //================funt7判断==================
    wire funct7_0000000 = (funct7 == 7'b0000000);
    wire funct7_0100000 = (funct7 == 7'b0100000);
    //=================指令判断===================
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
    wire inst_mret = (inst_i == 32'h30200073);
    wire inst_ecall = (inst_i == 32'h00000073);
    wire inst_ebreak = (inst_i == 32'h00100073);
    //================指令类型判断================
    wire inst_Rtype = type_op;
    wire inst_Itype = type_op_imm | type_load | type_jalr;
    wire inst_Stype = type_store;
    wire inst_Utype = type_auipc | type_lui;
    wire inst_Btype = type_branch;
    wire inst_Jtype = type_jal;
    //=============用于得到立即数和读操作数=========
    wire [31:0] immI = inst_srai ? {27'd0, inst_i[24:20]} : {{20{inst_i[31]}}, inst_i[31:20]};
    wire [31:0] immS = {{20{inst_i[31]}}, inst_i[31:25], inst_i[11:7]};
    wire [31:0] immB = {{20{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};
    wire [31:0] immU = {inst_i[31:12], 12'h0};
    wire [31:0] immJ = {{12{inst_i[31]}}, inst_i[19:12], inst_i[20], inst_i[30:21], 1'b0};
    wire [31:0] imm = inst_Itype ? immI : (inst_Stype ? immS :
                                           (inst_Utype ? immU : (inst_Btype ? immB :
                                                                 (inst_Jtype ? immJ : 0))));
    assign raddr1_t = rs1[ADDR_WIDTH-1:0];
    assign raddr2_t = rs2[ADDR_WIDTH-1:0];
    //===============选择ALU相关操作================
    assign alu_op_t[`ysyx_25050136_ALU_ADD]   = type_auipc | type_store | type_load | inst_addi | inst_add;
    assign alu_op_t[`ysyx_25050136_ALU_SUB]   = inst_sub;
    assign alu_op_t[`ysyx_25050136_ALU_XOR]   = inst_xor | inst_xori;
    assign alu_op_t[`ysyx_25050136_ALU_OR]    = inst_or | inst_ori;
    assign alu_op_t[`ysyx_25050136_ALU_AND]   = inst_and | inst_andi;
    assign alu_op_t[`ysyx_25050136_ALU_EQ]    = inst_beq;
    assign alu_op_t[`ysyx_25050136_ALU_NEQ]   = inst_bne;
    assign alu_op_t[`ysyx_25050136_ALU_LEQ_U] = inst_bltu | inst_sltiu | inst_sltu;
    assign alu_op_t[`ysyx_25050136_ALU_GEQ_U] = inst_bgeu;
    assign alu_op_t[`ysyx_25050136_ALU_LEQ]   = inst_blt | inst_slti | inst_slt;
    assign alu_op_t[`ysyx_25050136_ALU_GEQ]   = inst_bge;
    assign alu_op_t[`ysyx_25050136_ALU_SRA]   = inst_srai | inst_sra;
    assign alu_op_t[`ysyx_25050136_ALU_SLL]   = inst_slli | inst_sll;
    assign alu_op_t[`ysyx_25050136_ALU_SRL]   = inst_srli | inst_srl;
    //=================选择CSRU相关操作==============
    assign csru_op_t[`ysyx_25050136_CSRU_CSRRW] = inst_csrrw | inst_csrrwi;
    assign csru_op_t[`ysyx_25050136_CSRU_CSRRS] = inst_csrrs | inst_csrrsi;
    assign csru_op_t[`ysyx_25050136_CSRU_CSRRC] = inst_csrrc | inst_csrrci;
    assign csru_op_t[`ysyx_25050136_CSRU_MRET]  = inst_mret;
    assign csru_op_t[`ysyx_25050136_CSRU_ECALL] = inst_ecall;
    // ====================选择ALU的操作数===============
    assign alu_op1_use_pc_t = type_auipc | type_jal | type_jalr;
    assign alu_op2_use_imm_t = type_load | type_store | type_op_imm | type_auipc;
    assign alu_op2_use_4_t = type_jal | type_jalr;
    // ====================选择BQU的操作数===============
    assign is_jalr_t = type_jalr;
    assign unconditional_jump_t = type_jalr | type_jal;
    assign conditional_jump_t = type_branch;

    // ====================访存相关=====================
    assign lsu_ren_t = type_load;
    assign lsu_wen_t = type_store;
    assign lsu_mask_t = (inst_lw | inst_sw) ? 4'hF :
           ((inst_sh | inst_lhu | inst_lh) ? 4'h3 :
            ((inst_sb | inst_lbu | inst_lb) ? 4'h1 : 0));
    assign lsu_signed_t = (inst_lhu | inst_lbu) ? 0 : 1;
    //==================选择CSR的操作数=================
    assign csr_addr_t = inst_i[31:20];
    assign csr_ren_t = !((inst_csrrw | inst_csrrwi) && (rd == 0));
    assign csr_wen_t = !((inst_csrrs | inst_csrrsi | inst_csrrc | inst_csrrci) && (rs1 == 0));
    assign csr_wdata_use_rs1_t = inst_csrrw | inst_csrrs | inst_csrrc;
    // //==================写回寄存器地址===================
    assign rd_t  = rd[ADDR_WIDTH-1:0];
    assign rd_en_t = (type_store | type_branch) ? 0 : 1;

`ifdef ysyx_25050136_VERILATOR_DPIC
    always @(posedge clk) begin
        if(reset) begin
            dbg_op_o <= 0;
            dbg_pc_o <= 0;
        end else begin
            if(!stall_i) begin
                dbg_op_o[`ysyx_25050136_DBG_EBREAK] <= inst_ebreak;
                dbg_op_o[`ysyx_25050136_DBG_ALU] <= type_op_imm | type_auipc | type_lui | type_op;
                dbg_op_o[`ysyx_25050136_DBG_CSRU] <= type_system;
                dbg_op_o[`ysyx_25050136_DBG_LSU] <= type_store | type_load;
                dbg_op_o[`ysyx_25050136_DBG_BQU] <= type_branch | type_jalr | type_jal;
                dbg_pc_o <= pc_i;
            end
        end
    end
`endif
    ysyx_25050136_ID_REG #(
        .ADDR_WIDTH(4)
    ) ID_REG (
        .clk                  (clk),
        .reset                (reset),
        .en                   (!stall_i),
        .flush                (flush_i),
        .pc_i                 (pc_i),
        .rdata1_i             (rdata1_i),
        .rdata2_i             (rdata2_i),
        .imm_i                (imm_i),
        .alu_op_i             (alu_op_t),
        .csru_op_i            (csru_op_t),
        .alu_op1_use_pc_i     (alu_op1_use_pc_t),
        .alu_op2_use_imm_i    (alu_op2_use_imm_t),
        .alu_op2_use_4_i      (alu_op2_use_4_t),
        .is_jalr_i            (is_jalr_t),
        .unconditional_jump_i (unconditional_jump_t),
        .conditional_jump_i   (conditional_jump_t),
        .lsu_ren_i            (lsu_ren_t),
        .lsu_wen_i            (lsu_wen_t),
        .lsu_mask_i           (lsu_mask_t),
        .lsu_signed_i         (lsu_signed_t),
        .csr_addr_i           (csr_addr_t),
        .csr_ren_i            (csr_ren_t),
        .csr_wen_i            (csr_wen_t),
        .csr_wdata_use_rs1_i  (csr_wdata_use_rs1_t),
        .rs1_i                (rs1),
        .rd_i                 (rd_t),
        .rd_en_i              (rd_en_t),
        .pc_o                 (pc_o),
        .rdata1_o             (rdata1_o),
        .rdata2_o             (rdata2_o),
        .imm_o                (imm_o),
        .alu_op_o             (alu_op_o),
        .csru_op_o            (csru_op_o),
        .alu_op1_use_pc_o     (alu_op1_use_pc_o),
        .alu_op2_use_imm_o    (alu_op2_use_imm_o),
        .alu_op2_use_4_o      (alu_op2_use_4_o),
        .is_jalr_o            (is_jalr_o),
        .unconditional_jump_o (unconditional_jump_o),
        .conditional_jump_o   (conditional_jump_o),
        .lsu_ren_o            (lsu_ren_o),
        .lsu_wen_o            (lsu_wen_o),
        .lsu_mask_o           (lsu_mask_o),
        .lsu_signed_o         (lsu_signed_o),
        .csr_addr_o           (csr_addr_o),
        .csr_ren_o            (csr_ren_o),
        .csr_wen_o            (csr_wen_o),
        .csr_wdata_use_rs1_i  (csr_wdata_use_rs1_o),
        .rs1_i                (rs1_o),
        .rd_o                 (rd_o),
        .rd_en_o              (rd_en_o)
    );
endmodule //ysyx_25050136_ID

module ysyx_25050136_ID_REG
    #(
        parameter ADDR_WIDTH = 5
    )
    (
        input clk                                               ,
        input reset                                             ,
        input en                                                ,
        input flush                                             ,
        input [31:0] pc_i                                       ,
        input [31:0] rdata1_i                                   ,
        input [31:0] rdata2_i                                   ,
        input [31:0] imm_i                                      ,
        input [`ysyx_25050136_ALU_OP_NUM-1:0] alu_op_i          ,
        input [`ysyx_25050136_CSRU_OP_NUM-1:0] csru_op_i        ,
        input alu_op1_use_pc_i                                  ,
        input alu_op2_use_imm_i                                 ,
        input alu_op2_use_4_i                                   ,
        input is_jalr_i                                         ,
        input unconditional_jump_i                              ,
        input conditional_jump_i                                ,
        input lsu_ren_i                                         ,
        input lsu_wen_i                                         ,
        input [3:0] lsu_mask_i                                  ,
        input lsu_signed_i                                      ,
        input [11:0] csr_addr_i                                 ,
        input csr_ren_i                                         ,
        input csr_wen_i                                         ,
        input csr_wdata_use_rs1_i                               ,
        input [4:0] rs1_i                                       ,
        input [ADDR_WIDTH-1:0] rd_i                             ,
        input rd_en_i                                           ,
        output reg [31:0] pc_o                                  ,
        output reg [31:0] rdata1_o                              ,
        output reg [31:0] rdata2_o                              ,
        output reg [31:0] imm_o                                 ,
        output reg [`ysyx_25050136_ALU_OP_NUM-1:0] alu_op_o     ,
        output reg [`ysyx_25050136_CSRU_OP_NUM-1:0] csru_op_o   ,
        output reg alu_op1_use_pc_o                             ,
        output reg alu_op2_use_imm_o                            ,
        output reg alu_op2_use_4_o                              ,
        output reg is_jalr_o                                    ,
        output reg unconditional_jump_o                         ,
        output reg conditional_jump_o                           ,
        output reg lsu_ren_o                                    ,
        output reg lsu_wen_o                                    ,
        output reg [3:0] lsu_mask_o                             ,
        output reg lsu_signed_o                                 ,
        output reg [11:0] csr_addr_o                            ,
        output reg csr_ren_o                                    ,
        output reg csr_wen_o                                    ,
        output reg csr_wdata_use_rs1_o                          ,
        output reg [4:0] rs1_o                                  ,
        output reg [ADDR_WIDTH-1:0] rd_o                        ,
        output reg rd_en_o
    );
    // =========== 标准逻辑 ======================
    always @(posedge clk) begin
        if(reset) begin
            pc_o <= 0;
            rdata1_o <= 0;
            rdata2_o <= 0;
            imm_o <= 0;
            alu_op_o <= 0;
            csru_op_o <= 0;
            alu_op1_use_pc_o <= 0;
            alu_op2_use_imm_o <= 0;
            alu_op2_use_4_o <= 0;
            is_jalr_o <= 0;
            unconditional_jump_o <= 0;
            conditional_jump_o <= 0;
            lsu_ren_o <= 0;
            lsu_wen_o <= 0;
            lsu_mask_o <= 0;
            lsu_signed_o <= 0;
            csr_addr_o <= 0;
            csr_ren_o <= 0;
            csr_wen_o <= 0;
            csr_wdata_use_rs1_o <= 0;
            rs1_o <= 0;
            rd_o <= 0;
            rd_en_o <= 0;
        end else begin
            if(flush) begin
                pc_o <= 0;
                rdata1_o <= 0;
                rdata2_o <= 0;
                imm_o <= 0;
                alu_op_o <= 0;
                csru_op_o <= 0;
                alu_op1_use_pc_o <= 0;
                alu_op2_use_imm_o <= 0;
                alu_op2_use_4_o <= 0;
                is_jalr_o <= 0;
                unconditional_jump_o <= 0;
                conditional_jump_o <= 0;
                lsu_ren_o <= 0;
                lsu_wen_o <= 0;
                lsu_mask_o <= 0;
                lsu_signed_o <= 0;
                csr_addr_o <= 0;
                csr_ren_o <= 0;
                csr_wen_o <= 0;
                csr_wdata_use_rs1_o <= 0;
                rs1_o <= 0;
                rd_o <= 0;
                rd_en_o <= 0;
            end else if(en) begin
                pc_o <= pc_i;
                rdata1_o <= rdata1_i;
                rdata2_o <= rdata2_i;
                imm_o <= imm_i;
                alu_op_o <= alu_op_i;
                csru_op_o <= csru_op_i;
                alu_op1_use_pc_o <= alu_op1_use_pc_i;
                alu_op2_use_imm_o <= alu_op2_use_imm_i;
                alu_op2_use_4_o <= alu_op2_use_4_i;
                is_jalr_o <= is_jalr_i;
                unconditional_jump_o <= unconditional_jump_i;
                conditional_jump_o <= conditional_jump_i;
                lsu_ren_o <= lsu_ren_i;
                lsu_wen_o <= lsu_wen_i;
                lsu_mask_o <= lsu_mask_i;
                lsu_signed_o <= lsu_signed_i;
                csr_addr_o <= csr_addr_i;
                csr_ren_o <= csr_ren_i;
                csr_wen_o <= csr_wen_i;
                csr_wdata_use_rs1_o <= csr_wdata_use_rs1_i;
                rs1_o <= rs1_i;
                rd_o <= rd_i;
                rd_en_o <= rd_en_i;
            end
        end
    end

endmodule