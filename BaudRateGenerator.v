`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:36:34 06/29/2019 
// Design Name: 
// Module Name:    BaudRateGenerator 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module BaudRateGenerator(
    input clk,
	 input rst,
	 input [14:0] baudRate,
    output reg baud
    );
	 
//reg baud;
reg [14:0] counter;
//reg [14:0] baudRate;
initial 
	begin
		counter = 0;
	end
//wire condition  = (clk || rst);
always @(posedge clk, negedge rst)
	begin
		if(!rst)
			begin
				counter = 0;
			end
		else
			begin
				if(clk)
					begin
						counter = counter + 1;
						if(counter==baudRate)
							begin
								baud = 1;
								counter = 15'b000000000000000;
							end
						else
							baud = 0;
					end
			end
		end
endmodule
