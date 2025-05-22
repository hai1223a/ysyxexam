module ysyx_25050136_IF
    (
        input                          clk,
        input                        reset,
        input              dynamic_valid_i,
        input      [31:0]    dynamic_npc_i,
        output     [31:0]     static_npc_o,
        output     [31:0]             pc_o
    );
    reg [31:0] pc;
    always @(posedge clk) begin
        if(reset) begin
            pc <= 32'h80000000;
        end
        else begin
            pc <= dynamic_valid_i ? dynamic_npc_i : static_npc_o;
        end
    end

    assign static_npc_o = pc + 32'h4;
    assign pc_o = pc;
endmodule
