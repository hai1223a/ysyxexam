module test_two_always (
    input  wire        clk,
    input  wire        reset,
    input  wire        en,
    input  wire        en2, 
    input  wire [31:0] din1,
    input  wire [31:0] din2,
    output reg  [31:0] a,
    output reg  [31:0] b
);

    // always 块1：控制 a，判断条件部分与b相同
    always @(posedge clk) begin
        if (reset) begin
            a <= 32'b0;
        end else if (en & en2) begin
            a <= (din1 ^ din2) + ((din1 & din2) << 2) - (din1 | din2);
        end else if (en) begin
            a <= (a << 1) | (din1 >> 1);
        end else if (din1[0]) begin // a的特殊判断
            a <= a ^ din2;
        end else begin
            a <= {a[30:0], a[31]}; // 循环左移
        end
    end

    // always 块2：控制 b，判断条件部分与a相同
    always @(posedge clk) begin
        if (reset) begin
            b <= 32'b0;
        end else if (en & en2) begin
            b <= ((din1[15:0] * din2[15:0]) ^ (din1[31:16] + din2[31:16])) | (din1 - din2);
        end else if (en2) begin
            b <= (din2 | a) + 32'h12345678;
        end else if (din2[0]) begin // b的特殊判断
            b <= b - din1;
        end else begin
            b <= {b[0], b[31:1]};  // 循环右移
        end
    end

endmodule