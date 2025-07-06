module ysyx_25050136_LSU
    #(
         DATA_WIDTH = 32
     )
     (
         input      [3:0]                           mem_wmask_i,
         input                                     mem_signed_i,
         input      [DATA_WIDTH-1:0]               store_data_i,
         input      [DATA_WIDTH-1:0]                mem_rdata_i,
         output     [DATA_WIDTH-1:0]                mem_wdata_o,
         output reg [DATA_WIDTH-1:0]                load_data_o
     );

    always @(*) begin
        case (mem_len_i)
            4'hF:begin
                load_data_o = mem_rdata_i;
            end
            4'h3:begin
                if (mem_signed_i)
                    load_data_o = {{16{mem_rdata_i[15]}},mem_rdata_i[15:0]};
                else
                    load_data_o = {16'h0,mem_rdata_i[15:0]};
            end
            4'h1:begin
                if (mem_signed_i)
                    load_data_o = {{24{mem_rdata_i[7]}},mem_rdata_i[7:0]};
                else
                    load_data_o = {24'h0,mem_rdata_i[7:0]};
            end
            default:begin
                load_data_o = 0;
            end
        endcase
    end
        assign mem_wdata_o = mem_rdata_i;
endmodule
