// module sdram(
//   input        clk,
//   input        cke,
//   input        cs,
//   input        ras,
//   input        cas,
//   input        we,
//   input [12:0] a,
//   input [ 1:0] ba,
//   input [ 1:0] dqm,
//   inout [15:0] dq
// );
//   localparam CMD_ACTIVE        = 4'b0011;
//   localparam CMD_READ          = 4'b0101;
//   localparam CMD_WRITE         = 4'b0100;
//   localparam CMD_LOAD_MODE     = 4'b0000;

//   reg dq_en;
//   wire [15:0] dq_in;
//   reg [15:0] dq_out;

//   reg [1:0] cas_latency;
//   reg [3:0] burst_len;
//   reg [12:0] row_addr;
//   reg [8:0] col_addr;
//   reg [3:0] bank_sel;
//   wire [3:0] cmd = {cs, ras, cas, we};
//   always @(posedge clk) begin
//     if (!cke) begin
//         burst_len <= 0;
//         cas_latency <= 0;
//         row_addr <= 0;
//         col_addr <= 0;
//         bank_sel <= 0;
//     end else begin
//       case (cmd)
//         CMD_ACTIVE: begin
//           row_addr <= a;
//           bank_sel <= 4'd1 << ba;
//         end
//         CMD_READ: begin
//           col_addr <= a[9:1];
//           bank_sel <= 4'd1 << ba;
//         end
//         CMD_WRITE: begin
//           col_addr <= a[9:1];
//           bank_sel <= 4'd1 << ba;
//         end
//         CMD_LOAD_MODE: begin
//           cas_latency <= a[6:4];
//           burst_len <= 3'd1 << a[1:0];
//         end
//         default: begin
          
//         end
//       endcase
//     end
//   end
//   assign dq = dq_en ? dq_out : 16'bz;
//   assign dq_in = dq;
  
//   mem_8192x512x16 u0(
//     .clk      	(clk       ),
//     .en       	(en        ),
//     .wen      	(wen       ),
//     .ren      	(ren       ),
//     .row_addr 	(row_addr  ),
//     .col_addr 	(col_addr  ),
//     .wdata    	(wdata     ),
//     .wmask    	(wmask     ),
//     .rdata    	(rdata     )
//   );
//   mem_8192x512x16 u1(
//     .clk      	(clk       ),
//     .en       	(en        ),
//     .wen      	(wen       ),
//     .ren      	(ren       ),
//     .row_addr 	(row_addr  ),
//     .col_addr 	(col_addr  ),
//     .wdata    	(wdata     ),
//     .wmask    	(wmask     ),
//     .rdata    	(rdata     )
//   );
//   mem_8192x512x16 u2(
//     .clk      	(clk       ),
//     .en       	(en        ),
//     .wen      	(wen       ),
//     .ren      	(ren       ),
//     .row_addr 	(row_addr  ),
//     .col_addr 	(col_addr  ),
//     .wdata    	(wdata     ),
//     .wmask    	(wmask     ),
//     .rdata    	(rdata     )
//   );
//   mem_8192x512x16 u3(
//     .clk      	(clk       ),
//     .en       	(en        ),
//     .wen      	(wen       ),
//     .ren      	(ren       ),
//     .row_addr 	(row_addr  ),
//     .col_addr 	(col_addr  ),
//     .wdata    	(wdata     ),
//     .wmask    	(wmask     ),
//     .rdata    	(rdata     )
//   );
// endmodule

// module mem_8192x512x16(
//   input           clk      ,
//   input           en       ,
//   input           wen      ,
//   input           ren      ,
//   input   [12:0]  row_addr ,
//   input   [ 8:0]  col_addr ,
//   input   [15:0]  wdata    ,
//   input   [ 1:0]  wmask    ,
//   output  [15:0]  rdata    
// );  
//   reg [15:0] mem [0:8191][0:511];
  
//   always @(posedge clk) begin
//     if(en & wen) begin
//       mem[row_addr][col_addr][7:0] <= wmask[0] ? wdata[7:0] : mem[row_addr][col_addr][7:0];
//       mem[row_addr][col_addr][15:8] <= wmask[1] ? wdata[15:8] : mem[row_addr][col_addr][15:8];
//     end
//   end

//   assign rdata = (en & ren) ? mem[row_addr][col_addr] : 0;

// endmodule
module sdram(
  input        clk,
  input        cke,
  input        cs,
  input        ras,
  input        cas,
  input        we,
  input [12:0] a,
  input [ 1:0] ba,
  input [ 1:0] dqm,
  inout [15:0] dq
);

  assign dq = 16'bz;

endmodule
