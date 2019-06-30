`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:50:11 06/30/2019 
// Design Name: 
// Module Name:    parityGenerator 
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
module parityGenerator(
    input clk,
    input rst,
    input [6:0] data,
    output reg parityGen
    );

integer i;
initial 
begin
parityGen = data[0];
end

always @(posedge clk, negedge rst)
begin
	if(!rst)
		parityGen = 0;
	else
	begin
		parityGen = data[0];
		for(i=1;i<3'b111;i = i+1)
		begin
			parityGen = parityGen ^ data[i];
			$display("%d",parityGen);
		end
	end
end
endmodule
