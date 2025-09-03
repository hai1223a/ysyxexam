module apb_delayer(
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

  output [31:0] out_paddr,
  output        out_psel,
  output        out_penable,
  output [2:0]  out_pprot,
  output        out_pwrite,
  output [31:0] out_pwdata,
  output [3:0]  out_pstrb,
  input         out_pready,
  input  [31:0] out_prdata,
  input         out_pslverr
);
/*
  y = (r * k) << S
*/
  localparam S   = 32'd4;
  localparam R_S = 32'd82;

  reg [31:0] count;
  reg [15:0] count_q;
  reg active;
  reg in_pready_r;
  reg in_pslverr_r;
  reg [31:0] in_prdata_r;
  wire apb_start, apb_end;
  always @(posedge clock) begin
      if (reset) begin
        count <= 0;
        active <= 0;
        count_q <= 0;
        in_pready_r <= 0;
        in_pslverr_r <= 0;
        in_prdata_r <= 0;
      end else begin
        if(!active && apb_start) begin
          active <= 1;
          count_q <= count_q + 16'd3;
          count <= count + R_S;
        end else if(active) begin
          if(apb_end) begin
            in_pready_r  <= out_pready;
            in_pslverr_r <= out_pslverr;
            in_prdata_r  <= out_prdata;
            active <= 0;
            count <= (count >> S) - count_q; 
            count_q <= 0;
          end else begin
            count_q <= count_q + 8'd1;
            count <= count + R_S;
          end
        end else if(!active) begin
          if(count > 0) begin
            count <= count - 32'd1;
          end 
        end
      end
  end

  assign apb_start = in_psel & !in_penable;
  assign apb_end = in_psel & in_penable & out_pready;

  assign out_paddr   = in_paddr;
  assign out_psel    = in_psel;
  assign out_penable = in_penable;
  assign out_pprot   = in_pprot;
  assign out_pwrite  = in_pwrite;
  assign out_pwdata  = in_pwdata;
  assign out_pstrb   = in_pstrb;

  assign in_pready   = (count == 0) ? in_pready_r : 0;
  assign in_prdata   = (count == 0) ? in_prdata_r : 0;
  assign in_pslverr  = (count == 0) ? in_pslverr_r : 0;

endmodule
