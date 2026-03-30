module ysyx_24110005_Clint #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32
)(
    input                   clock,
    input                   reset,

    // ================= AXI4 Slave: AR =================
    input                   s_arvalid,
    output                  s_arready,
    input  [ADDR_WIDTH-1:0] s_araddr,
    input  [3:0]            s_arid,
    input  [7:0]            s_arlen,
    input  [2:0]            s_arsize,
    input  [1:0]            s_arburst,

    // ================= AXI4 Slave: R ==================
    output                  s_rvalid,
    input                   s_rready,
    output [DATA_WIDTH-1:0] s_rdata,
    output [1:0]            s_rresp,
    output                  s_rlast,
    output [3:0]            s_rid,

    // ================= AXI4 Slave: AW =================
    input                   s_awvalid,
    output                  s_awready,
    input  [ADDR_WIDTH-1:0] s_awaddr,
    input  [3:0]            s_awid,
    input  [7:0]            s_awlen,
    input  [2:0]            s_awsize,
    input  [1:0]            s_awburst,

    // ================= AXI4 Slave: W ==================
    input                   s_wvalid,
    output                  s_wready,
    input  [DATA_WIDTH-1:0] s_wdata,
    input  [3:0]            s_wstrb,
    input                   s_wlast,

    // ================= AXI4 Slave: B ==================
    output                  s_bvalid,
    input                   s_bready,
    output [1:0]            s_bresp,
    output [3:0]            s_bid
);

parameter CLINT_IDLE   = 2'b00;
parameter CLINT_OUTPUT = 2'b01;

parameter RTC_MMIO_LOW = 32'h02000000;
parameter RTC_MMIO_HI  = 32'h02000004;

reg [1:0] clint_state;

// ------------------------
// 你原来的握手语义保持：arready 只在 IDLE，rvalid 只在 OUTPUT
// ------------------------
wire clint_ar_fire = s_arvalid && s_arready;
wire clint_r_fire  = s_rvalid  && s_rready;

always @(posedge clock or posedge reset) begin
    if (reset) begin
        clint_state <= CLINT_IDLE;
    end else begin
        case (clint_state)
            CLINT_IDLE: begin
                if (clint_ar_fire)
                    clint_state <= CLINT_OUTPUT;
            end
            CLINT_OUTPUT: begin
                if (clint_r_fire)
                    clint_state <= CLINT_IDLE;
            end
            default: clint_state <= CLINT_IDLE;
        endcase
    end
end

// ------------------------
// mtime 计数逻辑：保持不变
// ------------------------
reg [DATA_WIDTH-1:0] mtime_hi;
reg [DATA_WIDTH-1:0] mtime_low;

always @(posedge clock or posedge reset) begin
    if (reset) begin
        mtime_low <= 32'b0;
    end else begin
        mtime_low <= mtime_low + 1'b1;
    end
end

always @(posedge clock or posedge reset) begin
    if (reset) begin
        mtime_hi <= 32'b0;
    end else begin
        if (mtime_low == 32'hffff_ffff)
            mtime_hi <= mtime_hi + 1'b1;
    end
end

// ------------------------
// 读数据生成：保持原语义（在 AR 握手时采样地址并决定输出）
// ------------------------
reg [DATA_WIDTH-1:0] r_clint_rdata;

always @(posedge clock or posedge reset) begin
    if (reset) begin
        r_clint_rdata <= 32'b0;
    end else begin
        if (clint_ar_fire) begin
            if (s_araddr == RTC_MMIO_LOW)
                r_clint_rdata <= mtime_low;
            else if (s_araddr == RTC_MMIO_HI)
                r_clint_rdata <= mtime_hi;
            else
                r_clint_rdata <= r_clint_rdata;
        end else begin
            r_clint_rdata <= r_clint_rdata;
        end
    end
end

// ------------------------
// AXI4 需要返回 RID：握手时锁存 ARID（不影响你原功能）
// ------------------------
reg [3:0] r_rid;
always @(posedge clock or posedge reset) begin
    if (reset) begin
        r_rid <= 4'b0;
    end else begin
        if (clint_ar_fire)
            r_rid <= s_arid;
    end
end

// ------------------------
// 输出映射（读通道）
// ------------------------
assign s_rdata  = r_clint_rdata;
assign s_rvalid = (clint_state == CLINT_OUTPUT);
assign s_arready = (clint_state == CLINT_IDLE);

assign s_rresp  = 2'b00;   // OKAY
assign s_rlast  = 1'b1;    // 单拍返回
assign s_rid    = r_rid;

// ------------------------
// 写通道：不使用，按规范输出常 0
// ------------------------
assign s_awready = 1'b0;
assign s_wready  = 1'b0;

assign s_bvalid  = 1'b0;
assign s_bresp   = 2'b00;
assign s_bid     = 4'b0;

// 说明：s_arlen/s_arsize/s_arburst、以及所有写通道输入（aw/w）均“悬空不用”，不需要额外逻辑

endmodule
