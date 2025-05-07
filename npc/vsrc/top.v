`include "config.v" 
module ysyx_25050136_NPC
(
    input            clk,
    input            reset,
    input  [31:0]    inst_i,
    output [31:0]    pc_o
);

ysyx_25050136_IF u_ysyx_25050136_IF(
    .clk             	(clk              ),
    .reset           	(reset            ),
    .dynamic_valid_i 	(  0),
    .dynamic_npc_i   	(  0),
    .pc_o            	(pc_o             )
);


endmodule
