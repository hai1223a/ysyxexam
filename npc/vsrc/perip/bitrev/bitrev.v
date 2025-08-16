module bitrev (
  input  sck,
  input  ss,
  input  mosi,
  output miso
);
  reg [7:0] fifo;
  reg [2:0] count_r, count_w;
  reg [1:0] state;
  parameter idel  = 2'b00;
  parameter read  = 2'b01;
  parameter write = 2'b10;
  always@(posedge sck, posedge ss) begin
    if (ss) begin
      count_r <= 0;
      count_w <= 0;
      fifo <= 0;
      state <= idel; 
    end else begin
      case (state)
          idel: begin
            state <= read;
            fifo <= {fifo[6:0], mosi};
          end
          read: begin
            count_r <= count_r + 3'd1;
            if (count_r == 3'd7) begin
              state <= write;
            end else begin
              fifo <= {fifo[6:0], mosi};
              state <= read;
            end
          end
          write: begin
            count_w <= count_w + 3'd1;
            fifo <= {1'b0, fifo[7:1]};
            if (count_w == 3'd7) begin
              state <= idel;
            end else begin
              state <= write;
            end
          end
        default: ;
      endcase
    end
  end

  assign miso = (state == write) ? fifo[0] : 1;
endmodule
