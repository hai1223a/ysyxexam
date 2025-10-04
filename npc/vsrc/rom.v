module ROM_TEST (
    input               clk,
    input [31:0]        req_addr_i,
    input               req_valid_i,
    input               req_use_i,
    output reg          req_ready_o,
    output reg   [31:0] req_rdata_o  
);

    // ROM存储空间
    reg [31:0] rom_mem [0:15];

    initial begin
        // 可以在这里初始化ROM内容
        rom_mem[0 ] = 32'h00000013; // NOP
        rom_mem[1 ] = 32'h00000013; // NOP
        rom_mem[2 ] = 32'h00000013; // NOP
        rom_mem[3 ] = 32'h00000013; // NOP
        rom_mem[4 ] = 32'h00000013; // NOP
        rom_mem[5 ] = 32'h00000013; // NOP
        rom_mem[6 ] = 32'h00000013; // NOP
        rom_mem[7 ] = 32'h00000013; // NOP
        rom_mem[8 ] = 32'h00000013; // NOP
        rom_mem[9 ] = 32'h00000013; // NOP
        rom_mem[10] = 32'h00100073; // EBREAK
        rom_mem[11] = 32'h00000013; // NOP
        rom_mem[12] = 32'h00000013; // NOP
        rom_mem[13] = 32'h00000013; // NOP
        rom_mem[14] = 32'h00000013; // NOP
        rom_mem[15] = 32'h00000013; // NOP
    end 

    wire [1:0] addr = req_addr_i[3:2];
    always @(posedge clk) begin
        if(req_valid_i) begin
            req_rdata_o <= rom_mem[addr];
            req_ready_o <= 1;
        end else begin
            req_rdata_o <= 0;
            req_ready_o <= 0;
        end
    end    
endmodule
