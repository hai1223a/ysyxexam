// 操作部件相关宏定义
`define ysyx_25050136_ALU_OP_NUM 11
`define ysyx_25050136_ALU_ADD    4'd1
`define ysyx_25050136_ALU_SUB    4'd2
`define ysyx_25050136_ALU_XOR    4'd3
`define ysyx_25050136_ALU_OR     4'd4
`define ysyx_25050136_ALU_AND    4'd5
`define ysyx_25050136_ALU_SLTU   4'd6
`define ysyx_25050136_ALU_SLT    4'd7
`define ysyx_25050136_ALU_SRA    4'd8
`define ysyx_25050136_ALU_SLL    4'd9
`define ysyx_25050136_ALU_SRL    4'd10
`define ysyx_25050136_ALU_OPD2   4'd11


`define ysyx_25050136_CSRU_OP_NUM 5
`define ysyx_25050136_CSRU_CSRRW  0
`define ysyx_25050136_CSRU_CSRRS  1
`define ysyx_25050136_CSRU_CSRRC  2
`define ysyx_25050136_CSRU_MRET   3
`define ysyx_25050136_CSRU_ECALL  4

`ifdef YSYXSOC
`define ysyx_25050136_DBG_NUM 5
`define ysyx_25050136_DBG_EBREAK 0
`define ysyx_25050136_DBG_ALU  1
`define ysyx_25050136_DBG_CSRU 2
`define ysyx_25050136_DBG_LSU  3
`define ysyx_25050136_DBG_BQU  4
`endif
module ysyx_25050136_ALU
     (
         input  [31:0]                          op1_i,
         input  [31:0]                          op2_i,
         input  [3:0]                            op_i,
         output [31:0]                          out_o
     );
    // 加法器用作加法/减法/比较
    wire [31:0] adder_op2;
    wire        adder_cin;
    wire        adder_cout;
    wire [31:0] adder_result;
    wire slt_res;
    wire sltu_res;

    assign adder_cin = (op_i == `ysyx_25050136_ALU_SUB || op_i == `ysyx_25050136_ALU_SLT || op_i == `ysyx_25050136_ALU_SLTU);
    assign adder_op2 = adder_cin ? ~op2_i : op2_i;
    assign {adder_cout, adder_result} = op1_i + adder_op2 + {31'b0, adder_cin};
    assign slt_res = (op1_i[31] ^ op2_i[31]) ? op1_i[31] : adder_result[31];
    assign sltu_res = ~adder_cout;
    // 移位器
    wire [31:0] sra_result = $signed(op1_i) >>> op2_i[4:0];
    wire [31:0] srl_result = op1_i >> op2_i[4:0];
    wire [31:0] sll_result = op1_i << op2_i[4:0];
    reg [31:0] out;
    always @(*) begin
        case (op_i)
            `ysyx_25050136_ALU_ADD:  out = adder_result;
            `ysyx_25050136_ALU_SUB:  out = adder_result;
            `ysyx_25050136_ALU_XOR:  out = op1_i ^ op2_i;
            `ysyx_25050136_ALU_OR:   out = op1_i | op2_i;
            `ysyx_25050136_ALU_AND:  out = op1_i & op2_i;
            `ysyx_25050136_ALU_SLTU: out = {{31{1'b0}},sltu_res};
            `ysyx_25050136_ALU_SLT:  out = {{31{1'b0}},slt_res};
            `ysyx_25050136_ALU_SRA:  out = sra_result;
            `ysyx_25050136_ALU_SLL:  out = sll_result;
            `ysyx_25050136_ALU_SRL:  out = srl_result;
            `ysyx_25050136_ALU_OPD2: out = op2_i;
            default:                 out = 0;     
        endcase
    end
    assign out_o = out;
endmodule //ysyx_25050136_ALU
//----------------------------------------------------------
// CI测试不支持返回rid，所以简单仲裁
// 仅支持MASTER_NUM=2
// 仅支持读通道仲裁，写通道直通
// 想要改变MASTER_NUM参数，需要同步修改内部逻辑
//----------------------------------------------------------
module ysyx_25050136_ARBITER
    #(
        parameter MASTER_NUM = 2,
        parameter DATA_WIDTH = 32,
        parameter ADDR_WIDTH = 32
     )
     (
        input                                   clk         ,
        input                                   reset       ,
        // 来自主设备的AXI信号
        // 写地址
        input                                   s_awvalid_i ,
        output                                  s_awready_o ,
        input     [ADDR_WIDTH-1:0]              s_awaddr_i  ,
        input     [3:0]                         s_awid_i    ,
        input     [7:0]                         s_awlen_i   ,
        input     [2:0]                         s_awsize_i  ,
        input     [1:0]                         s_awburst_i ,
        // 写数据
        input                                   s_wvalid_i  ,
        output                                  s_wready_o  ,
        input     [DATA_WIDTH-1:0]              s_wdata_i   ,
        input     [3:0]                         s_wstrb_i   ,
        input                                   s_wlast_i   ,
        // 写响应
        output                                  s_bvalid_o  ,
        input                                   s_bready_i  ,
        output    [3:0]                         s_bid_o     ,
        output    [1:0]                         s_bresp_o   ,
        // 读地址
        input     [MASTER_NUM-1:0]              s_arvalid_i ,
        output    [MASTER_NUM-1:0]              s_arready_o ,
        input     [MASTER_NUM*ADDR_WIDTH-1:0]   s_araddr_i  ,
        input     [MASTER_NUM*4-1:0]            s_arid_i    ,
        input     [MASTER_NUM*8-1:0]            s_arlen_i   ,
        input     [MASTER_NUM*3-1:0]            s_arsize_i  ,
        input     [MASTER_NUM*2-1:0]            s_arburst_i ,
        // 读数据
        output    [MASTER_NUM-1:0]              s_rvalid_o  ,
        input     [MASTER_NUM-1:0]              s_rready_i  ,
        output    [MASTER_NUM*DATA_WIDTH-1:0]   s_rdata_o   ,
        output    [MASTER_NUM*2-1:0]            s_rresp_o   ,
        output    [MASTER_NUM-1:0]              s_rlast_o   ,
        output    [MASTER_NUM*4-1:0]            s_rid_o     ,
        // 来自从设备的AXI信号
        // 写地址
        output                                  m_awvalid_o ,
        input                                   m_awready_i ,
        output    [ADDR_WIDTH-1:0]              m_awaddr_o  ,
        output    [3:0]                         m_awid_o    ,
        output    [7:0]                         m_awlen_o   ,
        output    [2:0]                         m_awsize_o  ,
        output    [1:0]                         m_awburst_o ,
        // 写数据
        output                                  m_wvalid_o  ,
        input                                   m_wready_i  ,
        output    [DATA_WIDTH-1:0]              m_wdata_o   ,
        output    [3:0]                         m_wstrb_o   ,
        output                                  m_wlast_o   ,
        // 写响应
        input                                   m_bvalid_i  ,
        output                                  m_bready_o  ,
        input     [3:0]                         m_bid_i     ,
        input     [1:0]                         m_bresp_i   ,
        // 读地址
        output                                  m_arvalid_o ,
        input                                   m_arready_i ,
        output    [ADDR_WIDTH-1:0]              m_araddr_o  ,
        output    [3:0]                         m_arid_o    ,
        output    [7:0]                         m_arlen_o   ,
        output    [2:0]                         m_arsize_o  ,
        output    [1:0]                         m_arburst_o ,
        // 读数据
        input                                   m_rvalid_i  ,
        output                                  m_rready_o  ,
        input     [DATA_WIDTH-1:0]              m_rdata_i   ,
        input     [1:0]                         m_rresp_i   ,
        input                                   m_rlast_i   ,
        input     [3:0]                         m_rid_i
     );
    // ========================读通道仲裁器===========================
    // 仲裁逻辑：
    // 1. 当没有传输时，从有效请求中选择优先级最高的一个作为当前传输者，进入忙态
    // 2. 当传输进行时，高优先级请求也不可以抢占，直到当前传输完成，释放忙态
    reg [MASTER_NUM-1:0] AR_owner;
    reg                  AR_busy;
    reg [MASTER_NUM-1:0] AR_hot;
    reg [$clog2(MASTER_NUM)-1:0] AR_bin;
    // 候选选择（固定优先级，从0到N-1的第一个有效者）
    reg [MASTER_NUM-1:0] AR_cand_hot;
    always @(*) begin
        AR_cand_hot = 0;
        if (s_arvalid_i[0]) begin
            AR_cand_hot[0] = 1;
        end else if (s_arvalid_i[1]) begin
            AR_cand_hot[1] = 1;
        end
    end

    // AR_hot 和 AR_bin 由 busy/owner 或 候选 决定
    integer a;
    always @(*) begin
        if (AR_busy) begin
            AR_hot = AR_owner;
        end else begin
            AR_hot = AR_cand_hot;
        end
        AR_bin = 0;
        for (a = 0; a < MASTER_NUM; a = a + 1) begin
            if (AR_hot[a]) begin
                AR_bin = a[$clog2(MASTER_NUM)-1:0];
            end
        end
    end

    wire R_fire  = |(s_rready_i & AR_hot) & m_rvalid_i & m_rlast_i; // 读通道最后一个数据握手完成
    //管理 AR_owner / AR_busy
    always @(posedge clk) begin
        if (reset) begin
            AR_owner <= 0;
            AR_busy  <= 0;
        end else begin
            // 当当前不忙且有候选请求时，占用者设为该候选并进入忙态
            if (!AR_busy) begin
                if (|AR_cand_hot) begin
                    AR_owner <= AR_cand_hot;
                    AR_busy  <= 1;
                end
            end
            // 当握手完成，释放忙态
            if (R_fire) begin
                AR_owner <= 0;
                AR_busy  <= 0;
            end
        end
    end
    
    // AR通道
    assign m_arvalid_o = |(s_arvalid_i & AR_hot);
    assign m_araddr_o  = s_araddr_i[AR_bin * ADDR_WIDTH +: ADDR_WIDTH];
    assign m_arid_o    = s_arid_i[AR_bin * 4 +: 4];
    assign m_arlen_o   = s_arlen_i[AR_bin * 8 +: 8];
    assign m_arsize_o  = s_arsize_i[AR_bin * 3 +: 3];
    assign m_arburst_o = s_arburst_i[AR_bin * 2 +: 2];

    genvar i;
    generate
        for (i = 0; i < MASTER_NUM ; i = i + 1) begin: AR_FOR
            assign s_arready_o[i] = m_arready_i & AR_hot[i];
        end
    endgenerate

    // R通道
    assign m_rready_o = |(s_rready_i & AR_hot);
    generate
        for (i = 0; i < MASTER_NUM ; i = i + 1) begin: R_FOR
            assign s_rvalid_o[i] = m_rvalid_i & AR_hot[i];
            assign s_rdata_o[i*DATA_WIDTH+:DATA_WIDTH] = AR_hot[i] ? m_rdata_i : 0;
            assign s_rresp_o[i*2+:2] = AR_hot[i] ? m_rresp_i : 0;
            assign s_rlast_o[i] = m_rlast_i & AR_hot[i];
            assign s_rid_o[i*4+:4] = AR_hot[i] ? m_rid_i : 0;
        end
    endgenerate
    // ========================写通道直通===========================
    // AW通道
    assign m_awvalid_o = s_awvalid_i;
    assign m_awaddr_o  = s_awaddr_i;
    assign m_awid_o    = s_awid_i;
    assign m_awlen_o   = s_awlen_i;
    assign m_awsize_o  = s_awsize_i;
    assign m_awburst_o = s_awburst_i;
    assign s_awready_o = m_awready_i;
    // W通道
    assign m_wvalid_o  = s_wvalid_i;
    assign m_wdata_o   = s_wdata_i;
    assign m_wstrb_o   = s_wstrb_i;
    assign m_wlast_o   = s_wlast_i;
    assign s_wready_o  = m_wready_i;
    // B通道
    assign s_bvalid_o  = m_bvalid_i;
    assign s_bid_o     = m_bid_i;
    assign s_bresp_o   = m_bresp_i;
    assign m_bready_o  = s_bready_i;
endmodule
module ysyx_25050136_BQU
   (
      input  [31:0]                      op1_i,
      input  [31:0]                      op2_i,
      input  [5:0]                        op_i,
      output                             out_o
   );
   parameter OP_EQ  = 6'b000001;
   parameter OP_NE  = 6'b000010;
   parameter OP_SLT = 6'b000100;
   parameter OP_SGE = 6'b001000;
   parameter OP_ULT = 6'b010000;
   parameter OP_UGE = 6'b100000;

   wire is_equal = (op1_i == op2_i);
   wire is_slt   = ($signed(op1_i) < $signed(op2_i));
   wire is_ult   = (op1_i < op2_i);
   reg out;
   always @(*) begin
      case (op_i)
         OP_EQ:  out = is_equal;
         OP_NE:  out = ~is_equal;
         OP_SLT: out = is_slt;
         OP_SGE: out = ~is_slt;
         OP_ULT: out = is_ult;
         OP_UGE: out = ~is_ult;
         default: out = 1'b0;
      endcase
   end
   assign out_o = out;
endmodule
module ysyx_25050136_CLINT(
    input            clk   ,
    input            reset ,
    input   [31:0]   addr_i,
    output  [31:0]   data_o
);
    reg [63:0] mtime;
    always @(posedge clk) begin
        if (reset) begin
            mtime <= 0;
        end else begin
            mtime <= mtime + 64'd1;
        end
    end
    assign data_o = (addr_i == 32'h0200_0000) ? mtime[31:0] :
                    (addr_i == 32'h0200_0004) ? mtime[63:32] : 32'b0;
endmodule
module  ysyx_25050136_NPCCORE
(
    input                                     clk  ,
    input                                   reset  ,
    // 指令相关
    output                        inst_flush_o     ,
    output                        inst_req_valid_o ,
    output   [31:0]               inst_req_addr_o  ,
    input                         inst_ret_valid_i ,
    input                         inst_ret_last_i  ,
    input    [31:0]               inst_ret_data_i  ,
    // 数据相关
    input    [31:0]               mem_ret_rdata_i,
    input                         mem_ret_ready_i,
    output   [31:0]               mem_req_addr_o ,
    output                        mem_req_valid_o,
    output                        mem_req_ren_o  ,
    output                        mem_req_wen_o  ,
    output   [3:0]                mem_req_mask_o ,
    output   [2:0]                mem_req_size_o ,
    output                        mem_req_use_o  ,
    output   [31:0]               mem_req_wdata_o
);
//========================================
// 顶层信号定义
//========================================
localparam ADDR_WIDTH = 4;
// === 清洗流水线 ===
// 引发清洗的信号
wire id_branch_flush;
wire id_fencei_flush;
wire ex_branch_flush;
// 各级流水线接受的清洗信号
wire if_flush = id_branch_flush | id_fencei_flush | ex_branch_flush;
wire ic_flush = if_flush;
wire ic_fencei = id_fencei_flush;
wire id_flush = ex_branch_flush;
// === 跳转 ===
wire [31:0] id_branch_npc;
wire [31:0] ex_branch_npc;
wire [31:0] branch_npc = ex_branch_flush ? ex_branch_npc : id_branch_npc;
wire [31:0] id_pht_pc;
wire        id_pht_taken;
wire        id_pht_update;
wire        ex_btb_update;
wire [31:0] ex_btb_pc;
wire [31:0] ex_btb_target;
// === 取操作数 ===
wire [ADDR_WIDTH-1:0]   raddr1;
wire [ADDR_WIDTH-1:0]   raddr2;
wire [31:0]             rdata1;
wire [31:0]             rdata2;
// === DBG ===
`ifdef YSYXSOC
wire [31:0]                      id_dbg_inst/* verilator public_flat */;
wire [5:0]                     id_dbg_optype/* verilator public_flat */;
wire [31:0]                        ex_dbg_pc/* verilator public_flat */;
wire [31:0]                      ex_dbg_inst/* verilator public_flat */;
wire [5:0]                     ex_dbg_optype/* verilator public_flat */;
wire [31:0]                       mem_dbg_pc/* verilator public_flat */;
wire [31:0]                     mem_dbg_inst/* verilator public_flat */;
wire                       mem_dbg_is_device/* verilator public_flat */;
wire [5:0]                    mem_dbg_optype/* verilator public_flat */;
`endif
// === 数据冒险 ===
wire [ADDR_WIDTH-1:0]   ex_waddr;
wire [31:0]            ex_wdata;
wire                   ex_wvalid;
wire                    ex_wen;
wire [ADDR_WIDTH-1:0]   mem_waddr;
wire [31:0]           mem_wdata;
wire                  mem_wvalid;
wire                   mem_wen;
// === IF和ICACHE ===
wire                    if_ic_ready;
wire [31:0]             if_ic_pc;
wire [31:0]             if_ic_prepc;
wire                    if_ic_taken;
wire                    if_ic_btb_hit;
wire                    if_ic_valid;
// === ICACHE和ID ===
wire                    ic_id_ready;
wire [31:0]             ic_id_inst;
wire [31:0]             ic_id_pc;
wire [31:0]             ic_id_prepc;
wire                    ic_id_taken;
wire                    ic_id_btb_hit;
wire                    ic_id_valid;
// === ID和EX ===
wire                    id_ex_ready;
wire                    id_ex_ebreak;
wire [31:0]             id_ex_dbg_inst;
wire [31:0]             id_ex_rdata1;
wire [ADDR_WIDTH-1:0]   id_ex_raddr1;
wire [31:0]             id_ex_rdata2;
wire [ADDR_WIDTH-1:0]   id_ex_raddr2;
wire [31:0]             id_ex_pc;
wire [31:0]             id_ex_npc;
wire [31:0]             id_ex_prepc;
wire                    id_ex_btb_hit;
wire [31:0]             id_ex_imm;
wire [3:0]              id_ex_alu_op;
wire [`ysyx_25050136_CSRU_OP_NUM-1:0] id_ex_csru_op;
wire                    id_ex_alu_op1_use_pc;
wire                    id_ex_alu_op2_use_imm;
wire                    id_ex_jump;
wire                    id_ex_mispredict;
wire                    id_ex_jalr;
wire                    id_ex_lsu_ren;
wire                    id_ex_lsu_wen;
wire [3:0]              id_ex_lsu_mask;
wire                    id_ex_lsu_signed;
wire [11:0]             id_ex_csr_addr;
wire                    id_ex_csr_ren;
wire                    id_ex_csr_wen;
wire                    id_ex_csr_wdata_use_rs1;
wire [4:0]              id_ex_rs1;
wire                    id_ex_rd_npc;
wire [ADDR_WIDTH-1:0]   id_ex_rd;
wire                    id_ex_rd_en;
wire                    id_ex_valid;
// === EX和MEM ===
wire                    ex_mem_ready;
wire                    ex_mem_ebreak;
wire [ADDR_WIDTH-1:0]   ex_mem_rd;
wire                    ex_mem_rd_en;
wire [31:0]             ex_mem_gpr_wdata;
wire                    ex_mem_lsu_ren;
wire                    ex_mem_lsu_wen;
wire [3:0]              ex_mem_lsu_mask;
wire                    ex_mem_lsu_signed;
wire [31:0]             ex_mem_lsu_addr;
wire [31:0]             ex_mem_lsu_wdata;
wire                    ex_mem_valid;
// === MEM和WB ===
wire                    mem_wb_ready;
wire                    mem_wb_ebreak;
wire [ADDR_WIDTH-1:0]   mem_wb_rd;
wire                    mem_wb_rd_en;
wire [31:0]             mem_wb_gpr_wdata;
wire                    mem_wb_valid;

assign inst_flush_o = ic_flush;
//========================================
// 子模块
//========================================

ysyx_25050136_IF u_ysyx_25050136_IF(
    .clk            (clk            ),
    .reset          (reset          ),
    .flush          (if_flush       ),
    .branch_npc_i   (branch_npc     ),
    .pht_pc_i       (id_pht_pc      ),
    .pht_update_i   (id_pht_update  ),
    .pht_taken_i    (id_pht_taken   ),
    .btb_pc_i       (ex_btb_pc      ),
    .btb_update_i   (ex_btb_update  ),
    .btb_target_i   (ex_btb_target  ),
    .out_ready_i    (if_ic_ready    ),
    .out_pc_o       (if_ic_pc       ),
    .out_prepc_o    (if_ic_prepc    ),
    .out_taken_o    (if_ic_taken    ),
    .out_btb_hit_o  (if_ic_btb_hit  ),
    .out_valid_o    (if_ic_valid    )
);

ysyx_25050136_ICACHE 
#(
    .OFFSET_WIDTH 	(4             ),
    .NUM_WAY      	(1             ),
    .INDEX_WIDTH  	(2             )
)u_ysyx_25050136_ICACHE(  
    .clk            	(clk               ),
    .reset          	(reset             ),
    .flush          	(ic_flush          ),
    .fencei         	(ic_fencei         ),
    .in_valid_i     	(if_ic_valid       ),
    .in_pc_i        	(if_ic_pc          ),
    .in_prepc_i     	(if_ic_prepc       ),
    .in_taken_i     	(if_ic_taken       ),
    .in_btb_hit_i   	(if_ic_btb_hit     ),
    .in_ready_o     	(if_ic_ready       ),
    .out_ready_i    	(ic_id_ready       ),
    .out_inst_o     	(ic_id_inst        ),
    .out_pc_o       	(ic_id_pc          ),
    .out_prepc_o    	(ic_id_prepc       ),
    .out_taken_o    	(ic_id_taken       ),
    .out_btb_hit_o  	(ic_id_btb_hit     ),
    .out_valid_o    	(ic_id_valid       ),
    .req_valid_o     	(inst_req_valid_o  ),
    .ret_valid_i     	(inst_ret_valid_i  ),
    .ret_last_i      	(inst_ret_last_i   ),
    .ret_data_i      	(inst_ret_data_i   )
);
assign inst_req_addr_o = ic_id_pc;
ysyx_25050136_ID #(
    .ADDR_WIDTH     (ADDR_WIDTH)
) u_ysyx_25050136_ID (
    .clk                      (clk                       ),
    .reset                    (reset                     ),
    .flush                    (id_flush                  ),
    .in_valid_i               (ic_id_valid               ),
    .in_inst_i                (ic_id_inst                ),
    .in_pc_i                  (ic_id_pc                  ),
    .in_prepc_i               (ic_id_prepc               ),
    .in_taken_i               (ic_id_taken               ),
    .in_btb_hit_i             (ic_id_btb_hit             ),
    .in_ready_o               (ic_id_ready               ),
    .out_ready_i              (id_ex_ready               ),
`ifdef YSYXSOC
    .out_dbg_inst_o           (id_dbg_inst               ),
    .out_dbg_optype_o         (id_dbg_optype             ),
`endif
    .out_pc_o                 (id_ex_pc                  ),
    .out_npc_o                (id_ex_npc                 ),
    .out_ebreak_o             (id_ex_ebreak              ),
    .out_prepc_o              (id_ex_prepc               ),
    .out_btb_hit_o            (id_ex_btb_hit             ),
    .out_rdata1_o             (id_ex_rdata1              ),
    .out_rdata2_o             (id_ex_rdata2              ),
    .out_imm_o                (id_ex_imm                 ),
    .out_alu_op_o             (id_ex_alu_op              ),
    .out_csru_op_o            (id_ex_csru_op             ),
    .out_alu_op1_use_pc_o     (id_ex_alu_op1_use_pc      ),
    .out_alu_op2_use_imm_o    (id_ex_alu_op2_use_imm     ),
    .out_jump_o               (id_ex_jump                ),
    .out_mispredict_o         (id_ex_mispredict          ),
    .out_jalr_o               (id_ex_jalr                ),
    .out_lsu_ren_o            (id_ex_lsu_ren             ),
    .out_lsu_wen_o            (id_ex_lsu_wen             ),
    .out_lsu_mask_o           (id_ex_lsu_mask            ),
    .out_lsu_signed_o         (id_ex_lsu_signed          ),
    .out_csr_addr_o           (id_ex_csr_addr            ),
    .out_csr_ren_o            (id_ex_csr_ren             ),
    .out_csr_wen_o            (id_ex_csr_wen             ),
    .out_csr_wdata_use_rs1_o  (id_ex_csr_wdata_use_rs1   ),
    .out_rs1_o                (id_ex_rs1                 ),
    .out_rd_npc_o             (id_ex_rd_npc              ),
    .out_rd_o                 (id_ex_rd                  ),
    .out_rd_en_o              (id_ex_rd_en               ),
    .out_valid_o              (id_ex_valid               ),
    .ex_wen_i                 (ex_wen                    ),
    .ex_wvalid_i              (ex_wvalid                 ),
    .ex_waddr_i               (ex_waddr                  ),
    .ex_wdata_i               (ex_wdata                  ),
    .mem_wen_i                (mem_wen                   ),
    .mem_wvalid_i             (mem_wvalid                ),
    .mem_waddr_i              (mem_waddr                 ),
    .mem_wdata_i              (mem_wdata                 ),
    .out_rdata1_i             (rdata1                    ),
    .out_raddr1_o             (raddr1                    ),
    .out_rdata2_i             (rdata2                    ),
    .out_raddr2_o             (raddr2                    ),
    .branch_flush_o           (id_branch_flush           ),
    .branch_npc_o             (id_branch_npc             ),
    .pht_update_o             (id_pht_update             ),
    .pht_pc_o                 (id_pht_pc                 ),
    .pht_taken_o              (id_pht_taken              ),
    .fencei_flush_o           (id_fencei_flush           )
);

ysyx_25050136_EX #(
    .ADDR_WIDTH     (ADDR_WIDTH)
) u_ysyx_25050136_EX (
    .clk                      (clk                      ),
    .reset                    (reset                    ),
    .flush                    (1'b0                     ), // EX stage does not receive external flush
    .in_valid_i               (id_ex_valid              ),
    .in_pc_i                  (id_ex_pc                 ),
    .in_npc_i                 (id_ex_npc                ),
    .in_ebreak_i              (id_ex_ebreak             ),
    .in_prepc_i               (id_ex_prepc              ),
    .in_btb_hit_i             (id_ex_btb_hit            ),
    .in_rdata1_i              (id_ex_rdata1             ),
    .in_rdata2_i              (id_ex_rdata2             ),
    .in_imm_i                 (id_ex_imm                ),
    .in_alu_op_i              (id_ex_alu_op             ),
    .in_csru_op_i             (id_ex_csru_op            ),
    .in_alu_op1_use_pc_i      (id_ex_alu_op1_use_pc     ),
    .in_alu_op2_use_imm_i     (id_ex_alu_op2_use_imm    ),
    .in_jump_i                (id_ex_jump               ),
    .in_mispredict_i          (id_ex_mispredict         ),
    .in_jalr_i                (id_ex_jalr               ),
    .in_lsu_ren_i             (id_ex_lsu_ren            ),
    .in_lsu_wen_i             (id_ex_lsu_wen            ),
    .in_lsu_mask_i            (id_ex_lsu_mask           ),
    .in_lsu_signed_i          (id_ex_lsu_signed         ),
    .in_csr_addr_i            (id_ex_csr_addr           ),
    .in_csr_ren_i             (id_ex_csr_ren            ),
    .in_csr_wen_i             (id_ex_csr_wen            ),
    .in_csr_wdata_use_rs1_i   (id_ex_csr_wdata_use_rs1  ),
    .in_rs1_i                 (id_ex_rs1                ),
    .in_rd_npc_i              (id_ex_rd_npc             ),
    .in_rd_i                  (id_ex_rd                 ),
    .in_rd_en_i               (id_ex_rd_en              ),
    .in_ready_o               (id_ex_ready              ),
`ifdef YSYXSOC
    .in_dbg_inst_i            (id_dbg_inst              ),
    .in_dbg_optype_i          (id_dbg_optype            ),
    .out_dbg_pc_o             (ex_dbg_pc                ),
    .out_dbg_inst_o           (ex_dbg_inst              ),
    .out_dbg_optype_o         (ex_dbg_optype            ),
`endif
    .out_ready_i              (ex_mem_ready             ),
    .out_ebreak_o             (ex_mem_ebreak            ),
    .out_rd_o                 (ex_mem_rd                ),
    .out_rd_en_o              (ex_mem_rd_en             ),
    .out_gpr_wdata_o          (ex_mem_gpr_wdata         ),
    .out_lsu_ren_o            (ex_mem_lsu_ren           ),
    .out_lsu_wen_o            (ex_mem_lsu_wen           ),
    .out_lsu_mask_o           (ex_mem_lsu_mask          ),
    .out_lsu_signed_o         (ex_mem_lsu_signed        ),
    .out_lsu_addr_o           (ex_mem_lsu_addr          ),
    .out_lsu_wdata_o          (ex_mem_lsu_wdata         ),
    .out_valid_o              (ex_mem_valid             ),
    .btb_update_o             (ex_btb_update            ),
    .btb_pc_o                 (ex_btb_pc                ),
    .btb_target_o             (ex_btb_target            ),
    .branch_flush_o           (ex_branch_flush          ),
    .branch_npc_o             (ex_branch_npc            ),
    .wen_o                    (ex_wen                   ),
    .waddr_o                  (ex_waddr                 ),
    .wdata_o                  (ex_wdata                 ),
    .wvalid_o                 (ex_wvalid                )
);


ysyx_25050136_MEM #(
    .ADDR_WIDTH 	(ADDR_WIDTH)
) u_ysyx_25050136_MEM (
    .clk             	(clk                ),
    .reset           	(reset              ),
    .flush           	(1'b0              ),
    .in_valid_i      	(ex_mem_valid       ),
    .in_ebreak_i    	(ex_mem_ebreak      ),
    .in_rd_i         	(ex_mem_rd          ),
    .in_rd_en_i      	(ex_mem_rd_en       ),
    .in_gpr_wdata_i  	(ex_mem_gpr_wdata   ),
    .in_req_ren_i    	(ex_mem_lsu_ren     ),
    .in_req_wen_i    	(ex_mem_lsu_wen     ),
    .in_req_mask_i   	(ex_mem_lsu_mask    ),
    .in_lsu_signed_i 	(ex_mem_lsu_signed  ),
    .in_req_addr_i   	(ex_mem_lsu_addr    ),
    .in_lsu_wdata_i  	(ex_mem_lsu_wdata   ),
    .in_ready_o      	(ex_mem_ready       ),
`ifdef YSYXSOC
    .in_dbg_pc_i     	(ex_dbg_pc          ),
    .in_dbg_inst_i   	(ex_dbg_inst        ),
    .in_dbg_optype_i  	(ex_dbg_optype      ),
    .out_dbg_pc_o    	(mem_dbg_pc         ),
    .out_dbg_inst_o  	(mem_dbg_inst       ),
    .out_dbg_is_device_o(mem_dbg_is_device  ),
    .out_dbg_optype_o	(mem_dbg_optype     ),
`endif
    .out_ready_i     	(mem_wb_ready       ),
    .out_rd_o        	(mem_wb_rd          ),
    .out_ebreak_o     	(mem_wb_ebreak      ),
    .out_rd_en_o     	(mem_wb_rd_en       ),
    .out_gpr_wdata_o 	(mem_wb_gpr_wdata   ),
    .out_valid_o     	(mem_wb_valid       ),
    .wen_o           	(mem_wen            ),
    .waddr_o         	(mem_waddr          ),
    .wdata_o         	(mem_wdata          ),
    .wvalid_o        	(mem_wvalid         ),
    .ret_rdata_i     	(mem_ret_rdata_i    ),
    .ret_ready_i     	(mem_ret_ready_i    ),
    .req_addr_o      	(mem_req_addr_o     ),
    .req_valid_o     	(mem_req_valid_o    ),
    .req_ren_o       	(mem_req_ren_o      ),
    .req_wen_o       	(mem_req_wen_o      ),
    .req_mask_o      	(mem_req_mask_o     ),
    .req_size_o      	(mem_req_size_o     ),
    .req_use_o       	(mem_req_use_o      ),
    .req_wdata_o     	(mem_req_wdata_o    )
);

ysyx_25050136_WB #(
    .ADDR_WIDTH 	(4  )
) u_ysyx_25050136_WB (
    .clk             	(clk              ),
    .reset           	(reset            ),
    .in_valid_i      	(mem_wb_valid     ),
    .in_rd_i         	(mem_wb_rd        ),
    .in_rd_en_i      	(mem_wb_rd_en     ),
    .in_gpr_wdata_i  	(mem_wb_gpr_wdata ),
    .in_ready_o      	(mem_wb_ready     ),
`ifdef YSYXSOC
    .in_dbg_pc_i     	(mem_dbg_pc       ),
    .in_dbg_inst_i   	(mem_dbg_inst     ),
    .in_dbg_is_device_i (mem_dbg_is_device),
    .in_dbg_optype_i  	(mem_dbg_optype   ),
`endif
    .raddr1_i  	        (raddr1           ),
    .raddr2_i     	    (raddr2           ),
    .rdata1_o           (rdata1           ),
    .rdata2_o     	    (rdata2           )
);

endmodule
module ysyx_25050136_NPC
(
    input                                     clk,
    input                                   reset,
    // 指令相关
    // 读地址
    output                        inst_arvalid_o ,
    input                         inst_arready_i ,
    output   [31:0]               inst_araddr_o  ,
    output   [3:0]                inst_arid_o    ,
    output   [7:0]                inst_arlen_o   ,
    output   [2:0]                inst_arsize_o  ,
    output   [1:0]                inst_arburst_o ,
    // 读数据
    input                         inst_rvalid_i  ,
    output                        inst_rready_o  ,
    input    [31:0]               inst_rdata_i   ,
    input    [1:0]                inst_rresp_i   ,
    input                         inst_rlast_i   ,
    input    [3:0]                inst_rid_i     ,
    // 数据相关
    // 写地址                     
    output                        mem_awvalid_o  ,
    input                         mem_awready_i  ,
    output   [31:0]               mem_awaddr_o   ,
    output   [3:0]                mem_awid_o     ,
    output   [7:0]                mem_awlen_o    ,
    output   [2:0]                mem_awsize_o   ,
    output   [1:0]                mem_awburst_o  ,
    // 写数据                      
    output                        mem_wvalid_o   ,
    input                         mem_wready_i   ,
    output   [31:0]               mem_wdata_o    ,
    output   [3:0]                mem_wstrb_o    ,
    output                        mem_wlast_o    ,
    // 写响应                          
    input                         mem_bvalid_i   ,
    output                        mem_bready_o   ,
    input    [1:0]                mem_bresp_i    ,
    input    [3:0]                mem_bid_i      ,
    // 读地址                         
    output                        mem_arvalid_o  ,
    input                         mem_arready_i  ,
    output   [31:0]               mem_araddr_o   ,
    output   [3:0]                mem_arid_o     ,
    output   [7:0]                mem_arlen_o    ,
    output   [2:0]                mem_arsize_o   ,
    output   [1:0]                mem_arburst_o  ,
    // 读数据                         
    input                         mem_rvalid_i   ,
    output                        mem_rready_o   ,
    input    [31:0]               mem_rdata_i    ,
    input    [1:0]                mem_rresp_i    ,
    input                         mem_rlast_i    ,
    input    [3:0]                mem_rid_i      
);
`ifdef YSYXSOC
    always @(*) begin
        if(((inst_rresp_i != 2'd0) & inst_rvalid_i & inst_rready_o) | 
           ((mem_rresp_i != 2'd0) & mem_rvalid_i & mem_rready_o) | 
           ((mem_bresp_i != 2'd0) & mem_bvalid_i & mem_bready_o))
            find_resp();
    end
`endif
    // 内部信号定义
    wire inst_flush;
    wire inst_req_valid;
    wire [31:0] inst_req_addr;
    wire inst_ret_valid;
    wire inst_ret_last;
    wire [31:0] inst_ret_data;
    wire [31:0] mem_req_addr;
    wire [31:0] mem_ret_rdata;
    wire mem_ret_ready;
    wire mem_req_valid;
    wire mem_req_ren;
    wire mem_req_wen;
    wire [3:0]  mem_req_mask;
    wire [2:0]  mem_req_size;
    wire mem_req_use;
    wire [31:0] mem_req_wdata;
    
    ysyx_25050136_DCACHE 
    u_ysyx_25050136_DCACHE(
        .clk         	(clk              ),
        .reset       	(reset            ),
        .m_awvalid_o 	(mem_awvalid_o    ),
        .m_awready_i 	(mem_awready_i    ),
        .m_awaddr_o  	(mem_awaddr_o     ),
        .m_awid_o    	(mem_awid_o       ),
        .m_awlen_o   	(mem_awlen_o      ),
        .m_awsize_o  	(mem_awsize_o     ),
        .m_awburst_o 	(mem_awburst_o    ),
        .m_wvalid_o  	(mem_wvalid_o     ),
        .m_wready_i  	(mem_wready_i     ),
        .m_wdata_o   	(mem_wdata_o      ),
        .m_wstrb_o   	(mem_wstrb_o      ),
        .m_wlast_o   	(mem_wlast_o      ),
        .m_bvalid_i  	(mem_bvalid_i     ),
        .m_bready_o  	(mem_bready_o     ),
        .m_bresp_i   	(mem_bresp_i      ),
        .m_bid_i     	(mem_bid_i        ),
        .m_arvalid_o 	(mem_arvalid_o    ),
        .m_arready_i 	(mem_arready_i    ),
        .m_araddr_o  	(mem_araddr_o     ),
        .m_arid_o    	(mem_arid_o       ),
        .m_arlen_o   	(mem_arlen_o      ),
        .m_arsize_o  	(mem_arsize_o     ),
        .m_arburst_o 	(mem_arburst_o    ),
        .m_rvalid_i  	(mem_rvalid_i     ),
        .m_rready_o  	(mem_rready_o     ),
        .m_rdata_i   	(mem_rdata_i      ),
        .m_rresp_i   	(mem_rresp_i      ),
        .m_rlast_i   	(mem_rlast_i      ),
        .m_rid_i     	(mem_rid_i        ),
        .req_addr_i  	(mem_req_addr     ),
        .req_valid_i 	(mem_req_valid    ),
        .req_ren_i   	(mem_req_ren      ),
        .req_wen_i   	(mem_req_wen      ),
        .req_mask_i  	(mem_req_mask     ),
        .req_size_i  	(mem_req_size     ),
        .req_use_i   	(mem_req_use      ),
        .req_wdata_i 	(mem_req_wdata    ),
        .req_rdata_o 	(mem_ret_rdata    ),
        .req_ready_o 	(mem_ret_ready    )
    );

    ysyx_25050136_NPCCORE
    u_ysyx_25050136_NPCCORE(
        .clk              	(clk             ),
        .reset            	(reset           ),
        .inst_flush_o     	(inst_flush      ),
        .inst_req_valid_o 	(inst_req_valid  ),
        .inst_req_addr_o  	(inst_req_addr   ),
        .inst_ret_valid_i  	(inst_ret_valid  ),
        .inst_ret_last_i   	(inst_ret_last   ),
        .inst_ret_data_i   	(inst_ret_data   ),        
        .mem_ret_rdata_i  	(mem_ret_rdata   ),
        .mem_ret_ready_i  	(mem_ret_ready   ),
        .mem_req_addr_o   	(mem_req_addr    ),
        .mem_req_valid_o  	(mem_req_valid   ),
        .mem_req_ren_o    	(mem_req_ren     ),
        .mem_req_wen_o    	(mem_req_wen     ),
        .mem_req_mask_o   	(mem_req_mask    ),
        .mem_req_size_o   	(mem_req_size    ),
        .mem_req_use_o    	(mem_req_use     ),
        .mem_req_wdata_o  	(mem_req_wdata   )
    );
    
    ysyx_25050136_IMEM2AXI 
    #(
        .OFFSET_WIDTH 	(4  )
    )
    u_ysyx_25050136_IMEM2AXI(
        .clk         	(clk                ),
        .reset       	(reset              ),
        .flush_i        (inst_flush         ),
        .m_arvalid_o 	(inst_arvalid_o     ),
        .m_arready_i 	(inst_arready_i     ),
        .m_araddr_o  	(inst_araddr_o      ),
        .m_arid_o    	(inst_arid_o        ),
        .m_arlen_o   	(inst_arlen_o       ),
        .m_arsize_o  	(inst_arsize_o      ),
        .m_arburst_o 	(inst_arburst_o     ),
        .m_rvalid_i  	(inst_rvalid_i      ),
        .m_rready_o  	(inst_rready_o      ),
        .m_rdata_i   	(inst_rdata_i       ),
        .m_rresp_i   	(inst_rresp_i       ),
        .m_rlast_i   	(inst_rlast_i       ),
        .m_rid_i     	(inst_rid_i         ),
        .req_valid_i    (inst_req_valid     ),
        .req_addr_i   	(inst_req_addr      ),
        .ret_valid_o 	(inst_ret_valid     ),
        .ret_last_o  	(inst_ret_last      ),
        .ret_data_o  	(inst_ret_data      )
    );
    
endmodule
module ysyx_25050136_CSRU
     (
         input                                              clk,
         input   [31:0]                                    pc_i,
         input   [`ysyx_25050136_CSRU_OP_NUM-1:0]   operation_i,
         input   [31:0]                            csru_wdata_i,
         input   [11:0]                             csru_addr_i,
         input                                       csru_ren_i,
         input                                       csru_wen_i,
         output  reg [31:0]                        csru_rdata_o
     );

    reg [31:0] csr_wdata1, csr_wdata2;
    reg [11:0] csr_waddr1, csr_waddr2, csr_raddr;
    reg csr_wen1, csr_wen2, csr_ren;
    always @(*) begin
        csr_wdata1 = csru_wdata_i;
        csr_waddr1 = csru_addr_i;
        csr_wen1 = csru_wen_i;
        csr_raddr = csru_addr_i;
        csr_ren = csru_ren_i;
        csr_wdata2 = 0;
        csr_waddr2 = 0;
        csr_wen2 = 0;
        case (1'b1)
            operation_i[`ysyx_25050136_CSRU_CSRRS]: begin
                csr_wdata1 = csru_rdata_o | csru_wdata_i;
            end
            operation_i[`ysyx_25050136_CSRU_CSRRC]: begin
                csr_wdata1 = csru_rdata_o & (~csru_wdata_i);
            end
            operation_i[`ysyx_25050136_CSRU_ECALL]: begin
                csr_wdata1 = pc_i;
                csr_waddr1 = 12'h341;
                csr_wdata2 = 32'd11;
                csr_waddr2 = 12'h342;
                csr_wen2   = 1;
            end
            default:;
        endcase
    end
    
    // CSR 地址参数
    localparam MEPC      = 12'h341;
    localparam MCAUSE    = 12'h342;
    localparam MTVEC     = 12'h305;
    localparam MSTATUS   = 12'h300;
    // 只读CSR
    localparam MVENDORID = 12'hf11;
    localparam MARCHID   = 12'hf12;

    // CSR 物理寄存器
    reg [31:0] mepc, mcause, mtvec, mstatus;

    // --- 写寄存器逻辑 (时序逻辑) ---
    // 将两个写端口的逻辑合并到一个 always 块中
    always @(posedge clk) begin
        // --- 处理写端口 1 ---
        if (csr_wen1) begin
            case (csr_waddr1)
                MEPC:    mepc    <= csr_wdata1;
                MCAUSE:  mcause  <= csr_wdata1;
                MTVEC:   mtvec   <= csr_wdata1;
                MSTATUS: mstatus <= csr_wdata1;
                default: ; // 端口1写其他地址，无操作
            endcase
        end

        // --- 处理写端口 2 ---
        if (csr_wen2) begin
            case (csr_waddr2)
                MEPC:    mepc    <= csr_wdata2;
                MCAUSE:  mcause  <= csr_wdata2;
                MTVEC:   mtvec   <= csr_wdata2;
                MSTATUS: mstatus <= csr_wdata2;
                default: ; // 端口2写其他地址，无操作
            endcase
        end
    end

    // --- 读寄存器逻辑 (组合逻辑) ---
    always @(*) begin
        csru_rdata_o = 32'b0;
        if (csr_ren) begin
            case (csr_raddr)
                MEPC:      csru_rdata_o = mepc;
                MCAUSE:    csru_rdata_o = mcause;
                MTVEC:     csru_rdata_o = mtvec;
                MSTATUS:   csru_rdata_o = mstatus;
                MVENDORID: csru_rdata_o = 32'h79737978; // "ysyx"
                MARCHID:   csru_rdata_o = 32'd25050136; // 你的学号
                default:   csru_rdata_o = 32'b0;       // 读取未实现的CSR返回0
            endcase
        end
    end
endmodule
module ysyx_25050136_DCACHE
(
    input                                      clk          ,
    input                                      reset        ,
    // 写地址                     
    output                                     m_awvalid_o  ,
    input                                      m_awready_i  ,
    output   [31:0]                            m_awaddr_o   ,
    output   [3:0]                             m_awid_o     ,
    output   [7:0]                             m_awlen_o    ,
    output   [2:0]                             m_awsize_o   ,
    output   [1:0]                             m_awburst_o  ,
    // 写数据                                    
    output                                     m_wvalid_o   ,
    input                                      m_wready_i   ,
    output   [31:0]                            m_wdata_o    ,
    output   [3:0]                             m_wstrb_o    ,
    output                                     m_wlast_o    ,
    // 写响应                                        
    input                                      m_bvalid_i   ,
    output                                     m_bready_o   ,
    input    [1:0]                             m_bresp_i    ,
    input    [3:0]                             m_bid_i      ,
    // 读地址                                        
    output                                     m_arvalid_o  ,
    input                                      m_arready_i  ,
    output   [31:0]                            m_araddr_o   ,
    output   [3:0]                             m_arid_o     ,
    output   [7:0]                             m_arlen_o    ,
    output   [2:0]                             m_arsize_o   ,
    output   [1:0]                             m_arburst_o  ,
    // 读数据                                        
    input                                      m_rvalid_i   ,
    output                                     m_rready_o   ,
    input    [31:0]                            m_rdata_i    ,
    input    [1:0]                             m_rresp_i    ,
    input                                      m_rlast_i    ,
    input    [3:0]                             m_rid_i      ,
    // 内部
    input    [31:0]                            req_addr_i   ,
    input                                      req_valid_i  ,
    input                                      req_ren_i    ,
    input                                      req_wen_i    ,
    input    [3:0]                             req_mask_i   ,
    input    [2:0]                             req_size_i   ,
    input                                      req_use_i    ,
    input    [31:0]                            req_wdata_i  ,
    output   [31:0]                            req_rdata_o  ,
    output                                     req_ready_o  
);
    // ==================== cache内部信号定义 ==============================
    // DCACHE状态机
    parameter IDLE  = 2'd0;
    parameter READ  = 2'd1;
    parameter WRITE = 2'd2;
    parameter ACK   = 2'd3;
    // Dcache存储阵列
    reg [31:0] cache_data_temp;
    // Dcache与CPU交互信号
    reg [1:0] state;
    reg [31:0] req_rdata_r;
    reg req_ready_r;
    // 读写使能信号
    wire ren = req_valid_i & req_ren_i;
    wire wen = req_valid_i & req_wen_i;
    // ==================== axi读信号定义 ==============================
    localparam READ_IDLE = 2'd0;
    localparam READ_ADDR = 2'd1;
    localparam READ_DATA = 2'd2;
    // axi读事务信号
    reg [1:0] state_read;
    reg m_rready_r;
    reg [31:0] m_araddr_r;
    reg [3:0] m_arid_r;
    reg [7:0] m_arlen_r;
    reg [2:0] m_arsize_r;
    reg [1:0] m_arburst_r;
    wire ar_fire, r_fire;
    // ==================== axi写信号定义 ==============================
    localparam WRITE_IDLE      = 2'd0;
    localparam WRITE_DATA_ADDR = 2'd1;
    localparam WRITE_WAIT      = 2'd2;
    // axi写事务信号
    reg [1:0] state_write;
    reg m_bready_r;
    reg [31:0] m_awaddr_r;
    reg [3:0] m_awid_r;
    reg [7:0] m_awlen_r;
    reg [2:0] m_awsize_r;
    reg [1:0] m_awburst_r;
    reg [31:0] m_wdata_r;
    reg [3:0] m_wstrb_r;
    reg m_wlast_r;
    reg aw_en, w_en;
    wire aw_fire, w_fire, b_fire;
    // ==================== dcache逻辑实现 ==============================
    // dcache总状态机
    always @(posedge clk) begin
        if (reset) begin
            state <= IDLE;
        end else begin
            case (state)
                IDLE: begin
                    if(req_valid_i) begin
                        if(req_ren_i) begin
                            state <= READ;
                        end else if(req_wen_i) begin
                            state <= WRITE;
                        end
                    end
                end 
                READ: begin
                    if(r_fire && m_rlast_i) begin
                        state <= ACK;
                    end
                end
                WRITE: begin
                    if(b_fire) begin
                        state <= ACK;
                    end
                end
                ACK: begin
                    state <= IDLE;
                end 
            endcase
        end
    end
    // 输出信号
    always @(*) begin
        req_rdata_r = 0;
        req_ready_r = 0;
        if(state == ACK) begin
            req_rdata_r = cache_data_temp;
            req_ready_r = 1;
        end
    end
    assign req_rdata_o = req_rdata_r;
    assign req_ready_o = req_ready_r;
    // ==================== AXI读操作 ==============================
    always @(posedge clk) begin
        if (reset) begin
            state_read   <= READ_IDLE;
            cache_data_temp <= 0;
            m_araddr_r   <= 0;
            m_arid_r     <= 0;
            m_arlen_r    <= 0;
            m_arsize_r   <= 0;
            m_arburst_r  <= 0;
            m_rready_r   <= 0;
        end else begin
            case (state_read)
                READ_IDLE: begin
                    m_rready_r <= 1;
                    if ((state == IDLE) && ren) begin
                        state_read  <= READ_ADDR;
                        m_araddr_r  <= req_addr_i;
                        m_arid_r    <= 4'b0100;
                        m_arlen_r   <= 0;
                        m_arsize_r  <= req_size_i;
                        m_arburst_r <= 0;
                    end
                end 
                READ_ADDR: begin
                    m_rready_r <= 1;
                    if (ar_fire) begin
                        m_araddr_r  <= 0;
                        m_arlen_r   <= 0;
                        m_arsize_r  <= 0;
                        m_arburst_r <= 0;
                        state_read <= READ_DATA;                        
                    end
                end 
                READ_DATA: begin
                    if (r_fire) begin
                        cache_data_temp <= m_rdata_i;
                        if(m_rlast_i) begin
                            m_arid_r <= 0;
                            state_read <= READ_IDLE;
                        end
                        m_rready_r <= 0;
                    end else begin
                        m_rready_r <= 1;                        
                    end
                end 
                default: ;
            endcase
        end
    end

    assign m_arvalid_o = (state_read == READ_ADDR);
    assign m_araddr_o  = m_araddr_r;
    assign m_arid_o = m_arid_r;
    assign m_arlen_o = m_arlen_r;
    assign m_arsize_o = m_arsize_r;
    assign m_arburst_o = m_arburst_r;
    assign m_rready_o = m_rready_r;
    assign ar_fire = m_arvalid_o & m_arready_i;
    assign r_fire = m_rvalid_i & m_rready_o;
    // ==================== AXI写操作 ==============================
    always @(posedge clk) begin
        if(reset) begin
            state_write <= WRITE_IDLE;
            aw_en       <= 0;
            w_en        <= 0;
            m_awaddr_r  <= 0;
            m_awid_r    <= 0;
            m_awlen_r   <= 0;
            m_awsize_r  <= 0;
            m_awburst_r <= 0;
            m_wdata_r   <= 0;
            m_wstrb_r   <= 0;
            m_wlast_r   <= 0;
            m_bready_r  <= 0;
        end else begin
            case (state_write)
                WRITE_IDLE: begin
                    m_bready_r <= 1;
                    aw_en <= 0;
                    w_en  <= 0;
                    if((state == IDLE) && wen) begin
                        state_write <= WRITE_DATA_ADDR;
                        m_awaddr_r  <= req_addr_i;
                        m_awid_r    <= 0;
                        m_awlen_r   <= 0;
                        m_awsize_r  <= req_size_i;
                        m_awburst_r <= 0;
                        m_wdata_r   <= req_wdata_i;
                        m_wstrb_r   <= req_mask_i;
                        m_wlast_r   <= 1;
                    end
                end
                WRITE_DATA_ADDR: begin
                    m_bready_r <= 1;
                    if(aw_fire) begin
                        m_awaddr_r  <= 0;
                        m_awlen_r   <= 0;
                        m_awsize_r  <= 0;
                        m_awburst_r <= 0;
                        aw_en <= 1;
                    end
                    if(w_fire) begin
                        m_wdata_r   <= 0;
                        m_wstrb_r   <= 0;
                        m_wlast_r   <= 0;
                        w_en  <= 1;
                    end
                    if((aw_fire & w_fire) | (aw_en & w_fire) | (w_en & aw_fire)) begin
                        state_write <= WRITE_WAIT;
                    end
                end
                WRITE_WAIT: begin
                    if(b_fire) begin
                        m_bready_r  <= 0;
                        m_awid_r    <= 0;
                        state_write <= WRITE_IDLE;
                    end 
                end
                default:;    
            endcase
        end
    end

    assign m_awvalid_o = (state_write == WRITE_DATA_ADDR) && ~aw_en;
    assign m_awaddr_o  = m_awaddr_r;
    assign m_awid_o    = m_awid_r;
    assign m_awlen_o   = m_awlen_r;
    assign m_awsize_o  = m_awsize_r;
    assign m_awburst_o = m_awburst_r;
    assign m_wvalid_o  = (state_write == WRITE_DATA_ADDR) && ~w_en;
    assign m_wlast_o   = m_wlast_r;
    assign m_wdata_o   = m_wdata_r;
    assign m_wstrb_o   = m_wstrb_r;
    assign m_bready_o  = m_bready_r;    
    assign aw_fire     = m_awvalid_o & m_awready_i;
    assign w_fire      = m_wvalid_o & m_wready_i;
    assign b_fire      = m_bvalid_i & m_bready_o;

`ifdef YSYXSOC
    wire [31:0] mem_type;
    assign mem_type = (req_addr_i >= 32'ha0000000) ? 32'd2 :
                      (req_addr_i >= 32'h30000000) ? 32'd1 :
                      (req_addr_i >= 32'h0f000000) ? 32'd0 : 32'd10;
    always @(posedge clk) begin
        if(wen) begin
            dcache_misscycle(mem_type+32'd3);
            if(state == ACK) dcache_get(mem_type+32'd3);
        end
        if(ren) begin
            dcache_misscycle(mem_type);
            if(state == ACK) dcache_get(mem_type);
        end
    end
`endif
endmodule
module ysyx_25050136_EX
    #(
        parameter ADDR_WIDTH = 4
     )
     (
        // 内部
        input                                                clk,
        input                                              reset,
        input                                              flush,
        input                                         in_valid_i,
        input     [31:0]                                 in_pc_i,
        input     [31:0]                                in_npc_i,
        input                                        in_ebreak_i,
        input     [31:0]                              in_prepc_i,
        input                                       in_btb_hit_i,
        input     [31:0]                             in_rdata1_i,
        input     [31:0]                             in_rdata2_i,
        input     [31:0]                                in_imm_i,
        input     [3:0]                              in_alu_op_i,
        input     [`ysyx_25050136_CSRU_OP_NUM-1:0]  in_csru_op_i,
        input                                in_alu_op1_use_pc_i,
        input                               in_alu_op2_use_imm_i,
        input                                          in_jump_i,
        input                                    in_mispredict_i,
        input                                          in_jalr_i,
        input                                       in_lsu_ren_i,
        input                                       in_lsu_wen_i,
        input     [3:0]                            in_lsu_mask_i,
        input                                    in_lsu_signed_i,
        input     [11:0]                           in_csr_addr_i,
        input                                       in_csr_ren_i,
        input                                       in_csr_wen_i,
        input                             in_csr_wdata_use_rs1_i,
        input     [4:0]                                 in_rs1_i,
        input                                        in_rd_npc_i,
        input     [ADDR_WIDTH-1:0]                       in_rd_i,
        input                                         in_rd_en_i,
        output                                        in_ready_o,
`ifdef YSYXSOC
        input      [31:0]                          in_dbg_inst_i,
        input      [5:0]                         in_dbg_optype_i,
        output     [31:0]                           out_dbg_pc_o,
        output reg [31:0]                         out_dbg_inst_o,
        output reg [5:0]                        out_dbg_optype_o,
`endif
        input                                        out_ready_i,
        output                                      out_ebreak_o,
        output    [ADDR_WIDTH-1:0]                      out_rd_o,
        output                                       out_rd_en_o,
        output    [31:0]                         out_gpr_wdata_o,
        output                                     out_lsu_ren_o,
        output                                     out_lsu_wen_o,
        output    [3:0]                           out_lsu_mask_o,
        output                                  out_lsu_signed_o,
        output    [31:0]                          out_lsu_addr_o,
        output    [31:0]                         out_lsu_wdata_o,
        output                                       out_valid_o,
        // 分支
        output                                      btb_update_o,
        output    [31:0]                                btb_pc_o,
        output    [31:0]                            btb_target_o,
        output                                    branch_flush_o,
        output    [31:0]                            branch_npc_o,
        // 旁路
        output                                             wen_o,
        output                                          wvalid_o,   
        output    [ADDR_WIDTH-1:0]                       waddr_o,
        output    [31:0]                                 wdata_o    
     );
    // ==== 信号定义 ====
    // 时序逻辑
    reg idle;
    reg in_pulse;
    reg [31:0] ex_pc;
    reg [31:0] ex_npc;
    reg ex_ebreak;
    reg [31:0] ex_prepc;
    reg ex_btb_hit;
    reg [31:0] ex_rdata1;
    reg [31:0] ex_rdata2;
    reg [31:0] ex_imm;
    reg [3:0] ex_alu_op;
    reg [`ysyx_25050136_CSRU_OP_NUM-1:0] ex_csru_op;
    reg ex_alu_op1_use_pc;
    reg ex_alu_op2_use_imm;
    reg ex_jump;
    reg ex_mispredict;
    reg ex_jalr;
    reg ex_lsu_ren;
    reg ex_lsu_wen;
    reg [3:0] ex_lsu_mask;
    reg ex_lsu_signed;
    reg [11:0] ex_csr_addr;
    reg ex_csr_ren;
    reg ex_csr_wen;
    reg ex_csr_wdata_use_rs1;
    reg [4:0] ex_rs1;
    reg ex_rd_npc;
    reg [ADDR_WIDTH-1:0] ex_rd;
    reg ex_rd_en;
    // 组合逻辑
    wire in_fire = in_valid_i & in_ready_o;
    wire out_fire = out_valid_o & out_ready_i;

    // === ALU ===
    wire [31:0] alu_opd1;
    wire [31:0] alu_opd2;
    wire [31:0] alu_out; 
    // === 跳转 ===
    wire [31:0] branch_npc;
    wire target_mismatch = (ex_prepc != branch_npc);  // 预测目标与实际目标不匹配
    wire [31:0] bqu_opd1;
    wire [31:0] bqu_opd2;
    wire [31:0] bqu_add_result;
    wire [31:0] bqu_out;
    // === CSRU ===
    wire [31:0] csru_wdata;
    wire [31:0] csru_out;
    
    // ==== 逻辑实现 ====
    always @(posedge clk) begin
        if(reset) begin
            idle <= 1;
            in_pulse <= 0;
        end else begin
            idle <= (flush) | (!in_fire & out_fire) | (!in_fire & !flush & idle);
            in_pulse <= !flush & in_fire;
            if(in_fire) begin
                ex_pc <= in_pc_i;
                ex_npc <= in_npc_i;
                ex_ebreak <= in_ebreak_i;
                ex_prepc <= in_prepc_i;
                ex_btb_hit <= in_btb_hit_i;
                ex_rdata1 <= in_rdata1_i;
                ex_rdata2 <= in_rdata2_i;
                ex_imm <= in_imm_i;
                ex_alu_op <= in_alu_op_i;
                ex_csru_op <= in_csru_op_i;
                ex_alu_op1_use_pc <= in_alu_op1_use_pc_i;
                ex_alu_op2_use_imm <= in_alu_op2_use_imm_i;
                ex_jump <= in_jump_i;
                ex_mispredict <= in_mispredict_i;
                ex_jalr <= in_jalr_i;
                ex_lsu_ren <= in_lsu_ren_i;
                ex_lsu_wen <= in_lsu_wen_i;
                ex_lsu_mask <= in_lsu_mask_i;
                ex_lsu_signed <= in_lsu_signed_i;
                ex_csr_addr <= in_csr_addr_i;
                ex_csr_ren <= in_csr_ren_i;
                ex_csr_wen <= in_csr_wen_i;
                ex_csr_wdata_use_rs1 <= in_csr_wdata_use_rs1_i;
                ex_rs1 <= in_rs1_i;
                ex_rd_npc <= in_rd_npc_i;
                ex_rd <= in_rd_i;
                ex_rd_en <= in_rd_en_i;
            end
        end
    end
    // === ALU ===
    assign alu_opd1 = ex_alu_op1_use_pc ? ex_pc : ex_rdata1;
    assign alu_opd2 = ex_alu_op2_use_imm ? ex_imm : ex_rdata2;
    ysyx_25050136_ALU u_ysyx_25050136_ALU(
        .op1_i          (alu_opd1     ),
        .op2_i          (alu_opd2     ),
        .op_i 	        (ex_alu_op    ),
        .out_o       	(alu_out      )
    );
    // === BQU ===
    assign bqu_out = ex_jalr ? (alu_out & ~32'h1) : alu_out;
    assign branch_npc = (ex_csru_op[`ysyx_25050136_CSRU_ECALL] | ex_csru_op[`ysyx_25050136_CSRU_MRET]) ? csru_out : bqu_out;
    assign branch_flush_o = (ex_mispredict | (ex_jump & target_mismatch))  & in_pulse;
    assign branch_npc_o = ex_jump ? branch_npc : ex_npc;
    assign btb_update_o =  ex_jump & (!ex_btb_hit | target_mismatch) & in_pulse;
    assign btb_target_o = branch_npc;
    assign btb_pc_o = ex_pc;
    // === CSR ===
    assign csru_wdata = ex_csr_wdata_use_rs1 ? ex_rdata1 : {{32-5{1'b0}},ex_rs1};
    ysyx_25050136_CSRU u_ysyx_25050136_CSRU(
        .clk          	(clk         ),
        .pc_i         	(ex_pc       ),
        .operation_i  	(ex_csru_op  ),
        .csru_wdata_i 	(csru_wdata  ),
        .csru_addr_i  	(ex_csr_addr ),
        .csru_ren_i   	(ex_csr_ren  ),
        .csru_wen_i   	(ex_csr_wen  ),
        .csru_rdata_o 	(csru_out    )
    );
    // === 访存 ===
    assign out_lsu_ren_o = ex_lsu_ren;
    assign out_lsu_wen_o = ex_lsu_wen;
    assign out_lsu_mask_o = ex_lsu_mask;
    assign out_lsu_signed_o = ex_lsu_signed;
    assign out_lsu_addr_o = alu_out;
    assign out_lsu_wdata_o = ex_rdata2;
    // === 写回 ===
    assign out_ebreak_o = ex_ebreak;
    assign out_rd_o = ex_rd;
    assign out_rd_en_o = ex_rd_en;
    assign out_gpr_wdata_o = ex_rd_npc ? ex_npc : (ex_csr_ren ? csru_out : alu_out);
    assign wen_o = ex_rd_en & out_valid_o;
    assign wvalid_o = ex_rd_en & ex_rd_npc & out_valid_o;
    assign waddr_o = ex_rd;
    assign wdata_o = ex_npc;
    // === 流水线控制 ===
    assign in_ready_o = idle || out_fire;
    assign out_valid_o = !(idle || flush);
`ifdef YSYXSOC
    always @(posedge clk) begin
        if(reset) begin
            out_dbg_inst_o <= 0;
        end else begin
            if(flush) begin
            end else if(in_fire) begin
                out_dbg_inst_o <= in_dbg_inst_i;
                out_dbg_optype_o <= in_dbg_optype_i;
            end if(out_fire) begin
            end 
        end
    end
    assign out_dbg_pc_o = ex_pc;
    always @(posedge clk) begin
        if(!reset) begin
            if(branch_flush_o) predict_miss_count();
        end
    end
`endif
endmodule
module ysyx_25050136_ICACHE
#(
    parameter OFFSET_WIDTH = 4,
    parameter NUM_WAY = 1,
    parameter INDEX_WIDTH = 2
)
(
    input                                      clk          ,
    input                                      reset        ,
    // CPU 接口
    input                                   flush           ,
    input                                   fencei          ,
    input                                   in_valid_i      ,
    input    [31:0]                         in_pc_i         ,
    input    [31:0]                         in_prepc_i      ,
    input                                   in_taken_i      ,
    input                                   in_btb_hit_i    ,
    output                                  in_ready_o      ,
    input                                   out_ready_i     ,
    output   [31:0]                         out_inst_o      ,
    output   [31:0]                         out_pc_o        ,
    output   [31:0]                         out_prepc_o     ,
    output                                  out_taken_o     ,
    output                                  out_btb_hit_o   ,
    output                                  out_valid_o     ,
    // AXI 接口
    output                                  req_valid_o     ,
    // output   [31:0]                         req_addr_o      ,
    input                                   ret_valid_i     ,
    input                                   ret_last_i      ,
    input    [31:0]                         ret_data_i   
);

    // ==================== 参数 ====================
    parameter LINE_WIDTH   = 8 << OFFSET_WIDTH;
    parameter WORDS        = 1 << (OFFSET_WIDTH - 2);
    parameter TAG_WIDTH    = 32 - OFFSET_WIDTH - INDEX_WIDTH;
    parameter NUM_SET      = 1 << INDEX_WIDTH;
    parameter WAY_WIDTH    = (NUM_WAY > 1) ? $clog2(NUM_WAY) : 1;
    parameter OFFSET_INDEX = (OFFSET_WIDTH > 2) ? OFFSET_WIDTH-2 : 1;
    localparam IDLE = 1'd0;
    localparam MISS = 1'd1;

    // ==================== 信号定义 ====================
    
    // 存储阵列
    reg [LINE_WIDTH-1:0] cache_data  [0:NUM_WAY-1][0:NUM_SET-1]; 
    reg [TAG_WIDTH-1 :0] cache_tag   [0:NUM_WAY-1][0:NUM_SET-1];
    reg                  cache_valid [0:NUM_WAY-1][0:NUM_SET-1];

    // 流水寄存器
    reg        idle;
    reg [31:0] ic_addr;
    reg [31:0] ic_prepc;
    reg        ic_taken;
    reg        ic_btb_hit;

    // 状态机寄存器
    reg state;
    reg [WAY_WIDTH-1:0] replace_way; 
    reg [WAY_WIDTH-1:0] miss_way;    

    // 中间信号
    wire in_fire;
    wire out_fire;
    wire ready_go;
    wire miss;
    
    wire [INDEX_WIDTH-1:0]  addr_index;
    wire [TAG_WIDTH-1:0]    addr_tag;
    wire [OFFSET_INDEX-1:0] addr_offset;

    reg  [NUM_WAY-1:0]    hit_mask;
    reg  [LINE_WIDTH-1:0] selected_line;
    
    wire [31:0] line_word [0:WORDS-1];
    wire [31:0] buf_word  [0:WORDS-1];
    wire [31:0] hit_word;
    wire [31:0] miss_word;

    // 循环变量
    integer k, m, n;
    genvar i;

    // ==================== 逻辑赋值 ====================

    // --- 1. 地址解析与握手 ---
    assign addr_index  = ic_addr[OFFSET_WIDTH+INDEX_WIDTH-1:OFFSET_WIDTH];
    assign addr_tag    = ic_addr[31:OFFSET_WIDTH+INDEX_WIDTH];
    assign addr_offset = (OFFSET_WIDTH > 2) ? ic_addr[OFFSET_WIDTH-1:2] : 0;

    assign in_fire  = in_valid_i & in_ready_o;
    assign out_fire = out_valid_o & out_ready_i;

    // --- 2. 输入流水寄存器更新 ---
    always @(posedge clk) begin
        if (reset) begin
            idle    <= 1'b1;
        end else begin
            idle <= (flush) | (!in_fire & out_fire) | (!in_fire & !flush & idle);
            if (in_fire) begin
                ic_addr    <= in_pc_i;
                ic_prepc   <= in_prepc_i;
                ic_taken   <= in_taken_i;
                ic_btb_hit <= in_btb_hit_i;
            end
        end
    end

    // --- 3. TAG 比较与数据选取（组合逻辑） ---
    always @(*) begin
        hit_mask = {NUM_WAY{1'b0}};
        for (k = 0; k < NUM_WAY; k = k + 1) begin
            if (cache_valid[k][addr_index] && (cache_tag[k][addr_index] == addr_tag))
                hit_mask[k] = 1'b1;
        end
    end

    assign miss = ~(|hit_mask);

    always @(*) begin
        selected_line = {LINE_WIDTH{1'b0}};
        for (k = 0; k < NUM_WAY; k = k + 1) begin
            if (hit_mask[k]) selected_line = cache_data[k][addr_index];
        end
    end

    generate
        for (i = 0; i < WORDS; i = i + 1) begin : SPLIT_HIT
            assign line_word[i] = selected_line[i*32 +: 32];
        end
        for (i = 0; i < WORDS; i = i + 1) begin : SPLIT_MISS
            assign buf_word[i] = cache_data[miss_way][addr_index][i*32 +: 32];
        end
    endgenerate

    assign hit_word  = line_word[addr_offset];
    assign miss_word = buf_word[addr_offset];

    // --- 4. 状态机与 Cache 维护 ---
    always @(posedge clk) begin
        if (reset) begin
            state       <= IDLE;
            replace_way <= 0;
            miss_way    <= 0;
            for (m = 0; m < NUM_WAY; m = m + 1) begin
                for (n = 0; n < NUM_SET; n = n + 1) begin
                    cache_valid[m][n] <= 1'b0;
                end
            end
        end else begin
            if (flush) begin
                if (fencei) begin
                    for (m = 0; m < NUM_WAY; m = m + 1) begin
                        for (n = 0; n < NUM_SET; n = n + 1) begin
                            cache_valid[m][n] <= 1'b0;
                        end
                    end
                end else if (state == MISS) begin
                    cache_valid[miss_way][addr_index] <= 1'b0;
                end
                state <= IDLE;
            end else begin
                case (state)
                    IDLE: begin
                        if (!idle && miss) begin
                            state    <= MISS;
                            miss_way <= replace_way;
                        end
                        replace_way <= (NUM_WAY == 1) ? 0 : replace_way + 1;
                    end

                    MISS: begin
                        if (ret_valid_i) begin
                            cache_data[miss_way][addr_index] <= {ret_data_i, cache_data[miss_way][addr_index][LINE_WIDTH-1:32]};
                            if (ret_last_i) begin
                                cache_tag[miss_way][addr_index]   <= addr_tag;
                                cache_valid[miss_way][addr_index] <= 1'b1;
                                state <= IDLE;
                            end
                        end
                    end
                endcase
            end
        end
    end

    // --- 5. 输出信号 ---
    assign ready_go = (state == IDLE) && !miss;

    assign in_ready_o   = out_fire || idle;
    assign out_valid_o   = !(idle || flush) && ready_go;
    
    assign out_inst_o   = hit_word;
    assign out_pc_o    = ic_addr;
    assign out_prepc_o   = ic_prepc;
    assign out_taken_o   = ic_taken;
    assign out_btb_hit_o = ic_btb_hit;

    assign req_valid_o      = (state == MISS);
    // assign req_addr_o     = ic_addr;

`ifdef YSYXSOC
    reg [31:0] mem_type;
    reg in_pulse;
        always @(posedge clk) begin
        if (reset) begin
            in_pulse <= 1'b0;
        end else begin
            if (in_fire) begin
                in_pulse <= 1'b1;
            end else begin
                in_pulse <= 1'b0;
            end
        end
    end
    always @(posedge clk) begin
        if(!reset && in_pulse) begin
            if(ic_addr >= 32'ha0000000) begin mem_type <= 32'd2; icache_get(2); if(miss) icache_miss(2); end
            else if(ic_addr >= 32'h30000000) begin mem_type <= 32'd1; icache_get(1); if(miss) icache_miss(1); end
            else if(ic_addr >= 32'h0f000000) begin mem_type <= 32'd0; icache_get(0); if(miss) icache_miss(0); end
        end
        if(!reset && !ready_go) begin
            icache_misscycle(mem_type);
        end
    end
`endif
endmodule
module ysyx_25050136_ID
    #(
        parameter ADDR_WIDTH = 4
    )
    (
        input                                                   clk,
        input                                                 reset,
        input                                                 flush,
        input                                            in_valid_i,
        input      [31:0]                                 in_inst_i,
        input      [31:0]                                   in_pc_i,
        input      [31:0]                                in_prepc_i,
        input                                            in_taken_i,
        input                                          in_btb_hit_i,
        output                                           in_ready_o,
        input                                           out_ready_i,
`ifdef YSYXSOC
        output     [31:0]                            out_dbg_inst_o,
        output     [5:0]                           out_dbg_optype_o,
`endif
        // 读操作数以及解决数据冒险
        input                                           ex_wvalid_i,
        input                                              ex_wen_i,
        input      [ADDR_WIDTH-1:0]                      ex_waddr_i,
        input      [31:0]                                ex_wdata_i,
        input                                          mem_wvalid_i,
        input                                             mem_wen_i,
        input      [ADDR_WIDTH-1:0]                     mem_waddr_i,
        input      [31:0]                               mem_wdata_i,
        input      [31:0]                              out_rdata1_i,
        output     [ADDR_WIDTH-1:0]                    out_raddr1_o,
        input      [31:0]                              out_rdata2_i,
        output     [ADDR_WIDTH-1:0]                    out_raddr2_o,
        // 分支预测
        output                                       branch_flush_o,
        output     [31:0]                              branch_npc_o,
        output                                         pht_update_o,
        output     [31:0]                                  pht_pc_o,
        output                                          pht_taken_o,
        // fence.i
        output                                       fencei_flush_o,
        // 传递给EX
        output     [31:0]                                  out_pc_o,
        output     [31:0]                                 out_npc_o,
        output                                         out_ebreak_o,
        output     [31:0]                               out_prepc_o,
        output                                        out_btb_hit_o,
        output     [31:0]                              out_rdata1_o,
        output     [31:0]                              out_rdata2_o,
        output     [31:0]                                 out_imm_o,
        output     [3:0]                               out_alu_op_o,
        output     [`ysyx_25050136_CSRU_OP_NUM-1:0]   out_csru_op_o,
        output                                 out_alu_op1_use_pc_o,
        output                                out_alu_op2_use_imm_o,
        output                                           out_jump_o,
        output                                     out_mispredict_o,
        output                                           out_jalr_o,
        output                                        out_lsu_ren_o,
        output                                        out_lsu_wen_o,
        output     [3:0]                             out_lsu_mask_o,
        output                                     out_lsu_signed_o,
        output     [11:0]                            out_csr_addr_o,
        output                                        out_csr_ren_o,
        output                                        out_csr_wen_o,
        output                              out_csr_wdata_use_rs1_o,
        output     [4:0]                                  out_rs1_o,
        output                                         out_rd_npc_o,
        output     [ADDR_WIDTH-1:0]                        out_rd_o,
        output                                          out_rd_en_o,
        output                                          out_valid_o
    );
    // ==== 信号定义 ====
    // 时序逻辑
    reg idle;
    reg in_pulse;
    reg [31:0] id_pc;
    reg [31:0] id_inst;
    reg [31:0] id_prepc;
    reg        id_taken;
    reg        id_btb_hit;
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
    wire inst_fence_i = (id_inst == 32'h0000100F);
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
    // === 跳转相关 ===
    wire [31:0] bqu_op1;
    wire [31:0] bqu_op2;
    wire [5:0]  bqu_op;
    wire        bqu_out;
    // === 数据冒险 ===
    wire raw1_hazard;
    wire raw2_hazard;
    wire ren1, ren2;
    // ==== 逻辑实现 ====
    always @(posedge clk) begin
        if(reset) begin
            idle <= 1;
            in_pulse <= 0;
            // id_pc <= 0;
            // id_inst <= 0;
            // id_prepc <= 0;
            // id_taken <= 0;
            // id_btb_hit <= 0;
        end else begin
            idle <= (flush) | (!in_fire & out_fire) | (!in_fire & !flush & idle);
            in_pulse <= !flush & in_fire;
            if(in_fire) begin
                id_pc <= in_pc_i;
                id_inst <= in_inst_i;
                id_prepc <= in_prepc_i;
                id_taken <= in_taken_i;
                id_btb_hit <= in_btb_hit_i;
            end
        end
    end
    // === 读操作数与数据冒险 ===
    assign raw1_hazard = (out_raddr1_o != 0) && ren1 && (((out_raddr1_o == ex_waddr_i)  && !ex_wvalid_i  && ex_wen_i) ||
                                                         ((out_raddr1_o == mem_waddr_i) && !mem_wvalid_i && mem_wen_i));
    assign raw2_hazard = (out_raddr2_o != 0) && ren2 && (((out_raddr2_o == ex_waddr_i)  && !ex_wvalid_i  && ex_wen_i) ||
                                                         ((out_raddr2_o == mem_waddr_i) && !mem_wvalid_i && mem_wen_i));
    assign ready_go = !(raw1_hazard | raw2_hazard);
    assign out_raddr1_o = rs1[ADDR_WIDTH-1:0];
    assign out_raddr2_o = rs2[ADDR_WIDTH-1:0];
    assign ren1 = ~(type_lui | type_auipc | type_jal | inst_csrrwi | inst_csrrsi | inst_csrrci);
    assign ren2 = type_branch | type_store | type_op;
    // === 选择ALU相关操作 ===
    assign out_alu_op_o = 
        (type_auipc | type_store | type_load | inst_addi | inst_add | type_jalr | type_jal | type_branch) ? 4'd1 :
        (inst_sub)                               ? 4'd2 :
        (inst_xor | inst_xori)                   ? 4'd3 :
        (inst_or  | inst_ori)                    ? 4'd4 :
        (inst_and | inst_andi)                   ? 4'd5 :
        (inst_sltiu | inst_sltu)                 ? 4'd6 :
        (inst_slti | inst_slt)                   ? 4'd7 :
        (inst_srai | inst_sra)                   ? 4'd8 :
        (inst_slli | inst_sll)                   ? 4'd9 :
        (inst_srli | inst_srl)                   ? 4'd10 :
        (type_lui)                               ? 4'd11 :
                                                   0; // 默认操作，例如对于无效指令

    // === 选择CSRU相关操作 ===
    assign out_csru_op_o[`ysyx_25050136_CSRU_CSRRW] = inst_csrrw | inst_csrrwi;
    assign out_csru_op_o[`ysyx_25050136_CSRU_CSRRS] = inst_csrrs | inst_csrrsi;
    assign out_csru_op_o[`ysyx_25050136_CSRU_CSRRC] = inst_csrrc | inst_csrrci;
    assign out_csru_op_o[`ysyx_25050136_CSRU_MRET]  = inst_mret;
    assign out_csru_op_o[`ysyx_25050136_CSRU_ECALL] = inst_ecall;
    // === 选择ALU的操作数 ===
    assign out_alu_op1_use_pc_o = type_auipc | type_branch | type_jal;
    assign out_alu_op2_use_imm_o = type_load | type_store | type_op_imm | type_auipc | type_lui | type_branch | type_jalr | type_jal;
    // === 选择BQU的操作数, 并判断跳转 ===
    assign bqu_op1 = out_rdata1_o;
    assign bqu_op2 = out_rdata2_o;
    assign bqu_op = {inst_bgeu, inst_bltu, inst_bge, inst_blt, inst_bne, inst_beq};
    ysyx_25050136_BQU u_bqu (
        .op1_i      (bqu_op1),
        .op2_i      (bqu_op2),
        .op_i       (bqu_op),
        .out_o      (bqu_out)
    );
    assign pht_update_o = (type_branch | type_jal | type_jalr | inst_ecall | inst_mret) & in_pulse;
    assign pht_pc_o = id_pc;
    assign pht_taken_o = out_jump_o;
    assign out_jump_o = bqu_out | type_jal | type_jalr | inst_ecall | inst_mret;
    assign branch_flush_o = !(type_branch | type_jal | type_jalr | inst_ecall | inst_mret) && id_btb_hit && id_taken && in_pulse;
    assign branch_npc_o = out_npc_o;
    assign out_jalr_o = type_jalr;
    assign out_mispredict_o = (type_branch | type_jal | type_jalr | inst_ecall | inst_mret) & (out_jump_o ^ (id_taken & id_btb_hit)); // 预测错误
    assign out_prepc_o = id_prepc;
    assign out_btb_hit_o = id_btb_hit;
    // === fence.i ===
    assign fencei_flush_o = inst_fence_i & in_pulse;
    assign out_ebreak_o = inst_ebreak & in_pulse;
    // === 访存相关 ===
    assign out_lsu_ren_o = type_load;
    assign out_lsu_wen_o = type_store;
    assign out_lsu_mask_o = (inst_lw | inst_sw) ? 4'hF :
           ((inst_sh | inst_lhu | inst_lh) ? 4'h3 :
            ((inst_sb | inst_lbu | inst_lb) ? 4'h1 : 0));
    assign out_lsu_signed_o = (inst_lhu | inst_lbu) ? 0 : 1;
    // === 选择CSR的操作数 ===
    assign out_csr_addr_o = inst_ecall ? 12'h305: (inst_mret ? 12'h341 : id_inst[31:20]);// 作为csr指令的地址，以及ecall/mret的读地址
    assign out_csr_ren_o = (type_system & ~inst_ebreak) & !((inst_csrrw | inst_csrrwi) && (rd == 0));
    assign out_csr_wen_o = (type_system & ~inst_ebreak) & !((inst_csrrs | inst_csrrsi | inst_csrrc | inst_csrrci) && (rs1 == 0));
    assign out_csr_wdata_use_rs1_o = inst_csrrw | inst_csrrs | inst_csrrc;
    // === 写回寄存器地址 ===
    assign out_rd_npc_o = type_jalr | type_jal;
    assign out_rd_o  = rd[ADDR_WIDTH-1:0];
    assign out_rd_en_o = type_op_imm | type_auipc | type_lui | type_op | type_system | type_load | type_jalr | type_jal;
    // === 操作数 ===
    assign out_pc_o = id_pc;
    assign out_npc_o = id_pc + 4;
    assign out_rdata1_o = ((out_raddr1_o != 0) && (out_raddr1_o == ex_waddr_i) && ex_wvalid_i) ? ex_wdata_i :
                          ((out_raddr1_o != 0) && (out_raddr1_o == mem_waddr_i) && mem_wvalid_i) ? mem_wdata_i :
                          out_rdata1_i;
    assign out_rdata2_o =((out_raddr2_o != 0) && (out_raddr2_o == ex_waddr_i) && ex_wvalid_i) ? ex_wdata_i :
                         ((out_raddr2_o != 0) && (out_raddr2_o == mem_waddr_i) && mem_wvalid_i) ? mem_wdata_i :
                         out_rdata2_i;
    assign out_imm_o = inst_Itype ? immI :
                          (inst_Stype ? immS :
                          (inst_Utype ? immU :
                          (inst_Btype ? immB :
                          (inst_Jtype ? immJ :
                            32'b0))));
    assign out_rs1_o = rs1;
    // === 握手信号 ===
    assign in_ready_o = idle || out_fire;
    assign out_valid_o = !(idle || flush) && ready_go;
`ifdef YSYXSOC
    wire [31:0] id_dbg_pc = out_pc_o;
    assign out_dbg_inst_o = id_inst;
    assign out_dbg_optype_o = {type_jalr | type_jal, type_branch, type_load, type_store, type_system, type_op_imm | type_auipc | type_lui | type_op};
    always @(posedge clk) begin
        if(!reset) begin
            if(!ready_go) related_delay_get();
            if(branch_flush_o) predict_not_jump_count();
        end
    end
`endif

endmodule
module ysyx_25050136_IF
    (
        input         clk           ,
        input         reset         ,
        input         flush         ,
        input  [31:0] branch_npc_i  ,
        input  [31:0] pht_pc_i      ,
        input         pht_update_i  ,
        input         pht_taken_i   ,
        input  [31:0] btb_pc_i      ,
        input         btb_update_i  ,
        input  [31:0] btb_target_i  , // 为了时序，暂时未使用，btb更新值就是branch_npc_i
        input         out_ready_i   ,
        output [31:0] out_pc_o      ,
        output [31:0] out_prepc_o   ,
        output        out_taken_o   ,
        output        out_btb_hit_o ,
        output        out_valid_o
    );
     
    localparam RESET_PC = 32'h30000000;  

    localparam PHT_INDEX = 4;
    localparam BTB_INDEX = 4;
    localparam BTB_TAG   = 9;
    // ==== 信号定义 ====
    // 时序逻辑
    reg [31:0] pc;
    wire out_fire = out_ready_i & out_valid_o;
    wire [PHT_INDEX-1:0] pht_pc_index_w = pht_pc_i[2+:PHT_INDEX];
    wire [PHT_INDEX-1:0] pht_pc_index_r = pc[2+:PHT_INDEX];
    wire [BTB_INDEX-1:0] btb_pc_index_w = btb_pc_i[2+:BTB_INDEX] ^ btb_pc_i[2+BTB_INDEX+:BTB_INDEX];
    wire [BTB_TAG-1:0]   btb_pc_tag_w   = btb_pc_i[2+BTB_INDEX+:BTB_TAG] ^ btb_pc_i[9+BTB_INDEX+:BTB_TAG];
    wire [BTB_INDEX-1:0] btb_pc_index_r = pc[2+:BTB_INDEX] ^ pc[2+BTB_INDEX+:BTB_INDEX];
    wire [BTB_TAG-1:0]   btb_pc_tag_r   = pc[2+BTB_INDEX+:BTB_TAG] ^ pc[9+BTB_INDEX+:BTB_TAG];
    wire        pht_pred_taken;
    wire [31:0] btb_pred_npc;

    wire [31:0] next_pc = (pht_pred_taken && out_btb_hit_o) ? btb_pred_npc : (pc + 4);
`ifdef YSYXSOC
    wire [31:0] if_dbg_pc = out_pc_o;
    always @(posedge clk) begin
        if(out_fire) fetch_get();
    end
`endif

    // ==== 逻辑实现 ====
    always @(posedge clk) begin
        if(reset) begin
            pc <= RESET_PC;
        end else begin
            if(flush) begin
                pc <= branch_npc_i;
            end else if(out_fire) begin
                pc <= next_pc;
            end
        end
    end

    assign out_pc_o = pc;
    assign out_prepc_o = next_pc; 
    assign out_taken_o = pht_pred_taken;  
    assign out_valid_o = !flush;

    ysyx_25050136_PHT 
    #(
        .INDEX_WIDTH (PHT_INDEX  )
    ) u_PHT (
        .clk          (clk            ),
        .reset        (reset          ),
        .index_w      (pht_pc_index_w   ),
        .index_r      (pht_pc_index_r   ),
        .pred_taken_i (pht_taken_i    ),
        .update_en_i  (pht_update_i   ),
        .pred_taken_o (pht_pred_taken)
    );

    ysyx_25050136_BTB
    #(
        .INDEX_WIDTH (BTB_INDEX     ),
        .TAG_WIDTH   (BTB_TAG       )
    ) u_BTB (
        .clk          (clk             ),
        .reset        (reset           ),
        .index_r      (btb_pc_index_r  ),
        .tag_r        (btb_pc_tag_r    ),
        .index_w      (btb_pc_index_w  ),
        .tag_w        (btb_pc_tag_w    ),
        .update_en_i  (btb_update_i    ),
        .target_pc_i  (branch_npc_i    ),
        .hit_o        (out_btb_hit_o   ),
        .target_pc_o  (btb_pred_npc)
    );


endmodule

module ysyx_25050136_PHT
    #(
        parameter INDEX_WIDTH = 10
    )
    (
        input                     clk         ,
        input                     reset       ,
        input  [INDEX_WIDTH-1:0]  index_w     ,
        input  [INDEX_WIDTH-1:0]  index_r     ,
        input                     pred_taken_i,
        input                     update_en_i ,
        output                    pred_taken_o
    );
    localparam PHT_SIZE = 1 << INDEX_WIDTH;
    // ==== 信号定义 ====
    reg [1:0] pht_array [0:PHT_SIZE-1]; // 2-bit saturating counter
    integer i;
    // ==== 逻辑实现 ====
    // PHT 初始化
    always @(posedge clk) begin
        if(reset) begin
            for(i = 0; i < PHT_SIZE; i = i + 1) begin
                pht_array[i] <= 2'b01; // 初始状态为弱不跳转
            end
        end else if(update_en_i) begin
            if(pred_taken_i) begin
                // 实际跳转，状态加1，饱和在11
                if(pht_array[index_w] != 2'b11)
                    pht_array[index_w] <= pht_array[index_w] + 2'b01;
            end else begin
                // 实际不跳转，状态减1，饱和在00
                if(pht_array[index_w] != 2'b00)
                    pht_array[index_w] <= pht_array[index_w] - 2'b01;
            end
        end
    end
    // 输出预测结果
    assign pred_taken_o = (pht_array[index_r][1] == 1'b1) ? 1'b1 : 1'b0;

endmodule

module ysyx_25050136_BTB
    #(
        parameter INDEX_WIDTH = 10,
        parameter TAG_WIDTH   = 20
    )
    (
        input                     clk         ,
        input                     reset       ,
        input  [INDEX_WIDTH-1:0]  index_r     ,
        input  [TAG_WIDTH-1:0]    tag_r       ,
        input  [INDEX_WIDTH-1:0]  index_w     ,
        input  [TAG_WIDTH-1:0]    tag_w       ,
        input                     update_en_i ,
        input  [31:0]             target_pc_i ,
        output                    hit_o       ,
        output [31:0]             target_pc_o
    );
    localparam BTB_SIZE = 1 << INDEX_WIDTH;
    // ==== 信号定义 ====
    reg btb_valid [0:BTB_SIZE-1];
    reg [TAG_WIDTH-1:0] btb_tag [0:BTB_SIZE-1];
    reg [31:0] btb_target [0:BTB_SIZE-1];
    // 查找逻辑
    integer i;
    // ==== 逻辑实现 ====
    // BTB 初始化
    always @(posedge clk) begin
        if(reset) begin
            for(i = 0; i < BTB_SIZE; i = i + 1) begin
                btb_valid[i] <= 0;
            end
        end else if(update_en_i) begin
            btb_valid[index_w]  <= 1'b1;
            btb_tag[index_w]    <= tag_w;
            btb_target[index_w] <= target_pc_i;
        end
    end
    // 输出目标地址
    assign hit_o = btb_valid[index_r] && (btb_tag[index_r] == tag_r);
    assign target_pc_o = hit_o ? btb_target[index_r] : 32'b0;

endmodule
module ysyx_25050136_IMEM2AXI
#(
    parameter OFFSET_WIDTH = 4 // cache line = 16B
)
(
    input                                      clk          ,
    input                                      reset        ,
    // 读地址                                        
    output                                     m_arvalid_o  ,
    input                                      m_arready_i  ,
    output   [31:0]                            m_araddr_o   ,
    output   [3:0]                             m_arid_o     ,
    output   [7:0]                             m_arlen_o    ,
    output   [2:0]                             m_arsize_o   ,
    output   [1:0]                             m_arburst_o  ,
    // 读数据                                        
    input                                      m_rvalid_i   ,
    output                                     m_rready_o   ,
    input    [31:0]                            m_rdata_i    ,
    input    [1:0]                             m_rresp_i    ,
    input                                      m_rlast_i    ,
    input    [3:0]                             m_rid_i      ,
    // 内部
    input                                      flush_i      ,
    input                                      req_valid_i  ,
    input    [31:0]                            req_addr_i   ,
    output                                     ret_valid_o  ,
    output                                     ret_last_o   ,
    output   [31:0]                            ret_data_o   
);    
    // ==================== axi信号定义 ================================
    parameter BURST_NUM = 2 ** (OFFSET_WIDTH - 2) - 1;
    localparam READ_IDLE = 2'd0;
    localparam READ_ADDR = 2'd1;
    localparam READ_DATA = 2'd2;
    // 由于flush信号引发的读数据丢弃
    reg is_flush;
    // axi读请求信号
    reg [1:0] state_read;
    reg m_rready_r;
    reg [3:0] m_arid_r;
    reg [31:0] m_araddr_r;
    reg [7:0] m_arlen_r;
    reg [2:0] m_arsize_r;
    reg [1:0] m_arburst_r;
    wire ar_fire, r_fire;
    // 根据存储介质，选择读取方式
    reg [1:0] cnt;
    wire is_sdram_region = (req_addr_i[31:28] == 4'hA); // 0xA000_0000 ~ 0xAFFF_FFFF (越界问题由设备端判断)
    wire [31:0] align_addr = {req_addr_i[31:OFFSET_WIDTH], {OFFSET_WIDTH{1'b0}}};
    wire [31:0] real_addr = align_addr + {28'd0, cnt, 2'd0};
    // ==================== axi信号定义 ================================
    // 读事务
    always @(posedge clk) begin
        if (reset) begin
            state_read      <= READ_IDLE;
            is_flush        <= 0;
            cnt             <= 0;
            m_araddr_r      <= 0;
            m_arid_r        <= 0;
            m_arlen_r       <= 0;   
            m_arsize_r      <= 0;
            m_arburst_r     <= 0;
            m_rready_r      <= 0;
        end else begin
            case(state_read)
                READ_IDLE: begin
                    m_rready_r <= 1;
                    if(is_flush | flush_i) begin
                        is_flush <= 0;
                        cnt <= 0;
                    end else if(req_valid_i) begin
                        state_read <= READ_ADDR;
                        m_arid_r    <= 4'b1000;
                        m_arsize_r  <= 3'b010;
                        m_araddr_r  <= real_addr;
                        if(is_sdram_region) begin // cache line
                            m_arlen_r   <= BURST_NUM;      
                            m_arburst_r <= 2'b01;          
                        end else begin // word
                            m_arlen_r   <= 0;
                            m_arburst_r <= 2'b00;
                        end
                    end
                end 
                READ_ADDR: begin
                    if(flush_i) begin
                        is_flush <= 1;
                    end
                    if (ar_fire) begin
                        if(!is_sdram_region) begin
                            cnt <= cnt + 1;
                        end
                        m_araddr_r <= 0;
                        m_arlen_r <= 0;
                        m_arsize_r <= 0;
                        m_arburst_r <= 0;
                        state_read <= READ_DATA;                        
                    end
                end 
                READ_DATA: begin
                    if(flush_i) begin
                        is_flush <= 1;
                    end
                    if (r_fire) begin
                        if(m_rlast_i) begin
                            m_arid_r <= 0;
                            state_read <= READ_IDLE;
                        end
                        m_rready_r <= 0;
                    end else begin
                        m_rready_r <= 1;                        
                    end
                end 
                default: ;
            endcase
        end
    end

    assign m_arvalid_o = (state_read == READ_ADDR);
    assign m_araddr_o  = m_araddr_r;
    assign m_arid_o = m_arid_r;
    assign m_arlen_o = m_arlen_r;
    assign m_arsize_o = m_arsize_r;
    assign m_arburst_o = m_arburst_r;
    assign m_rready_o = m_rready_r;
    
    assign ar_fire = m_arvalid_o & m_arready_i;
    assign r_fire = m_rvalid_i & m_rready_o;

    assign ret_valid_o = !is_flush & r_fire;
    assign ret_last_o = !is_flush & m_rlast_i & r_fire && (cnt == 0);
    assign ret_data_o = m_rdata_i;
// ========================Simulation only====================================
`ifdef verilator
reg [79:0] dbg_axi_state;
always @(*) begin
    case (state_read)
        READ_IDLE   : dbg_axi_state = "READ_IDLE";
        READ_ADDR   : dbg_axi_state = "READ_ADDR";
        READ_DATA   : dbg_axi_state = "READ_DATA";
        default     : dbg_axi_state = "UNKNOW";
    endcase
end
`endif
endmodule //ysyx_25050136_ICACHE
module ysyx_25050136_MEM
    #(
       parameter ADDR_WIDTH = 4
    )
    (
        input                                              clk ,
        input                                            reset ,
        input                                            flush ,
        input                                       in_valid_i ,
        input                                      in_ebreak_i ,
        input    [ADDR_WIDTH-1:0]                      in_rd_i ,
        input                                       in_rd_en_i ,
        input    [31:0]                         in_gpr_wdata_i ,
        input                                     in_req_ren_i ,
        input                                     in_req_wen_i ,
        input    [3:0]                           in_req_mask_i ,
        input                                  in_lsu_signed_i ,
        input    [31:0]                          in_req_addr_i ,
        input    [31:0]                         in_lsu_wdata_i ,
        output                                      in_ready_o ,
`ifdef YSYXSOC
        input      [31:0]                          in_dbg_pc_i ,
        input      [31:0]                        in_dbg_inst_i ,
        input      [5:0]                       in_dbg_optype_i ,
        output reg [31:0]                         out_dbg_pc_o ,
        output reg [31:0]                       out_dbg_inst_o ,
        output reg                         out_dbg_is_device_o ,
        output reg [5:0]                      out_dbg_optype_o , 
`endif
        input                                      out_ready_i ,
        output   [ADDR_WIDTH-1:0]                     out_rd_o ,
        output                                    out_ebreak_o ,
        output                                     out_rd_en_o ,
        output   [31:0]                        out_gpr_wdata_o ,
        output                                     out_valid_o ,
        output                                           wen_o ,
        output   [ADDR_WIDTH-1:0]                      waddr_o ,
        output   [31:0]                                wdata_o ,
        output                                        wvalid_o ,
        // 与DCACHE握手信号
        input    [31:0]                            ret_rdata_i ,
        input                                      ret_ready_i ,
        output   [31:0]                            req_addr_o  ,
        output                                     req_valid_o ,
        output                                     req_ren_o   ,
        output                                     req_wen_o   ,
        output   [3:0]                             req_mask_o  ,
        output   [2:0]                             req_size_o  ,
        output                                     req_use_o   ,
        output   [31:0]                            req_wdata_o  
    );
    // ==== 信号定义 ====
    localparam IDLE       = 1'd0;
    localparam MISS       = 1'd1;
    // 时序逻辑
    reg idle;
    reg state;
    reg [ADDR_WIDTH-1:0] mem_rd;
    reg                  mem_ebreak;
    reg                  mem_rd_en;
    reg [31:0]           mem_gpr_wdata;
    reg [31:0]           mem_addr;
    reg                  mem_ren;
    reg                  mem_wen;
    reg                  mem_clint;
    // === 有访存时 ===
    reg [31:0]           ret_rdata;
    reg                  lsu_signed;
    reg [31:0]           lsu_wdata;
    reg                  req_valid;
    reg [3:0]            req_mask;
    // 组合逻辑
    wire in_fire = in_valid_i & in_ready_o;
    wire out_fire = out_valid_o & out_ready_i;
    wire ready_go;
    // === 有访存时 ===
    wire is_clint = (in_req_addr_i >= 32'h0200_0000) && (in_req_addr_i < 32'h0201_0000);
    wire mem_hit = (in_req_ren_i | in_req_wen_i) & ~is_clint;
    wire [31:0] clint_rdata;
    wire [3:0] byte_sel;
    reg [3:0] req_strb;
    reg [2:0] req_size;
    reg [31:0] req_wdata;
    reg [31:0] gpr_data;
    // ==== 逻辑实现 ====
    // === 无访存时 ===
    always @(posedge clk) begin
        if(reset) begin
            idle         <= 1;
            // mem_rd       <= 0;
            // mem_ebreak   <= 0;
            // mem_rd_en    <= 0;
            // mem_gpr_wdata <= 0;
            // mem_addr     <= 0;
            // mem_ren      <= 0;
            // mem_wen      <= 0;
            // mem_clint    <= 0;
        end else begin
            idle <= (flush) | (!in_fire & out_fire) | (!in_fire & !flush & idle);
            if(in_fire) begin
                mem_rd         <= in_rd_i;
                mem_ebreak     <= in_ebreak_i;
                mem_rd_en      <= in_rd_en_i;
                mem_gpr_wdata  <= in_gpr_wdata_i;
                mem_addr       <= in_req_addr_i;
                mem_ren        <= in_req_ren_i;
                mem_wen        <= in_req_wen_i;
                mem_clint      <= is_clint;
            end
        end
    end
    // === 有访存时 ===
    always @(posedge clk) begin
        if (reset) begin
            req_valid <= 0;
            req_mask <= 0;
            lsu_wdata <= 0;
            lsu_signed <= 0;
            ret_rdata <= 0;
            state <= IDLE;
        end else begin
            case(state)
                IDLE:begin
                    if(mem_hit & in_fire) begin
                        req_valid <= 1;
                        req_mask <= in_req_mask_i;
                        lsu_wdata <= in_lsu_wdata_i;
                        lsu_signed <= in_lsu_signed_i;
                        state <= MISS;
                    end
                end
                MISS:begin
                    if(ret_ready_i) begin
                        req_valid <= 0;
                        ret_rdata <= ret_rdata_i;
                        state <= IDLE;
                    end
                end
            endcase
        end
    end

    assign byte_sel = 4'b1 << mem_addr[1:0];
    assign req_addr_o = mem_addr;
    assign req_valid_o = req_valid;
    assign req_ren_o = mem_ren;
    assign req_wen_o = mem_wen;
    assign req_mask_o = req_strb;
    assign req_size_o = req_size;
    assign req_use_o = 1'b1;
    assign req_wdata_o = req_wdata;
    // === 读写数据处理 ===
    always @(*) begin
        req_strb = 0;
        req_size = 0;
        req_wdata = 0;
        gpr_data = 0;
        case (req_mask)
            4'h1: begin // Byte操作
                req_strb = byte_sel;
                req_size = 3'b000;
                req_wdata = {24'd0, {lsu_wdata[7:0]}} << (8 * mem_addr[1:0]);
                gpr_data = lsu_signed ?
                    {{24{ret_rdata[8*mem_addr[1:0] + 7]}}, ret_rdata[8*mem_addr[1:0] +: 8]} :
                    {24'd0, ret_rdata[8*mem_addr[1:0] +: 8]};
            end
            4'h3: begin // Halfword操作
                req_strb = byte_sel | (byte_sel << 1);
                req_size = 3'b001;
                req_wdata = {16'd0, lsu_wdata[15:0]} << (8 * mem_addr[1:0]);
                gpr_data = lsu_signed ?
                    {{16{ret_rdata[16*mem_addr[1] + 15]}}, ret_rdata[16*mem_addr[1] +: 16]} :
                    {16'd0, ret_rdata[16*mem_addr[1] +: 16]};
            end
            4'hF: begin // Word操作
                req_strb = 4'hF;
                req_size = 3'b010;
                req_wdata = lsu_wdata;
                gpr_data = ret_rdata;
            end
            default;
        endcase
    end
    
    ysyx_25050136_CLINT 
    u_ysyx_25050136_CLINT(
        .clk    	(clk          ),
        .reset  	(reset        ),
        .addr_i 	(mem_addr     ),
        .data_o 	(clint_rdata  )
    );
    
    // === 输出选择器 ===
    assign out_gpr_wdata_o = mem_ren ? (mem_clint ? clint_rdata : gpr_data) : mem_gpr_wdata;
    assign out_rd_o = mem_rd;
    assign out_ebreak_o = mem_ebreak;
    assign out_rd_en_o = mem_rd_en;
    assign waddr_o = mem_rd;
    assign wdata_o = mem_gpr_wdata;
    assign wvalid_o = mem_rd_en & !mem_ren & out_valid_o;
    assign wen_o = mem_rd_en & (out_valid_o | ~idle);
    // === 握手信号 ===
    assign ready_go = (state === IDLE);
    assign in_ready_o = idle || out_fire;
    assign out_valid_o = !(idle || flush) && ready_go;
`ifdef YSYXSOC
    always @(posedge clk) begin
        if(reset) begin
            out_dbg_is_device_o <= 0;
        end else begin
            if((req_valid_o && !((req_addr_o >= 32'h3000_0000 && req_addr_o < 32'h4000_0000) || 
                   (req_addr_o >= 32'h0f00_0000 && req_addr_o < 32'h1000_0000) ||
                   (req_addr_o >= 32'ha000_0000 && req_addr_o < 32'hc000_0000))) || (in_fire && is_clint && in_req_ren_i)) begin
                    out_dbg_is_device_o <= 1;
            end else if(out_fire) begin
                    out_dbg_is_device_o <= 0;                
            end
        end
    end
    always @(posedge clk) begin
        if(reset) begin
            out_dbg_pc_o   <= 0;
            out_dbg_inst_o <= 0;
        end else begin
            if(flush) begin
            end else if(in_fire) begin
                out_dbg_pc_o   <= in_dbg_pc_i;
                out_dbg_inst_o <= in_dbg_inst_i;
                out_dbg_optype_o <= in_dbg_optype_i;
            end if(out_fire) begin
            end 
        end
    end
`endif
endmodule
module ysyx_25050136_RegisterFile
    #(
        parameter ADDR_WIDTH = 5
     )
     (
         input                         clk,
         // 写端口
         input   [31:0]            wdata_i,
         input   [ADDR_WIDTH-1:0]  waddr_i,
         input                       wen_i,
         // 读端口1
         input   [ADDR_WIDTH-1:0] raddr1_i,
         output  [31:0]           rdata1_o,
         // 读端口2
         input   [ADDR_WIDTH-1:0] raddr2_i,
         output  [31:0]           rdata2_o
     );
    reg [31:0] gpr [2**ADDR_WIDTH-1:0];
    always @(posedge clk) begin
        if(wen_i && |waddr_i)
            gpr[waddr_i] <= wdata_i;
    end

    assign rdata1_o = (raddr1_i == 0) ? 0 :gpr[raddr1_i];
    assign rdata2_o = (raddr2_i == 0) ? 0 :gpr[raddr2_i];
`ifdef YSYXSOC
    wire [31:0] zero = 32'd0;          // x0
    wire [31:0] ra   = gpr[1];         // x1
    wire [31:0] sp   = gpr[2];         // x2
    wire [31:0] gp   = gpr[3];         // x3
    wire [31:0] tp   = gpr[4];         // x4
    wire [31:0] t0   = gpr[5];         // x5
    wire [31:0] t1   = gpr[6];         // x6
    wire [31:0] t2   = gpr[7];         // x7
    wire [31:0] s0   = gpr[8];         // x8 (fp)
    wire [31:0] s1   = gpr[9];         // x9
    wire [31:0] a0   = gpr[10];        // x10
    wire [31:0] a1   = gpr[11];        // x11
    wire [31:0] a2   = gpr[12];        // x12
    wire [31:0] a3   = gpr[13];        // x13
    wire [31:0] a4   = gpr[14];        // x14
    wire [31:0] a5   = gpr[15];        // x15
`endif
endmodule
`ifdef YSYXSOC
import "DPI-C" function void find_addr_0(); 
import "DPI-C" function void find_ebreak();
import "DPI-C" function void find_resp();
import "DPI-C" function void find_diff_skip();

// DPI-C 函数导入声明
import "DPI-C" function void fetch_get();
import "DPI-C" function void commit_get();
import "DPI-C" function void load_get();
import "DPI-C" function void store_get();
import "DPI-C" function void jump_get();
import "DPI-C" function void branch_get();
import "DPI-C" function void alu_get();
import "DPI-C" function void system_get();
import "DPI-C" function void predict_miss_count();
import "DPI-C" function void predict_not_jump_count();
import "DPI-C" function void related_delay_get();
import "DPI-C" function void icache_get(input int cache_type);
import "DPI-C" function void icache_miss(input int cache_type);
import "DPI-C" function void icache_misscycle(input int cache_type);
import "DPI-C" function void dcache_get(input int cache_type);
import "DPI-C" function void dcache_misscycle(input int cache_type);
`endif

module ysyx_25050136(
    input               clock             ,
    input               reset             ,
    input               io_interrupt      ,

    // AXI4 Master接口
    // 写地址通道
    input               io_master_awready ,
    output              io_master_awvalid ,
    output      [31:0]  io_master_awaddr  ,
    output      [3:0]   io_master_awid    ,
    output      [7:0]   io_master_awlen   ,
    output      [2:0]   io_master_awsize  ,
    output      [1:0]   io_master_awburst ,
    // 写数据通道
    input               io_master_wready  ,
    output              io_master_wvalid  ,
    output      [31:0]  io_master_wdata   ,
    output      [3:0]   io_master_wstrb   ,
    output              io_master_wlast   ,
    // 写响应通道
    output              io_master_bready  ,
    input               io_master_bvalid  ,
    input       [1:0]   io_master_bresp   ,
    input       [3:0]   io_master_bid     ,
    // 读地址通道
    input               io_master_arready ,
    output              io_master_arvalid ,
    output      [31:0]  io_master_araddr  ,
    output      [3:0]   io_master_arid    ,
    output      [7:0]   io_master_arlen   ,
    output      [2:0]   io_master_arsize  ,
    output      [1:0]   io_master_arburst ,
    // 读数据通道
    output              io_master_rready  ,
    input               io_master_rvalid  ,
    input       [1:0]   io_master_rresp   ,
    input       [31:0]  io_master_rdata   ,
    input               io_master_rlast   ,
    input       [3:0]   io_master_rid     ,
    // AXI4 Slave接口
    // 写地址通道
    output              io_slave_awready  ,
    input               io_slave_awvalid  ,
    input       [31:0]  io_slave_awaddr   ,
    input       [3:0]   io_slave_awid     ,
    input       [7:0]   io_slave_awlen    ,
    input       [2:0]   io_slave_awsize   ,
    input       [1:0]   io_slave_awburst  ,
    // 写数据通道
    output              io_slave_wready   ,
    input               io_slave_wvalid   ,
    input       [31:0]  io_slave_wdata    ,
    input       [3:0]   io_slave_wstrb    ,
    input               io_slave_wlast    ,
    // 写响应通道
    input               io_slave_bready   ,
    output              io_slave_bvalid   ,
    output      [1:0]   io_slave_bresp    ,
    output      [3:0]   io_slave_bid      ,
    // 读地址通道
    output              io_slave_arready  ,
    input               io_slave_arvalid  ,
    input       [31:0]  io_slave_araddr   ,
    input       [3:0]   io_slave_arid     ,
    input       [7:0]   io_slave_arlen    ,
    input       [2:0]   io_slave_arsize   ,
    input       [1:0]   io_slave_arburst  ,
    // 读数据通道
    input               io_slave_rready   ,
    output              io_slave_rvalid   ,
    output      [1:0]   io_slave_rresp    ,
    output      [31:0]  io_slave_rdata    ,
    output              io_slave_rlast    ,
    output      [3:0]   io_slave_rid
);
`ifdef YSYXSOC
    always @(*) begin
        if ((io_master_awvalid & io_master_awready & (io_master_awaddr == 0)) |
            (io_master_arvalid & io_master_arready & (io_master_araddr == 0)) )
        begin
            find_addr_0();
        end
    end
`endif
    localparam TOP_MASTER_NUM = 2 ; // 顶层总线主设备数量
    // 顶层仲裁器只对读信号进行二选一仲裁，写信号直接连接(也是被后仿逼得)
    // 仲裁器信号
    wire [TOP_MASTER_NUM-1:0]               s_arvalid    ;
    wire [TOP_MASTER_NUM-1:0]               s_arready    ;
    wire [TOP_MASTER_NUM*32-1:0]            s_araddr     ;
    wire [TOP_MASTER_NUM*4-1:0]             s_arid       ;
    wire [TOP_MASTER_NUM*8-1:0]             s_arlen      ;
    wire [TOP_MASTER_NUM*3-1:0]             s_arsize     ;
    wire [TOP_MASTER_NUM*2-1:0]             s_arburst    ;
    wire [TOP_MASTER_NUM-1:0]               s_rvalid     ;
    wire [TOP_MASTER_NUM-1:0]               s_rready     ;
    wire [TOP_MASTER_NUM*32-1:0]            s_rdata      ;
    wire [TOP_MASTER_NUM*2-1:0]             s_rresp      ;
    wire [TOP_MASTER_NUM-1:0]               s_rlast      ;
    wire [TOP_MASTER_NUM*4-1:0]             s_rid        ;
    // 主设备信号        
    wire                                    inst_arvalid ;
    wire                                    inst_arready ;
    wire [31:0]                             inst_araddr  ;
    wire [3:0]                              inst_arid    ;
    wire [7:0]                              inst_arlen   ;
    wire [2:0]                              inst_arsize  ;
    wire [1:0]                              inst_arburst ;
    wire                                    inst_rvalid  ;
    wire                                    inst_rready  ;
    wire [31:0]                             inst_rdata   ;
    wire [1:0]                              inst_rresp   ;
    wire                                    inst_rlast   ;
    wire [3:0]                              inst_rid     ;
    wire                                    mem_awvalid  ;
    wire                                    mem_awready  ;
    wire [31:0]                             mem_awaddr   ;
    wire [3:0]                              mem_awid     ;
    wire [7:0]                              mem_awlen    ;
    wire [2:0]                              mem_awsize   ;
    wire [1:0]                              mem_awburst  ;
    wire                                    mem_wvalid   ;
    wire                                    mem_wready   ;
    wire [31:0]                             mem_wdata    ;
    wire [3:0]                              mem_wstrb    ;
    wire                                    mem_wlast    ;
    wire                                    mem_bvalid   ;
    wire                                    mem_bready   ;
    wire [1:0]                              mem_bresp    ;
    wire [3:0]                              mem_bid      ;
    wire                                    mem_arvalid  ;
    wire                                    mem_arready  ;
    wire [31:0]                             mem_araddr   ;
    wire [3:0]                              mem_arid     ;
    wire [7:0]                              mem_arlen    ;
    wire [2:0]                              mem_arsize   ;
    wire [1:0]                              mem_arburst  ;
    wire                                    mem_rvalid   ;
    wire                                    mem_rready   ;
    wire [31:0]                             mem_rdata    ;
    wire [1:0]                              mem_rresp    ;
    wire                                    mem_rlast    ;
    wire [3:0]                              mem_rid      ;
   
    // 主设备到仲裁器信号连接 -- 仅读事务仲裁
    assign s_arvalid   = {inst_arvalid, mem_arvalid} ;
    assign s_araddr    = {inst_araddr,  mem_araddr}  ;
    assign s_arid      = {inst_arid,    mem_arid}    ;
    assign s_arlen     = {inst_arlen,   mem_arlen}   ;
    assign s_arsize    = {inst_arsize,  mem_arsize}  ;
    assign s_arburst   = {inst_arburst, mem_arburst} ;
    assign s_rready    = {inst_rready,  mem_rready}  ;
    
    // 仲裁器到主设备信号连接
    assign mem_arready  = s_arready[0]  ;
    assign mem_rvalid   = s_rvalid[0]   ;
    assign mem_rdata    = s_rdata[31:0] ;
    assign mem_rresp    = s_rresp[1:0]  ;
    assign mem_rlast    = s_rlast[0]    ;
    assign mem_rid      = s_rid[3:0]    ;
    assign inst_arready = s_arready[1]  ;
    assign inst_rvalid  = s_rvalid[1]   ;
    assign inst_rdata   = s_rdata[63:32];
    assign inst_rresp   = s_rresp[3:2]  ;
    assign inst_rlast   = s_rlast[1]    ;
    assign inst_rid     = s_rid[7:4]    ;

    // 顶层AXI SLAVER接口
    assign io_slave_awready = 0;
    assign io_slave_wready = 0;
    assign io_slave_bvalid = 0;
    assign io_slave_bvalid = 0;
    assign io_slave_bresp = 0; 
    assign io_slave_bid = 0;   
    assign io_slave_arready = 0;
    assign io_slave_rvalid = 0;
    assign io_slave_rresp = 0; 
    assign io_slave_rdata = 0; 
    assign io_slave_rlast = 0; 
    assign io_slave_rid = 0;

    // NPC模块实例化
    ysyx_25050136_NPC 
    u_ysyx_25050136_NPC (
        .clk            	(clock           ),
        .reset          	(reset           ),
        .inst_arvalid_o 	(inst_arvalid  ),
        .inst_arready_i 	(inst_arready  ),
        .inst_araddr_o  	(inst_araddr   ),
        .inst_arid_o    	(inst_arid     ),
        .inst_arlen_o   	(inst_arlen    ),
        .inst_arsize_o  	(inst_arsize   ),
        .inst_arburst_o 	(inst_arburst  ),
        .inst_rvalid_i  	(inst_rvalid   ),
        .inst_rready_o  	(inst_rready   ),
        .inst_rdata_i   	(inst_rdata    ),
        .inst_rresp_i   	(inst_rresp    ),
        .inst_rlast_i   	(inst_rlast    ),
        .inst_rid_i     	(inst_rid      ),
        .mem_awvalid_o  	(mem_awvalid   ),
        .mem_awready_i  	(mem_awready   ),
        .mem_awaddr_o   	(mem_awaddr    ),
        .mem_awid_o     	(mem_awid      ),
        .mem_awlen_o    	(mem_awlen     ),
        .mem_awsize_o   	(mem_awsize    ),
        .mem_awburst_o  	(mem_awburst   ),
        .mem_wvalid_o   	(mem_wvalid    ),
        .mem_wready_i   	(mem_wready    ),
        .mem_wdata_o    	(mem_wdata     ),
        .mem_wstrb_o    	(mem_wstrb     ),
        .mem_wlast_o    	(mem_wlast     ),
        .mem_bvalid_i   	(mem_bvalid    ),
        .mem_bready_o   	(mem_bready    ),
        .mem_bresp_i    	(mem_bresp     ),
        .mem_bid_i      	(mem_bid       ),
        .mem_arvalid_o  	(mem_arvalid   ),
        .mem_arready_i  	(mem_arready   ),
        .mem_araddr_o   	(mem_araddr    ),
        .mem_arid_o     	(mem_arid      ),
        .mem_arlen_o    	(mem_arlen     ),
        .mem_arsize_o   	(mem_arsize    ),
        .mem_arburst_o  	(mem_arburst   ),
        .mem_rvalid_i   	(mem_rvalid    ),
        .mem_rready_o   	(mem_rready    ),
        .mem_rdata_i    	(mem_rdata     ),
        .mem_rresp_i    	(mem_rresp     ),
        .mem_rlast_i    	(mem_rlast     ),
        .mem_rid_i      	(mem_rid       )
    );
    
    // 仲裁器模块实例化
    // 仲裁器模块实例化
    ysyx_25050136_ARBITER #(
        .MASTER_NUM     (TOP_MASTER_NUM    )
    ) u_ysyx_25050136_ARBITER( 
        .clk        	(clock              ),
        .reset      	(reset              ),
        .s_awvalid_i 	(mem_awvalid        ),
        .s_awready_o 	(mem_awready        ),
        .s_awaddr_i  	(mem_awaddr         ),
        .s_awid_i    	(mem_awid           ),
        .s_awlen_i   	(mem_awlen          ),
        .s_awsize_i  	(mem_awsize         ),
        .s_awburst_i 	(mem_awburst        ),
        .s_wvalid_i  	(mem_wvalid         ),
        .s_wready_o  	(mem_wready         ),
        .s_wdata_i   	(mem_wdata          ),
        .s_wstrb_i   	(mem_wstrb          ),
        .s_wlast_i   	(mem_wlast          ),
        .s_bvalid_o  	(mem_bvalid         ),
        .s_bready_i  	(mem_bready         ),
        .s_bresp_o   	(mem_bresp          ),
        .s_bid_o     	(mem_bid            ),
        .s_arvalid_i 	(s_arvalid          ),
        .s_arready_o 	(s_arready          ),
        .s_araddr_i  	(s_araddr           ),
        .s_arid_i    	(s_arid             ),
        .s_arlen_i   	(s_arlen            ),
        .s_arsize_i  	(s_arsize           ),
        .s_arburst_i 	(s_arburst          ),
        .s_rvalid_o  	(s_rvalid           ),
        .s_rready_i  	(s_rready           ),
        .s_rdata_o   	(s_rdata            ),
        .s_rresp_o   	(s_rresp            ),
        .s_rlast_o   	(s_rlast            ),
        .s_rid_o     	(s_rid              ),
        .m_awvalid_o 	(io_master_awvalid  ),
        .m_awready_i 	(io_master_awready  ),
        .m_awaddr_o  	(io_master_awaddr   ),
        .m_awid_o    	(io_master_awid     ),
        .m_awlen_o   	(io_master_awlen    ),
        .m_awsize_o  	(io_master_awsize   ),
        .m_awburst_o 	(io_master_awburst  ),
        .m_wvalid_o  	(io_master_wvalid   ),
        .m_wready_i  	(io_master_wready   ),
        .m_wdata_o   	(io_master_wdata    ),
        .m_wstrb_o   	(io_master_wstrb    ),
        .m_wlast_o   	(io_master_wlast    ),
        .m_bvalid_i  	(io_master_bvalid   ),
        .m_bready_o  	(io_master_bready   ),
        .m_bresp_i   	(io_master_bresp    ),
        .m_bid_i     	(io_master_bid      ),
        .m_arvalid_o 	(io_master_arvalid  ),
        .m_arready_i 	(io_master_arready  ),
        .m_araddr_o  	(io_master_araddr   ),
        .m_arid_o    	(io_master_arid     ),
        .m_arlen_o   	(io_master_arlen    ),
        .m_arsize_o  	(io_master_arsize   ),
        .m_arburst_o 	(io_master_arburst  ),
        .m_rvalid_i  	(io_master_rvalid   ),
        .m_rready_o  	(io_master_rready   ),
        .m_rdata_i   	(io_master_rdata    ),
        .m_rresp_i   	(io_master_rresp    ),
        .m_rlast_i   	(io_master_rlast    ),
        .m_rid_i     	(io_master_rid      )
    );
    
endmodule
module ysyx_25050136_WB
    #(
       parameter ADDR_WIDTH = 4
    )
    (
        input                                         clk,
        input                                       reset,
        input                                  in_valid_i,
        input  [ADDR_WIDTH-1:0]                   in_rd_i,
        input                                  in_rd_en_i,
        input  [31:0]                      in_gpr_wdata_i,
        output                                 in_ready_o,
`ifdef YSYXSOC
        input  [31:0]                         in_dbg_pc_i,
        input  [31:0]                       in_dbg_inst_i,
        input                          in_dbg_is_device_i,
        input  [5:0]                      in_dbg_optype_i,
`endif
        input  [ADDR_WIDTH-1:0]                  raddr1_i,
        input  [ADDR_WIDTH-1:0]                  raddr2_i,
        output [31:0]                            rdata1_o,
        output [31:0]                            rdata2_o
    );
    // ==== 信号定义 ====
    wire in_fire = in_valid_i & in_ready_o;
    wire real_wen;
    // ==== 逻辑实现 ====
    assign in_ready_o = 1;
    assign real_wen = in_fire & in_rd_en_i;
`ifdef YSYXSOC
    reg [31:0] wb_dbg_pc    ;
    reg [31:0] wb_dbg_inst  ;
    reg [63:0] inst_count;
    always @(posedge clk) begin
        if(reset) begin
            wb_dbg_pc <= 0;
            wb_dbg_inst <= 0;
            inst_count <= 0;
        end else begin
            if(in_fire) begin
                if(in_dbg_is_device_i) find_diff_skip();
                wb_dbg_pc <= in_dbg_pc_i;
                wb_dbg_inst <= in_dbg_inst_i;
                inst_count <= inst_count + 64'd1;
            end
        end
    end
    always @(*) begin
        if((wb_dbg_pc != 0) & (wb_dbg_inst == 32'h00100073)) begin
            find_ebreak();
        end
    end
    always @(posedge clk) begin
        if(!reset) begin
            if(in_fire) begin
                commit_get();   // 提交指令计数
                case (1'b1)
                    in_dbg_optype_i[0] : begin // 定点运算操作
                        alu_get();
                    end
                    in_dbg_optype_i[1] : begin // 系统控制操作
                        system_get();
                    end
                    in_dbg_optype_i[2] : begin // 存储操作
                        store_get();
                    end
                    in_dbg_optype_i[3] : begin // 加载操作
                        load_get();
                    end
                    in_dbg_optype_i[4] : begin // 条件跳转
                        branch_get();
                    end
                    in_dbg_optype_i[5] : begin // 无条件跳转  
                        jump_get();
                    end 
                    default: ;
                endcase
            end
        end
    end
`endif

    ysyx_25050136_RegisterFile #(
        .ADDR_WIDTH(ADDR_WIDTH)
    ) u_ysyx_25050136_RegisterFile (
        .clk      	(clk             ),
        .wdata_i  	(in_gpr_wdata_i  ),
        .waddr_i  	(in_rd_i         ),
        .wen_i      (real_wen        ),
        .raddr1_i 	(raddr1_i        ),
        .raddr2_i 	(raddr2_i        ),
        .rdata1_o 	(rdata1_o        ),
        .rdata2_o 	(rdata2_o        )
    );

endmodule //ysyx_25050136_WB
