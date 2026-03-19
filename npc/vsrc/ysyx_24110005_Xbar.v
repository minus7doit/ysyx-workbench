module ysyx_24110005_Xbar #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32,

    // 你也可以按你的 SoC 地址图改这里
    parameter CLINT_ADDR_LEFT  = 32'hA000_0048,
    parameter CLINT_ADDR_RIGHT = 32'hA000_004C
)(
    input  wire                  clock,
    input  wire                  reset,

    // ====================== 上游 xb_*（来自 Arbiter）======================
    input  wire                  xb_ar_valid,
    output wire                  xb_ar_ready,
    input  wire [ADDR_WIDTH-1:0] xb_ar_addr,
    input  wire [3:0]            xb_ar_id,
    input  wire [7:0]            xb_ar_len,
    input  wire [2:0]            xb_ar_size,
    input  wire [1:0]            xb_ar_burst,

    output wire                  xb_r_valid,
    input  wire                  xb_r_ready,
    output wire [DATA_WIDTH-1:0] xb_r_data,
    output wire [1:0]            xb_r_resp,
    output wire                  xb_r_last,
    output wire [3:0]            xb_r_id,

    input  wire                  xb_aw_valid,
    output wire                  xb_aw_ready,
    input  wire [ADDR_WIDTH-1:0] xb_aw_addr,
    input  wire [3:0]            xb_aw_id,
    input  wire [7:0]            xb_aw_len,
    input  wire [2:0]            xb_aw_size,
    input  wire [1:0]            xb_aw_burst,

    input  wire                  xb_w_valid,
    output wire                  xb_w_ready,
    input  wire [DATA_WIDTH-1:0] xb_w_data,
    input  wire [3:0]            xb_w_strb,
    input  wire                  xb_w_last,

    output wire                  xb_b_valid,
    input  wire                  xb_b_ready,
    output wire [1:0]            xb_b_resp,
    output wire [3:0]            xb_b_id,

    // ====================== 下游 soc_*（接顶层 io_master_*）======================
    output wire                  soc_arvalid,
    input  wire                  soc_arready,
    output wire [ADDR_WIDTH-1:0] soc_araddr,
    output wire [3:0]            soc_arid,
    output wire [7:0]            soc_arlen,
    output wire [2:0]            soc_arsize,
    output wire [1:0]            soc_arburst,

    input  wire                  soc_rvalid,
    output wire                  soc_rready,
    input  wire [DATA_WIDTH-1:0] soc_rdata,
    input  wire [1:0]            soc_rresp,
    input  wire                  soc_rlast,
    input  wire [3:0]            soc_rid,

    output wire                  soc_awvalid,
    input  wire                  soc_awready,
    output wire [ADDR_WIDTH-1:0] soc_awaddr,
    output wire [3:0]            soc_awid,
    output wire [7:0]            soc_awlen,
    output wire [2:0]            soc_awsize,
    output wire [1:0]            soc_awburst,

    output wire                  soc_wvalid,
    input  wire                  soc_wready,
    output wire [DATA_WIDTH-1:0] soc_wdata,
    output wire [3:0]            soc_wstrb,
    output wire                  soc_wlast,

    input  wire                  soc_bvalid,
    output wire                  soc_bready,
    input  wire [1:0]            soc_bresp,
    input  wire [3:0]            soc_bid,

    // ====================== 下游 clint_*（接内部 CLINT）======================
    output wire                  clint_arvalid,
    input  wire                  clint_arready,
    output wire [ADDR_WIDTH-1:0] clint_araddr,
    output wire [3:0]            clint_arid,
    output wire [7:0]            clint_arlen,
    output wire [2:0]            clint_arsize,
    output wire [1:0]            clint_arburst,

    input  wire                  clint_rvalid,
    output wire                  clint_rready,
    input  wire [DATA_WIDTH-1:0] clint_rdata,
    input  wire [1:0]            clint_rresp,
    input  wire                  clint_rlast,
    input  wire [3:0]            clint_rid,

    output wire                  clint_awvalid,
    input  wire                  clint_awready,
    output wire [ADDR_WIDTH-1:0] clint_awaddr,
    output wire [3:0]            clint_awid,
    output wire [7:0]            clint_awlen,
    output wire [2:0]            clint_awsize,
    output wire [1:0]            clint_awburst,

    output wire                  clint_wvalid,
    input  wire                  clint_wready,
    output wire [DATA_WIDTH-1:0] clint_wdata,
    output wire [3:0]            clint_wstrb,
    output wire                  clint_wlast,

    input  wire                  clint_bvalid,
    output wire                  clint_bready,
    input  wire [1:0]            clint_bresp,
    input  wire [3:0]            clint_bid
);

  // ------------------------------------------------------------
  // 地址译码：只区分 SOC vs CLINT
  // ------------------------------------------------------------
  wire ar_to_clint = (xb_ar_addr >= CLINT_ADDR_LEFT) && (xb_ar_addr <= CLINT_ADDR_RIGHT);
  wire aw_to_clint = (xb_aw_addr >= CLINT_ADDR_LEFT) && (xb_aw_addr <= CLINT_ADDR_RIGHT);

  // ------------------------------------------------------------
  // 为了不把返回通道接错：锁存一次读/写的去向
  // （默认你单发起/顺序 AXI，用这个最小锁存就够）
  // ------------------------------------------------------------
  reg rd_sel_clint;
  reg wr_sel_clint;

  wire ar_hs = xb_ar_valid && xb_ar_ready;
  wire aw_hs = xb_aw_valid && xb_aw_ready;

  wire r_done = xb_r_valid && xb_r_ready && xb_r_last;
  wire b_done = xb_b_valid && xb_b_ready;

  always @(posedge clock or posedge reset) begin
    if (reset) begin
      rd_sel_clint <= 1'b0;
    end else begin
      if (ar_hs)        rd_sel_clint <= ar_to_clint;
      else if (r_done)  rd_sel_clint <= 1'b0;
    end
  end

  always @(posedge clock or posedge reset) begin
    if (reset) begin
      wr_sel_clint <= 1'b0;
    end else begin
      if (aw_hs)        wr_sel_clint <= aw_to_clint;
      else if (b_done)  wr_sel_clint <= 1'b0;
    end
  end

  // ------------------------------------------------------------
  // AR 通道：xb -> (soc/clint)
  // ------------------------------------------------------------
  assign soc_arvalid  = xb_ar_valid && !ar_to_clint;
  assign soc_araddr   = xb_ar_addr;
  assign soc_arid     = xb_ar_id;
  assign soc_arlen    = xb_ar_len;
  assign soc_arsize   = xb_ar_size;
  assign soc_arburst  = xb_ar_burst;

  assign clint_arvalid = xb_ar_valid &&  ar_to_clint;
  assign clint_araddr  = xb_ar_addr;
  assign clint_arid    = xb_ar_id;
  assign clint_arlen   = xb_ar_len;
  assign clint_arsize  = xb_ar_size;
  assign clint_arburst = xb_ar_burst;

  assign xb_ar_ready  = ar_to_clint ? clint_arready : soc_arready;

  // ------------------------------------------------------------
  // R 通道：(soc/clint) -> xb
  // ------------------------------------------------------------
  assign xb_r_valid = rd_sel_clint ? clint_rvalid : soc_rvalid;
  assign xb_r_data  = rd_sel_clint ? clint_rdata  : soc_rdata;
  assign xb_r_resp  = rd_sel_clint ? clint_rresp  : soc_rresp;
  assign xb_r_last  = rd_sel_clint ? clint_rlast  : soc_rlast;
  assign xb_r_id    = rd_sel_clint ? clint_rid    : soc_rid;

  assign soc_rready   = xb_r_ready && !rd_sel_clint;
  assign clint_rready = xb_r_ready &&  rd_sel_clint;

  // ------------------------------------------------------------
  // AW 通道：xb -> (soc/clint)
  // ------------------------------------------------------------
  assign soc_awvalid  = xb_aw_valid && !aw_to_clint;
  assign soc_awaddr   = xb_aw_addr;
  assign soc_awid     = xb_aw_id;
  assign soc_awlen    = xb_aw_len;
  assign soc_awsize   = xb_aw_size;
  assign soc_awburst  = xb_aw_burst;

  assign clint_awvalid = xb_aw_valid &&  aw_to_clint;
  assign clint_awaddr  = xb_aw_addr;
  assign clint_awid    = xb_aw_id;
  assign clint_awlen   = xb_aw_len;
  assign clint_awsize  = xb_aw_size;
  assign clint_awburst = xb_aw_burst;

  assign xb_aw_ready  = aw_to_clint ? clint_awready : soc_awready;

  // ------------------------------------------------------------
  // W 通道：xb -> (soc/clint)
  // 注意：这里用 wr_sel_clint 做门控，避免 AW 后写数据跑错口
  // ------------------------------------------------------------
  assign soc_wvalid = xb_w_valid && !wr_sel_clint;
  assign soc_wdata  = xb_w_data;
  assign soc_wstrb  = xb_w_strb;
  assign soc_wlast  = xb_w_last;

  assign clint_wvalid = xb_w_valid &&  wr_sel_clint;
  assign clint_wdata  = xb_w_data;
  assign clint_wstrb  = xb_w_strb;
  assign clint_wlast  = xb_w_last;

  assign xb_w_ready   = wr_sel_clint ? clint_wready : soc_wready;

  // ------------------------------------------------------------
  // B 通道：(soc/clint) -> xb
  // ------------------------------------------------------------
  assign xb_b_valid = wr_sel_clint ? clint_bvalid : soc_bvalid;
  assign xb_b_resp  = wr_sel_clint ? clint_bresp  : soc_bresp;
  assign xb_b_id    = wr_sel_clint ? clint_bid    : soc_bid;

  assign soc_bready   = xb_b_ready && !wr_sel_clint;
  assign clint_bready = xb_b_ready &&  wr_sel_clint;

endmodule
