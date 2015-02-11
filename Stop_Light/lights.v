// Top-level module
module traffic_light(

input CLOCK_50,
input [1:0] KEY,
output reg [5:0]LED
);
 
// some registers to hold the current state we are in
// and the state we will transfer to at the next clock
reg [5:0] next_state=0;
reg [5:0] cur_state=0;
 
// define the names of the states
parameter
STATE_0 = 0,
STATE_1 = 1,
STATE_2 = 2,
STATE_3 = 3,
STATE_4 = 4,
STATE_5 = 5;
 
 
 assign rst = ~KEY[0];
 wire slow_clk;
 clocks clk_div(
	.Clk_in(CLOCK_50),
	.Clk_out(slow_clk)
	);
 
// when the current state changes update the leds and set the next state
always @(cur_state) begin
	case (cur_state)
		STATE_0: begin
		LED[0] <= 1;
		LED[1] <= 0;
		LED[2] <= 0;
		LED[3] <= 0;
		LED[4] <= 0;
		LED[5] <= 1;
		next_state <= STATE_1;
	end
		STATE_1: begin
		LED[0] <= 0;
		LED[1] <= 1;
		LED[2] <= 0;
		LED[3] <= 0;
		LED[4] <= 0;
		LED[5] <= 1;
		next_state <= STATE_2;
	end
		STATE_2: begin
		LED[0] <= 0;
		LED[1] <= 0;
		LED[2] <= 1;
		LED[3] <= 0;
		LED[4] <= 0;
		LED[5] <= 1;
		next_state <= STATE_3;
	end
		STATE_3: begin
		LED[0] <= 0;
		LED[1] <= 0;
		LED[2] <= 1;
		LED[3] <= 1;
		LED[4] <= 0;
		LED[5] <= 0;
		next_state <= STATE_4;
	end
			STATE_4: begin
		LED[0] <= 0;
		LED[1] <= 0;
		LED[2] <= 1;
		LED[3] <= 0;
		LED[4] <= 1;
		LED[5] <= 0;
		next_state <= STATE_5;
	end
		STATE_5: begin
		LED[0] <= 0;
		LED[1] <= 0;
		LED[2] <= 1;
		LED[3] <= 0;
		LED[4] <= 0;
		LED[5] <= 1;
		next_state <= STATE_0;
	end
	default: begin
		LED[0] <= 1;
		LED[1] <= 1;
		LED[2] <= 1;
		LED[3] <= 1;
		LED[4] <= 1;
		LED[5] <= 1;
		next_state <= STATE_0;
	end
endcase
end
 
 

// advance the state machine at every clock
always @(posedge slow_clk, posedge rst) begin
	if (rst)
		cur_state <= STATE_0;
	else
		cur_state <= next_state;
	end
 
endmodule 