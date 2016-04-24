`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:    Mux
//////////////////////////////////////////////////////////////////////////////////
module Mux #(parameter width = 32)
				(input sel,
				 input [width-1:0] in1, in2,
				 output reg [width-1:0] out);

	always@* begin
		if (sel) out <= in1;
		else out <= in2;
	end

endmodule