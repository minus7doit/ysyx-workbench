module alu(
input [3:0]A,
input [3:0]B,
input [2:0]sel,
//output [3:0]A_comp,
//output [3:0]B_comp,
output reg [3:0]C_comp,
output reg [3:0]C,
output reg out,
output reg overflow,
output reg cout);
wire [3:0]A_comp;
wire [3:0]B_comp;
get_comp #(4)compA(A,A_comp);
get_comp #(4)compB(B,B_comp);
//reg 	[3:0]C_comp;
always@(A or B or sel)begin
	case(sel) 
3'b000:begin 
		{cout,C_comp}=A_comp+B_comp;
		if(C_comp[3]) begin C[2:0]=~(C_comp[2:0]-1'b1); C[3]=C_comp[3];end
		else C=C_comp;
		overflow=(C[3]!=A[3])&&(A[3]==B[3]);
	end
3'b001:begin  {cout,C_comp}=A_comp-B_comp;
			if(C_comp[3]) begin C[2:0]=~(C_comp[2:0]-1'b1); C[3]=C_comp[3];end
         	else C=C_comp;
			overflow=(C[3]!=A[3])&&(A[3]!=B[3]);
  end
3'b010:C=~A;
3'b011:C=A&B;
3'b100:C=A|B;
3'b101:C=A^B;
3'b110:begin 
	{cout,C_comp}=A_comp-B_comp;
	if(C_comp[3]) begin C[2:0]=~(C_comp[2:0]-1'b1); C[3]=C_comp[3];end
	else C=C_comp;
	overflow=(C[3]!=A[3])&&(A[3]!=B[3]);
		out=C[3]^overflow;
		end
3'b111:out=(A==B);
	endcase
end

endmodule
