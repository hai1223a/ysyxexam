module  #(parameter ab = 8)(
    output reg [ab-1:0] count,
    input [ab-1:0] data,
    input load_pc,inc_pc,clk,rst
);
always @(posedge clk,negedge rst) 
    if(!rst) 
        count <= 0;
     else if(load_pc) 
        count <= data;
     else if(inc_pc) 
        count <= count + 1;
    
endmodule