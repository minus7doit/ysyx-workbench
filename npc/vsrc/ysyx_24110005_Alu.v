/* verilator lint_off UNUSEDSIGNAL */
module ysyx_24110005_Alu #(
    parameter DATA_WIDTH=32,
    parameter OP_WIDTH=7,
    parameter REG_ADDR_WIDTH=5,
    parameter FUN_WIDTH=3
) (
input [DATA_WIDTH-1:0] src1,
input [DATA_WIDTH-1:0] src2,
input [DATA_WIDTH-1:0] imm ,
input [(OP_WIDTH+FUN_WIDTH)-1:0]sel,
input [REG_ADDR_WIDTH-1:0]w_addr,
output reg [DATA_WIDTH-1:0] w_data,
output wen
);

wire [DATA_WIDTH-1:0]src1_comp;
wire [DATA_WIDTH-1:0]src2_comp;
wire [DATA_WIDTH-1:0]imm_comp;
   
parameter TYPE_B=7'b1100011;
parameter TYPE_S=7'b0100011;
get_comp #(DATA_WIDTH)comp1(src1,src1_comp);
get_comp #(DATA_WIDTH)comp2(src2,src2_comp);
get_comp #(DATA_WIDTH)comp3(imm,  imm_comp);
reg [DATA_WIDTH-1:0]w_data_comp;
always@(*)begin
    case(sel) 
    10'b000_0010011:begin 
        w_data_comp=src1_comp+imm_comp;
        w_data=w_data_comp[DATA_WIDTH-1]?{w_data_comp[DATA_WIDTH-1],~(w_data_comp[DATA_WIDTH-2:0]-1'b1)}:w_data_comp;                            
	 end
        
    default:w_data=0; 
    endcase
end

    assign wen=~((sel[6:0]==TYPE_S)|(sel[6:0]==TYPE_B));
endmodule





/*
3'b000:begin 
        {cout,w_data_comp}= A_comp+B_comp;
        w_data=w_data_comp[3]?{w_data_comp[3],~(w_data_comp[2:0]-1'b1}:w_data_comp;                            
        overflow = (A[DATA_WIDTH-1] == B[DATA_WIDTH-1]) && (w_data[DATA_WIDTH-1]!= B[DATA_WIDTH-1])
 end                             
3'b001:begin  {cout,w_data_comp}=A_comp-B_comp;
			if(w_data_comp[3]) begin w_data[2:0]=~(w_data_comp[2:0]-1'b1); w_data[3]=w_data_comp[3];end
         	else w_data=w_data_comp;
			overflow=(w_data[3]!=A[3])&&(A[3]!=B[3]);
  end
3'b010:w_data=~A;
3'b011:w_data=A&B;
3'b100:w_data=A|B;
3'b101:w_data=A^B;
3'b110:begin 
	{cout,w_data_comp}=A_comp-B_comp;
	if(w_data_comp[3]) begin w_data[2:0]=~(w_data_comp[2:0]-1'b1); w_data[3]=w_data_comp[3];end
	else w_data=w_data_comp;
	overflow=(w_data[3]!=A[3])&&(A[3]!=B[3]);
		out=w_data[3]^overflow;
		end
3'b111:out=(A==B);*/

