module proce(
input CLOCK_50,
input [3:0] SW,
input [1:0] KEY,
output reg [1:0] LED
);
 
reg signed [1:0] A = 0;
reg signed [1:0] B = 0;
 
// load A and B when KEY[0] is pressed
always @(posedge KEY[0]) begin
A <= SW[1:0];
B <= SW[3:2];
end
 
// execute the instruction specified by the SW when KEY[1] is pressed
always @(posedge KEY[1]) begin
case (SW)
1: LED <= A;
2: LED <= ~A;
4: LED <= A + B;
8: LED <= A & B;
default: LED <= 2'bxx; // don't care if switch config is invalid
endcase
end
 
endmodule 