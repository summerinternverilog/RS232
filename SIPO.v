`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:46:03 07/01/2019 
// Design Name: 
// Module Name:    SIPO 
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
module SIPO(
    input clk,
    input rst,
    input data,
    output reg [7:0] parallelData
    );

reg [7:0] temp;
integer i,j;
	
initial
begin
	temp = 0;
	i = 1;
end

always @(posedge clk, negedge rst)
begin
	if(!rst)
		parallelData = 0;
		
	else
	begin
		//i = 1;
		if(i)
		temp = 0;
		/*for(i=0;i<=3'b111;i=i+1)
		begin
			temp[i] = 0;
		end*/
		temp = temp<<1'b1;
		temp[0] = data;
		$display("%d",temp);
		i = 0;
	for(j=0;j<=3'b111;j=j+1)
	parallelData[j] = temp[j];
	end
end

endmodule
