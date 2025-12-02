module ysyx_24110005_ifu#(
    parameter DATA_WIDTH=32,
    parameter ADDR_WIDTH=32
)(
    input  clk,
    input  rst,
    input  [ADDR_WIDTH-1:0] inst_ar_addr,
    output [DATA_WIDTH-1:0] current_inst,
    input   bresp,
    input   if_r_ready,
    output  if_r_valid
);

reg if_ar_valid;
wire if_ar_ready;
wire if_aw_ready;

wire if_aw_valid;
wire [DATA_WIDTH-1:0]if_wdata;
wire if_w_ready;
wire if_w_valid;

wire if_bresp;
wire if_bvalid;
wire if_bready;

//wire ar_valid_latency;


always@(posedge clk or posedge rst)begin
        if(rst) 
            if_ar_valid<=1'b1;
        else
        begin
        if(bresp)
            if_ar_valid<=1'b1;
        else if(if_ar_valid&&if_ar_ready)
        //else if(ar_valid_latency&&if_ar_ready)
            if_ar_valid<=1'b0;
        else
            if_ar_valid<=if_ar_valid;
        end
end


/*wire [7:0]latency;
reg  [7:0]r_latency;
reg  [7:0]latency_cnt;
wire      lat_flag;

ysyx_24110005_LFSR #(
.DATA_WIDTH(8)
)rand_gen(
.clk(clk),
.rst(rst),
.o_data(latency)
);

always @(posedge clk or posedge rst) begin
    if(rst)begin
        r_latency<=8'b0;
    end
    if(bresp)
        r_latency <=latency;
    else 
        r_latency <=r_latency;
end

always @(posedge clk or posedge rst) begin
    if(rst)begin
        latency_cnt<=8'b0;
    end
    else begin
        if((latency_cnt<r_latency)&&(if_ar_valid))
            latency_cnt <=latency_cnt+1;
        else if(latency_cnt==r_latency)
            latency_cnt<=8'b0;
    end
end
assign lat_flag=(latency_cnt==r_latency);
assign ar_valid_latency=lat_flag&&if_ar_valid;*/


inst_rom #(
    .DATA_WIDTH(DATA_WIDTH),
    .ADDR_WIDTH(DATA_WIDTH)
)IF_Sram(
    .clk(clk),
    .rst(rst),
    .inst_ar_addr(inst_ar_addr),
    .if_ar_valid(if_ar_valid),
   // .if_ar_valid(ar_valid_latency),
    .if_ar_ready(if_ar_ready),
    .current_inst(current_inst),
    .if_r_ready(if_r_ready),
    .if_r_valid(if_r_valid),
    .inst_aw_addr(inst_ar_addr),
    .if_aw_ready(if_aw_ready), 
    .if_aw_valid(if_aw_valid),
    .if_wdata(if_wdata),
    .if_w_valid(if_w_valid),
    .if_w_ready(if_w_ready),
    .bready(if_bready),
    .bvalid(if_bvalid),
    .bresp(if_bresp)
);


assign if_bready=1'b0;
assign if_aw_valid=1'b0;
assign if_w_valid=1'b0;

endmodule