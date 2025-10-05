module ROM_TEST (
    input               clk,
    input               reset,
    input [31:0]        req_addr_i,
    input               req_valid_i,
    input               req_use_i,
    output reg          req_ready_o,
    output reg   [31:0] req_rdata_o  
);

    reg [31:0] rom_mem [0:15];
    initial begin
        rom_mem[0 ] = 32'h00150513;
        rom_mem[1 ] = 32'h00150513;
        rom_mem[2 ] = 32'h00150513;
        rom_mem[3 ] = 32'h00150513;
        rom_mem[4 ] = 32'h00150513;
        rom_mem[5 ] = 32'h00150513;
        rom_mem[6 ] = 32'h00150513;
        rom_mem[7 ] = 32'h00150513;
        rom_mem[8 ] = 32'h00150513;
        rom_mem[9 ] = 32'h00150513;
        rom_mem[10] = 32'h00100073;
        rom_mem[11] = 32'h00000013;
        rom_mem[12] = 32'h00000013;
        rom_mem[13] = 32'h00000013;
        rom_mem[14] = 32'h00000013;
        rom_mem[15] = 32'h00000013;
    end 

    wire [3:0] addr = req_addr_i[5:2];
    reg state; // 0:空闲, 1:等待

    always @(posedge clk) begin
        if(reset) begin
            req_rdata_o <= 0;
            req_ready_o <= 0;
            state <= 0;
        end else begin
            case(state)
                0: begin // 空闲
                    req_ready_o <= 0;
                    req_rdata_o <= 0;
                    if(req_valid_i) begin
                        state <= 1;
                    end
                end
                1: begin // 输出数据
                    req_rdata_o <= rom_mem[addr];
                    req_ready_o <= 1;
                    state <= 0;
                end
            endcase
        end
    end

endmodule
