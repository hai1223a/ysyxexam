`timescale 1ns/1ns
module fsm
(
    input clk,
    input rst,
    input [7:0] data,
    input nextdata_n,
    input ready,
    output reg [3:0] state_n
);
    parameter [7:0] scan_code = 8'h58;
    // 状态定义
    parameter [3:0] S0 = 4'b0001;
    parameter [3:0] S1 = 4'b0010;
    parameter [3:0] S2 = 4'b0100;
    parameter [3:0] S3 = 4'b1000;

    reg [3:0] state_c;

    // 状态寄存器
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state_c <= S0;
        end else begin
            state_c <= state_n;
        end
    end

    // 状态转移逻辑
    always @(*) begin
        case (state_c)
            S0: begin
                if (ready && ~nextdata_n && (data == scan_code))
                    state_n = S1;
                else
                    state_n = S0;
            end
            S1: begin
                if (ready && ~nextdata_n && (data == 8'hf0))
                    state_n = S2;
                else
                    state_n = S1;
            end
            S2: begin
                if (ready && ~nextdata_n && (data == scan_code))
                    state_n = S3;
                else
                    state_n = S2;
            end
            S3: begin
                state_n = S0;
            end
            default: state_n = S0;
        endcase
    end
endmodule