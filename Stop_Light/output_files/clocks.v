//clocks
module clocks(
    input Clk_in,
    output reg Clk_out =0
);
parameter count = 25000000;
reg [24:0] counter=0;
    always @(posedge Clk_in)
		if (counter==count) begin
      Clk_out <= ~Clk_out;
		counter=0;
      end else begin
      counter <= counter+1;
		end

   
endmodule