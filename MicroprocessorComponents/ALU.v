`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:    ALU
//////////////////////////////////////////////////////////////////////////////////
module ALU #(parameter width = 32)
				(input [width-1:0] op1, op2,
				 input [2:0] sel,
				 output reg [width-1:0] out);
				 
		parameter ALUand = 3'b000; //a & b
		parameter ALUor = 3'b001;	// a | b
		parameter ALUadd = 3'b010;	//a + b
		parameter ALUandnot = 3'b100; //a&~b
		parameter ALUornot = 3'b101; //a|~b
		parameter ALUsub = 3'b110;	//a-b
		parameter ALUslt = 3'b111;	//set less than. Output 1 if a < b, else output 0
	
	always@* begin
		case (sel)
			ALUand:	out <= op1 & op2;
			ALUor:	out <= op1 | op2;
			ALUadd:	out <= op1 + op2;
			ALUandnot:	out <= op1 & (~op2);
			ALUornot:	out <= op1 | (~op2);
			ALUsub:	out <= op1 - op2;
			ALUslt:	if (op1 < op2) out <= 1;
						else out <= 0;
			default: out <= 0;
		endcase
	end

endmodule

module tb_ALU;
	parameter w = 32;
	reg signed [w-1:0] in1, in2;
	reg [2:0] sel;
	wire signed [w-1:0] result;
	
	ALU #(.width(w)) t1 (.op1(in1), .op2(in2), .sel(sel), .out(result));
	
	initial begin
	in1 = 3; in2 = 2; sel = 0;
	#5 sel = 1;
	#5 sel = 2;
	#5 sel = 4;
	#5 sel = 5;
	#5 sel = 6;
	#5 sel = 7;
	end
endmodule
