module ysyx_25050136_CTRL
    #(
        parameter ADDR_WIDTH = 4 
    )
    (
        input clk,
        input reset,
        input busy_if_i,
        input busy_mem_i,
        output stall_pc_o,
        output stall_if_o,
        output stall_id_o,
        output stall_ex_o,
        output stall_mem_o,
        output bubble_id_o,
        output bubble_mem_o
    );
    reg stall_pc   ;
    reg stall_if   ;
    reg stall_id   ;
    reg stall_ex   ;
    reg stall_mem  ;
    reg bubble_id  ;
    reg bubble_mem ;

    always @(*) begin
        stall_pc   = 0;
        stall_if   = 0;
        stall_id   = 0;
        stall_ex   = 0;
        stall_mem  = 0;
        bubble_id  = 0;
        bubble_mem = 0;
        if(busy_mem_i) begin
            stall_pc   = 1;
            stall_if   = 1;
            stall_id   = 1;
            stall_ex   = 1;
            bubble_mem = 1;
        end else if(busy_if_i) begin
            stall_if   = 1;
            bubble_id  = 1;
        end
    end
    assign stall_pc_o   = stall_pc   ;
    assign stall_if_o   = stall_if   ;
    assign stall_id_o   = stall_id   ;
    assign stall_ex_o   = stall_ex   ;
    assign stall_mem_o  = stall_mem  ;
    assign bubble_id_o  = bubble_id  ;
    assign bubble_mem_o = bubble_mem ;   
endmodule //moduleName
