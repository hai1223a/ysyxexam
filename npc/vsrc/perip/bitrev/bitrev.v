// module bitrev (
//   input  sck,
//   input  ss,
//   input  mosi,
//   output miso
// );
//   reg [7:0] fifo;
//   reg [2:0] count_r, count_w;
//   reg [1:0] state;
//   parameter idel  = 2'b00;
//   parameter read  = 2'b01;
//   parameter write = 2'b10;
//   always@(posedge sck, posedge ss) begin
//     if (ss) begin
//       count_r <= 0;
//       count_w <= 0;
//       fifo <= 0;
//       state <= idel; 
//     end else begin
//       case (state)
//           idel: begin
//             state <= read;
//             fifo <= {fifo[6:0], mosi};
//           end
//           read: begin
//             count_r <= count_r + 3'd1;
//             if (count_r == 3'd7) begin
//               state <= write;
//             end else begin
//               fifo <= {fifo[6:0], mosi};
//               state <= read;
//             end
//           end
//           write: begin
//             count_w <= count_w + 3'd1;
//             fifo <= {1'b0, fifo[7:1]};
//             if (count_w == 3'd7) begin
//               state <= idel;
//             end else begin
//               state <= write;
//             end
//           end
//         default: ;
//       endcase
//     end
//   end

//   assign miso = (state == write) ? fifo[0] : 1;
// endmodule
module bitrev (
  input  sck,
  input  ss,
  input  mosi,
  output reg miso
);
  reg [7:0] fifo;
  reg [2:0] count;
  reg [1:0] state;
  
  parameter idle  = 2'b00;
  parameter read  = 2'b01;
  parameter write = 2'b10;
  
  always @(posedge sck or posedge ss) begin
    if (ss) begin
      count <= 0;
      fifo <= 0;
      state <= idle;
      miso <= 1'b1;  // 高阻态
    end else begin
      case (state)
        idle: begin
          if (!mosi) begin  // 等待起始位
            state <= read;
            fifo <= {fifo[6:0], mosi};
            count <= count + 1;
          end
        end
        read: begin
          fifo <= {fifo[6:0], mosi};
          count <= count + 1;
          if (count == 3'd7) begin
            state <= write;
            count <= 0;
            fifo <= {fifo[0], fifo[1], fifo[2], fifo[3], 
                    fifo[4], fifo[5], fifo[6], fifo[7]};  // 位反转
          end
        end
        write: begin
          miso <= fifo[7];  // 输出最高位
          fifo <= {fifo[6:0], 1'b0};  // 左移
          count <= count + 1;
          if (count == 3'd7) begin
            state <= idle;
            count <= 0;
            miso <= 1'bz;
          end
        end
        default: state <= idle;
      endcase
    end
  end
endmodule