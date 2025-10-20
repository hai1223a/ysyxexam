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
        if(wen_i & (|waddr_i))
            gpr[waddr_i] <= wdata_i;
    end

    assign rdata1_o = (raddr1_i == 0) ? 0 :gpr[raddr1_i];
    assign rdata2_o = (raddr2_i == 0) ? 0 :gpr[raddr2_i];
`ifdef ysyx_25050136_VERILATOR_DPIC
    wire [31:0] rf_zero = 32'd0;          // x0
    wire [31:0] rf_ra   = gpr[1];         // x1
    wire [31:0] rf_sp   = gpr[2];         // x2
    wire [31:0] rf_gp   = gpr[3];         // x3
    wire [31:0] rf_tp   = gpr[4];         // x4
    wire [31:0] rf_t0   = gpr[5];         // x5
    wire [31:0] rf_t1   = gpr[6];         // x6
    wire [31:0] rf_t2   = gpr[7];         // x7
    wire [31:0] rf_s0   = gpr[8];         // x8 (fp)
    wire [31:0] rf_s1   = gpr[9];         // x9
    wire [31:0] rf_a0   = gpr[10];        // x10
    wire [31:0] rf_a1   = gpr[11];        // x11
    wire [31:0] rf_a2   = gpr[12];        // x12
    wire [31:0] rf_a3   = gpr[13];        // x13
    wire [31:0] rf_a4   = gpr[14];        // x14
    wire [31:0] rf_a5   = gpr[15];        // x15
`endif
endmodule
