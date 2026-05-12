module ysyx_24110005_fifo#(
    parameter  DATA_WIDTH = 8,
    parameter  DEPTH = 32
)(
   input        clock,
   input        reset,
   input  [DATA_WIDTH-1:0] i_data,
   input        wen,
   input        ren,
   output [DATA_WIDTH-1:0] o_data,
   output       o_empty,
   output       o_full
);
localparam PTR_W   = $clog2(DEPTH);
localparam COUNT_W = $clog2(DEPTH + 1);
reg [DATA_WIDTH-1:0] fifo [0:DEPTH-1];
reg [PTR_W-1:0]   w_ptr;
reg [PTR_W-1:0]   r_ptr;
reg [COUNT_W-1:0] count;
//需要保证外部的wen要被empty和full牵制。
always @(posedge clock or posedge reset) begin
    if(reset)
        w_ptr <= 0;
    else if(wen)
        w_ptr <= w_ptr+1'b1;
end

always @(posedge clock or posedge reset) begin
    if(reset)
        r_ptr <= 0;
    else if(ren && !o_empty) //读的时候要保证不空
        r_ptr <= r_ptr + 1'b1;
end

always @(posedge clock) begin
    if(wen && !o_full) fifo [w_ptr] <= i_data;
end


always @(posedge clock or posedge reset) begin
    if(reset) count <= {COUNT_W{1'b0}};
    else begin
        case ({wen,ren})
            2'b10:count<= count +1'b1;
            2'b01:count<= count -1'b1; 
            default:count <= count; 
        endcase
    end
end

assign o_data  =  (!o_empty) ? fifo[r_ptr] : {DATA_WIDTH{1'b0}};
assign o_empty = (count == {COUNT_W{1'b0}});
assign o_full  = (count == DEPTH);
endmodule