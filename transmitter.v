`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:52:15 07/01/2019 
// Design Name: 
// Module Name:    transmitter 
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
module transmitter(
    input clk,
	input rst,
    input [7:0] data,
    input start,
    output reg busy,
    output reg tx
    );

initial
begin
	
end
wire temp;
PISO p (clk,rst,data,temp);
always @(posedge clk, negedge rst)
begin
	if(!rst)
	begin
		tx = 0;
		busy = 1'b1;
	end
	else
	begin
		if(start)
		begin
			tx = temp;
			busy = 0;		
		end
		else
			busy = 1;
	end
end

endmodule
