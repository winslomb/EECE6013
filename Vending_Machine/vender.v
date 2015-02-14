module vender(                                 
                                                                   
    input [3:0] SW,			//Inputs for choices
    input [1:0] KEY,			//Inputs for payment
    output reg [3:0] LED	//Outputs for LEDs
);

assign button = ~KEY[0];

// each product is worth 1 quarter
always @(posedge button) begin

        case (SW)
            1: LED <= 4'b0001;
            2: LED <= 4'b0010;
            4: LED <= 4'b0100;
            8: LED <= 4'b1000;
            default: LED <= 4'bxxxx; // don't care if switch config is invalid
        endcase
    end

endmodule