module regfile_wrapper #(
  parameter ADDR_WIDTH = 5,
  parameter DATA_WIDTH = 32
)(
  input clk,
  input rst,
  input [ADDR_WIDTH-1:0] waddr_i,
  input [ADDR_WIDTH-1:0] raddr1_i,
  input [ADDR_WIDTH-1:0] raddr2_i,
  input [DATA_WIDTH-1:0] wdata_i,
  input wen_i,
  output [DATA_WIDTH-1:0] rdata1_o,
  output [DATA_WIDTH-1:0] rdata2_o
);
  reg [ADDR_WIDTH-1:0] waddr_r, raddr1_r, raddr2_r;
  reg [DATA_WIDTH-1:0] wdata_r;
  reg wen_r;
  wire [DATA_WIDTH-1:0] rdata1, rdata2;

  // 输入激励
  always @(posedge clk) begin
    if (rst) begin
      waddr_r  <= 0;
      raddr1_r <= 1;
      raddr2_r <= 2;
      wdata_r  <= 0;
      wen_r    <= 0;
    end else begin
      waddr_r  <= waddr_i;
      raddr1_r <= raddr1_i;
      raddr2_r <= raddr2_i;
      wdata_r  <= wdata_i;
      wen_r    <= wen_i;
    end
  end

  // 寄存器堆实例
  ysyx_25050136_RegisterFile #(.ADDR_WIDTH(ADDR_WIDTH), .DATA_WIDTH(DATA_WIDTH)) u_regfile (
    .clk     (clk),
    .reset   (rst),
    .wdata_i (wdata_r),
    .waddr_i (waddr_r),
    .wen_i   (wen_r),
    .raddr1_i(raddr1_r),
    .rdata1_o(rdata1),
    .raddr2_i(raddr2_r),
    .rdata2_o(rdata2)
  );

  // 输出寄存器
  reg [DATA_WIDTH-1:0] rdata1_r, rdata2_r;
  always @(posedge clk) begin
    rdata1_r <= rdata1;
    rdata2_r <= rdata2;
  end
  assign rdata1_o = rdata1_r;
  assign rdata2_o = rdata2_r;
endmodule
