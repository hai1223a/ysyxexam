module ysyx_25050136_CTRL
    #(
        parameter ADDR_WIDTH = 4 
    )
    (
        input clk,
        input reset,
        input lsu_en_i,
        input lsu_valid_i,
        output stall_if_o,
        output stall_id_o,
        output stall_ex_o,
        output stall_mem_o
    );

    assign stall_if_o  = lsu_en_i & (~lsu_valid_i);
    assign stall_id_o  = lsu_en_i & (~lsu_valid_i);
    assign stall_ex_o  = lsu_en_i & (~lsu_valid_i);
    assign stall_mem_o = 0;   
endmodule //moduleName
