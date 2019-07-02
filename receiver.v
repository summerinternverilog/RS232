`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:39:30 07/02/2019 
// Design Name: 
// Module Name:    receiver 
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
module receiver(
    input clk,
    input rst,
    input data,
    output reg [7:0] parallelData,
    output reg ready
    );

initial 
begin
 
end
wire [7:0] temp;
SIPO s(clk,rst,data,temp);
always @(posedge clk, negedge rst)
begin
	if(!rst)
	begin
		ready = 0;
		parallelData = 0;
	end
	else
	begin 
		parallelData = temp;
		ready = 1;
	end
end
endmodule
