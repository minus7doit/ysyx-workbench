module  ysyx_24110005_lsu #(
    parameter DATA_WIDTH=32,
    parameter ADDR_WIDTH=32
)(
    input                   clk,
    input                   rst,
    input  [DATA_WIDTH-1:0] src1,
    input  [DATA_WIDTH-1:0] src2,
    input  [DATA_WIDTH-1:0] imm,
    input  [2:0]            fun,
    input  [6:0]            opcode,
    input                   mem_ar_valid,
    output                  mem_ar_ready,
    //output                  ar_ready_delay,
    output [DATA_WIDTH-1:0] mem_rdata,
    input                   exc_wb_ready,
    input                   mem_w_valid,
    output                  mem_w_ready,
    output                  mem_bresp
);
parameter TYPE_I0 =7'b0000011;

wire bready;
wire [ADDR_WIDTH-1:0]mem_addr;
wire [7:0]wmask;
wire mem_r_ready;
wire mem_r_valid;
wire [DATA_WIDTH-1:0]mem_wdata;
wire bvalid;

/*wire  ar_valid_delay;
//wire  ar_ready_delay;
wire w_valid_delay;
wire mem_ar_ready;
wire [7:0]latency;
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
    if(mem_ar_valid&&mem_ar_ready)
        r_latency <=latency;
    else 
        r_latency <=r_latency;
end

always @(posedge clk or posedge rst) begin
    if(rst)begin
        latency_cnt<=8'b0;
    end
    else begin
        if((latency_cnt<r_latency))
            latency_cnt <=latency_cnt+1;
        else if(latency_cnt==r_latency)
            latency_cnt<=8'b0;
    end
end
assign lat_flag=(latency_cnt==r_latency);
assign ar_valid_delay=lat_flag&&mem_ar_valid;
assign ar_ready_delay=lat_flag&&mem_ar_ready;

assign w_valid_delay=mem_w_valid&&lat_flag;
*/
ysyx_24110005_Mem #(
.ADDR_WIDTH(DATA_WIDTH    ),
.DATA_WIDTH    (DATA_WIDTH    ))
mem_sram (
    .clk         (clk         ),
    .rst         (rst         ),
    .wmask       (wmask       ),
    .mem_addr    (mem_addr    ),
    //.mem_ar_valid(ar_valid_delay),
    .mem_ar_valid(mem_ar_valid),
    .mem_ar_ready(mem_ar_ready),
    .mem_rdata   (mem_rdata   ),
    .mem_r_ready (mem_r_ready ),
    .mem_r_valid (mem_r_valid ),
    .mem_wdata   (mem_wdata   ),
    .mem_w_valid (mem_w_valid ),
    //.mem_w_valid (w_valid_delay ),
    .mem_w_ready (mem_w_ready ),
    .mem_bresp   (mem_bresp   ),
    .bvalid      (bvalid      ),
    .bready      (bready      )
);

assign bready=1'b1;
assign mem_wdata = src2;
assign mem_addr  = src1+imm;
assign mem_r_ready = (opcode ==TYPE_I0)&&(exc_wb_ready);
assign wmask=fun[0]?8'b11:(fun[1]?8'b1111:8'b1);

endmodule   