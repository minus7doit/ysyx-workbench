module barrel_shifter(
input [7:0]i_data,
input [2:0]shamt,
input L_R,
input A_L,
output [7:0]data_out);
parameter SHIFT_OFFSET_WIDTH=3;
parameter DATA_WIDTH=8;
/* verilator lint_off UNOPTFLAT */
wire [DATA_WIDTH-1:0] w_data[SHIFT_OFFSET_WIDTH-1:0];  
genvar layer;
generate
	for (layer = 0; layer < SHIFT_OFFSET_WIDTH; layer = layer + 1) begin
		localparam SHIFT_CNT_LAYER = 1<<layer;
		if (layer == 0)
			assign w_data[layer] = shamt[layer]?
			  (L_R?(A_L?{i_data[DATA_WIDTH-1],i_data[DATA_WIDTH-1:1]}
			            :{1'b0,i_data[DATA_WIDTH-1:1]})
			      :(A_L?{i_data[DATA_WIDTH-2:0],i_data[0]}
			           :{i_data[DATA_WIDTH-2:0],1'b0}))
			                              :i_data;								  
		else 	
			assign w_data[layer] = shamt[layer]?
                (L_R?(A_L?{{SHIFT_CNT_LAYER{w_data[layer-1][DATA_WIDTH-1]}},w_data[layer-1][DATA_WIDTH-1:SHIFT_CNT_LAYER]}
                          :{{SHIFT_CNT_LAYER{1'b0}},w_data[layer-1][DATA_WIDTH-1:SHIFT_CNT_LAYER]})
                    :(A_L?{w_data[layer-1][DATA_WIDTH-SHIFT_CNT_LAYER-1:0],{SHIFT_CNT_LAYER{w_data[layer-1][0]}}}
							:{w_data[layer-1][DATA_WIDTH-SHIFT_CNT_LAYER-1:0],{SHIFT_CNT_LAYER{1'b0}}}))	 
										   : w_data[layer-1];
	end
endgenerate
assign	data_out = w_data[SHIFT_OFFSET_WIDTH-1];
/* verilator lint_on UNOPTFLAT */
endmodule
