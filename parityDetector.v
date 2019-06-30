`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:01:58 06/30/2019 
// Design Name: 
// Module Name:    parityDetector 
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
module parityDetector(
    input clk,
    input rst,
    input [7:0] data,
    output reg parityDetect
    );
integer i;
always @(posedge clk, negedge rst)
begin
	if(!rst)
		parityDetect = 0;
	else
	begin
		parityDetect = data[0];
		for(i=2;i<=4'b1000;i=i+1)
		begin
			$display("i = %d parity = %d",i-1,parityDetect);
			parityDetect = parityDetect ^ data[i-1];
		end
		parityDetect = !parityDetect;
	end
end
endmodule
