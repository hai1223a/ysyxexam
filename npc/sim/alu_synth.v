`include "../vsrc/config.v"
module alu_wrapper #(
  parameter DATA_WIDTH = 32
)(
  input  clk,
  input  rst,
  input  [DATA_WIDTH-1:0] op1_i,
  input  [DATA_WIDTH-1:0] op2_i,
  input  [`ysyx_25050136_ALU_OP_NUM-1:0] operation_i,
  output [DATA_WIDTH-1:0] alu_out_o 
);
  reg [DATA_WIDTH-1:0] op1_r, op2_r;
  reg [`ysyx_25050136_ALU_OP_NUM-1:0] operation_r;
  wire [DATA_WIDTH-1:0] alu_out;

  // 插入输入寄存器，保证输入翻转
  always @(posedge clk) begin
    if (rst) begin
      op1_r      <= 0;
      op2_r      <= 0;
      operation_r<= 0;
    end else begin
      op1_r      <= op1_i;
      op2_r      <= op2_i;
      operation_r<= operation_i;
    end
  end

  // ALU 实例
  ysyx_25050136_ALU #(.DATA_WIDTH(DATA_WIDTH)) u_alu (
    .op1_i      (op1_r),
    .op2_i      (op2_r),
    .operation_i(operation_r),
    .en_i       (1'b1),
    .out_o      (alu_out)
  );

  // 输出寄存器
  reg [DATA_WIDTH-1:0] alu_out_r;
  always @(posedge clk) begin
    alu_out_r <= alu_out;
  end
  assign alu_out_o = alu_out_r;
endmodule
