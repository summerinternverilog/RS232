`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:58:10 06/30/2019 
// Design Name: 
// Module Name:    PISO 
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
module PISO(
    input clk,
    input rst,
    input [7:0] data,
    output reg serialData
    );
integer i;
initial 
	begin
		serialData = 0;
	end

always @(posedge clk, negedge rst)
	begin
		if(!rst)
			serialData = 0;
		else
			begin 
				for(i=0;i<=3'b111;i=i+1)
					begin
						serialData = data[i];
						$display("%d",serialData);
					end
			end
	end
endmodule
