module ps2_top_apb(
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,

  input         ps2_clk,
  input         ps2_data
);

  wire valid = in_psel & !in_penable & !in_pwrite;

  wire sampling;
  reg [9:0] buffer;
  reg [7:0] fifo [0:7];
  reg [2:0] ps2_clk_d;
  reg [3:0] count;
  reg [2:0] w_ptr,r_ptr;
  reg ready,overflow;
  reg [7:0] data;
  reg ack;

  always @(posedge clock) begin
      if(reset) 
          ps2_clk_d <= 0;
      else
          ps2_clk_d <= {ps2_clk_d[1:0],ps2_clk};
  end
  assign sampling = ps2_clk_d[2] & ~ps2_clk_d[1];

  always @(posedge clock) begin
      if(reset) begin
          count <= 0;
          w_ptr <= 0;
          r_ptr <= 0;
          overflow <= 0;
          ready <= 0;
          buffer <= 0;
      end else begin
          if (valid) begin
            if (ready) begin
              data <= fifo[r_ptr];
              r_ptr <= r_ptr + 3'b1;
              if(w_ptr==(r_ptr+1'b1)) //empty
              ready <= 1'b0;
            end else begin
              data <= 0;
            end
          end 
          else if (sampling) begin
              if (count == 4'd10) begin
                  if (!buffer[0] && ps2_data && ^buffer[9:1]) begin
                      w_ptr <= w_ptr + 3'd1;
                      fifo[w_ptr] <= buffer[8:1];
                      ready <= 1'b1;
                      overflow <= overflow | (r_ptr == (w_ptr + 3'b1));
                  end
                  count <= 0;
              end else begin
                  buffer[count] <= ps2_data;
                  count <= count + 4'd1;    
              end

          end
      end
  end

  always @(posedge clock) begin
    if (reset) 
      ack <= 0;
    else
      ack <= valid;
  end
  assign in_pready = ack;
  assign in_pslverr = overflow;
  assign in_prdata = {24'd0, data};
endmodule
