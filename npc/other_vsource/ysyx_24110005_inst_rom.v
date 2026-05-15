module inst_rom#(
    parameter DATA_WIDTH=32,
    parameter ADDR_WIDTH=32
)(
    input  clock,
    input  reset,
    input  [ADDR_WIDTH-1:0] inst_ar_addr,
    output  if_ar_ready, 
    input   if_ar_valid,
    output [DATA_WIDTH-1:0] current_inst,
    input   if_r_ready,
    output  if_r_valid,  
    input  [ADDR_WIDTH-1:0] inst_aw_addr,
    output  if_aw_ready, 
    input   if_aw_valid,
    input   [DATA_WIDTH-1:0]if_wdata,
    input   if_w_valid,
    output  if_w_ready,
    input   bready,
    output  bvalid,
    output  bresp
);

import "DPI-C" function int pmem_read(input int unsigned raddr);

parameter STATE_IF=2'b01;
parameter STATE_OUTPUT=2'b10;
//wire if_r_valid;
reg [1:0] if_state;
always @(posedge clock or posedge reset) begin
    if(reset)begin
        if_state<=STATE_IF;
    end
    else begin
        case (if_state)
            STATE_IF:begin
            if(if_ar_valid&&if_ar_ready)
                if_state<=STATE_OUTPUT;
            end
            STATE_OUTPUT:begin
            if(if_r_ready&&if_r_valid)
                if_state<=STATE_IF;
            end
            default: if_state<=STATE_IF;
        endcase
    end
end

reg [DATA_WIDTH-1:0] fetch_dec_inst;
wire inst;


always @(posedge clock or posedge reset) begin
    if(reset)begin
        fetch_dec_inst<=32'b0;
    end
    else begin
        if(if_ar_valid&&if_ar_ready)begin
            fetch_dec_inst<=pmem_read(inst_ar_addr);
        end
        else begin
            fetch_dec_inst<=fetch_dec_inst;
        end
    end
end


//wire   [DATA_WIDTH-1:0] inst_delayed;

/*wire [7:0]latency;
reg  [7:0]r_latency;
reg  [7:0]latency_cnt;

ysyx_24110005_LFSR #(
.DATA_WIDTH(8)
)rand_gen(
.clock(clock),
.reset(reset),
.o_data(latency)
);

always @(posedge clock or posedge reset) begin
    if(reset)begin
        r_latency<=8'b0;
    end
    if(if_ar_valid&&if_ar_ready)
        r_latency <=latency;
    else 
        r_latency <=r_latency;
end

always @(posedge clock or posedge reset) begin
    if(reset)begin
        latency_cnt<=8'b0;
    end
    else begin
        if((latency_cnt<r_latency)&&(if_state==STATE_OUTPUT))
            latency_cnt <=latency_cnt+1;
        else if(latency_cnt==r_latency)
            latency_cnt<=8'b0;
    end
end*/

/*
wire inst_delayed_valid;

ysyx_24110005_delay #(
.LATENCY(10),
.DATA_WIDTH(1)
)inst_valid_delay(
.clock(clock),
.reset(reset),
.i_data(if_r_valid),
.o_data_delayed(inst_delayed_valid)
);

assign r_valid=inst_delayed_valid;

ysyx_24110005_delay #(
.LATENCY(10),
.DATA_WIDTH(32)
)inst_delay(
.clock(clock),
.reset(reset),
.i_data(fetch_dec_inst),
.o_data_delayed(inst_delayed)
);
wire   lat_flag;
assign lat_flag=(latency_cnt==r_latency);*/
assign if_r_valid=(if_state==STATE_OUTPUT);
assign if_ar_ready=(if_state==STATE_IF);
assign current_inst =fetch_dec_inst;
//assign current_inst=inst_delayed;
//只读存储，置0
assign bvalid=0;
assign bresp=0;
assign if_aw_ready=0;
assign if_w_ready=0;
endmodule