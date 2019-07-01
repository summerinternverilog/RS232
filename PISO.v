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
integer j;
reg [7:0] temp ;
initial 
	begin
		serialData = 0;
		//temp = data;
		i = 1;
	end

always @(posedge clk, negedge rst)
	begin
		if(!rst)
		begin
			serialData = 0;
			temp = data;
			i = 1;
		end
		else
			begin
				if(i)
				begin
					for(j = 0;j<=3'b111;j=j+1)
					begin
						temp[j] = data[j];
						$display(" j = %d, temp = %d",j,temp[j]);
					end
					i = 0;
				end
				if(temp==0)
				i = 1;
				serialData = temp[7];
				temp = temp<<1'b1;
				//$display("%d",temp);
			end
	end
endmodule
