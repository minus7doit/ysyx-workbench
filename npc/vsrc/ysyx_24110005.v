`timescale 1ns/1ps

module ysyx_24110005(
  input             clock,
  input             reset,           // 高电平有效
  input             io_interrupt,

  // ================= AXI4 Master =================
  input             io_master_awready,
  output            io_master_awvalid,
  output   [31:0]   io_master_awaddr,
  output   [3:0]    io_master_awid,
  output   [7:0]    io_master_awlen,
  output   [2:0]    io_master_awsize,
  output   [1:0]    io_master_awburst,

  input             io_master_wready,
  output            io_master_wvalid,
  output   [31:0]   io_master_wdata,
  output   [3:0]    io_master_wstrb,
  output            io_master_wlast,

  output            io_master_bready,
  input             io_master_bvalid,
  input    [1:0]    io_master_bresp,
  input    [3:0]    io_master_bid,

  input             io_master_arready,
  output            io_master_arvalid,
  output   [31:0]   io_master_araddr,
  output   [3:0]    io_master_arid,
  output   [7:0]    io_master_arlen,
  output   [2:0]    io_master_arsize,
  output   [1:0]    io_master_arburst,

  output            io_master_rready,
  input             io_master_rvalid,
  input    [1:0]    io_master_rresp,
  input    [31:0]   io_master_rdata,
  input             io_master_rlast,
  input    [3:0]    io_master_rid,

  // ================= AXI4 Slave（不用）=================
  output            io_slave_awready,
  input             io_slave_awvalid,
  input    [31:0]   io_slave_awaddr,
  input    [3:0]    io_slave_awid,
  input    [7:0]    io_slave_awlen,
  input    [2:0]    io_slave_awsize,
  input    [1:0]    io_slave_awburst,

  output            io_slave_wready,
  input             io_slave_wvalid,
  input    [31:0]   io_slave_wdata,
  input    [3:0]    io_slave_wstrb,
  input             io_slave_wlast,

  input             io_slave_bready,
  output            io_slave_bvalid,
  output   [1:0]    io_slave_bresp,
  output   [3:0]    io_slave_bid,

  output            io_slave_arready,
  input             io_slave_arvalid,
  input    [31:0]   io_slave_araddr,
  input    [3:0]    io_slave_arid,
  input    [7:0]    io_slave_arlen,
  input    [2:0]    io_slave_arsize,
  input    [1:0]    io_slave_arburst,

  input             io_slave_rready,
  output            io_slave_rvalid,
  output   [1:0]    io_slave_rresp,
  output   [31:0]   io_slave_rdata,
  output            io_slave_rlast,
  output   [3:0]    io_slave_rid
);

  // ================= DPI =================
  import "DPI-C" function void finish_sim();
  import "DPI-C" function void inst_trace(input int unsigned pc, input int unsigned inst, input int unsigned npc);
  import "DPI-C" function void function_trace(input int unsigned pc, input int unsigned inst, input int unsigned npc);
  import "DPI-C" function void difftest_step(input int unsigned pc, input int unsigned npc);
  import "DPI-C" function void device_update();

  // -------------------------------------------------------
  // 不用的 Slave 口：输出置 0（按要求）
  // -------------------------------------------------------
  assign io_slave_awready = 1'b0;
  assign io_slave_wready  = 1'b0;
  assign io_slave_bvalid  = 1'b0;
  assign io_slave_bresp   = 2'b0;
  assign io_slave_bid     = 4'b0;

  assign io_slave_arready = 1'b0;
  assign io_slave_rvalid  = 1'b0;
  assign io_slave_rresp   = 2'b0;
  assign io_slave_rdata   = 32'b0;
  assign io_slave_rlast   = 1'b0;
  assign io_slave_rid     = 4'b0;

  // -------------------------------------------------------
  // 参数/基础信号
  // -------------------------------------------------------
  localparam DATA_WIDTH     = 32;
  localparam ADDR_WIDTH     = 32;
  localparam OP_WIDTH       = 7;
  localparam REG_ADDR_WIDTH = 5;
  localparam FUN_WIDTH      = 3;
  localparam BASE_ADDR      = 32'h30000000;
  reg  [DATA_WIDTH-1:0] pc;
  wire [DATA_WIDTH-1:0] dnpc;         // 由 ALU 输出，必须是 wire
  wire [DATA_WIDTH-1:0] current_inst;

  initial pc = BASE_ADDR;

  wire fetch_dec_valid, fetch_dec_ready;
  wire dec_exc_valid,  dec_exc_ready;
  wire exc_wb_valid,   exc_wb_ready;

  wire wb_bresp;
  wire bresp;
  wire all_bresp = wb_bresp | bresp;

  wire w_finish_sim;

  wire [31:0] exit_code;

  // PC 更新
  always @(posedge clock or posedge reset) begin
    if (reset) 
      pc <= BASE_ADDR;
    else if (all_bresp) 
      pc <= dnpc;
    else
      pc <= pc;
  end

  // DPI 调用（你原来注释的我保留注释，只修语法）
  always @(posedge clock) begin
    if (w_finish_sim) begin
      finish_sim();
    end else begin
      if (!reset) begin
        //device_update();
        if (fetch_dec_valid) begin
         //  inst_trace(pc, current_inst, dnpc);
           //function_trace(pc, current_inst, dnpc);
        end
        if ((exc_wb_ready && exc_wb_valid) || bresp) begin
           //difftest_step(pc, dnpc);
        end
      end
    end
  end

  // -------------------------------------------------------
  // IFU <-> Arbiter：完整 AXI4 (AR/R)
  // -------------------------------------------------------
  wire        ifu_arvalid;
  wire        ifu_arready;
  wire [31:0] ifu_araddr;
  wire [3:0]  ifu_arid;
  wire [7:0]  ifu_arlen;
  wire [2:0]  ifu_arsize;
  wire [1:0]  ifu_arburst;

  wire        ifu_rready;
  wire        ifu_rvalid;
  wire [31:0] ifu_rdata;
  wire [1:0]  ifu_rresp;
  wire        ifu_rlast;
  wire [3:0]  ifu_rid;

  ysyx_24110005_ifu #(
    .DATA_WIDTH(DATA_WIDTH),
    .ADDR_WIDTH(ADDR_WIDTH)
  ) u_ifu (
    .clock             (clock),
    .reset             (reset),

    .i_pc              (pc),
    .i_ifu_dec_ready   (fetch_dec_ready),
    .o_current_inst    (current_inst),
    .o_ifu_dec_r_valid (fetch_dec_valid),
    .if_bresp          (all_bresp),

    .o_ifu_arvalid     (ifu_arvalid),
    .i_ifu_arready     (ifu_arready),
    .o_ifu_araddr      (ifu_araddr),
    .o_ifu_arid        (ifu_arid),
    .o_ifu_arlen       (ifu_arlen),
    .o_ifu_arsize      (ifu_arsize),
    .o_ifu_arburst     (ifu_arburst),

    .o_ifu_rready      (ifu_rready),
    .i_ifu_rvalid      (ifu_rvalid),
    .i_ifu_rdata       (ifu_rdata),
    .i_ifu_rresp       (ifu_rresp),
    .i_ifu_rlast       (ifu_rlast),
    .i_ifu_rid         (ifu_rid)
  );

  // -------------------------------------------------------
  // LSU <-> Arbiter：完整 AXI4 (AR/R + AW/W/B)
  // -------------------------------------------------------
  wire  [7:0] lsu_wmask;
  wire        lsu_arvalid;
  wire        lsu_arready;
  wire [31:0] lsu_araddr;
  wire [3:0]  lsu_arid;
  wire [7:0]  lsu_arlen;
  wire [2:0]  lsu_arsize;
  wire [1:0]  lsu_arburst;

  wire        lsu_rready;
  wire        lsu_rvalid;
  wire [31:0] lsu_rdata;
  wire [1:0]  lsu_rresp;
  wire        lsu_rlast;
  wire [3:0]  lsu_rid;

  wire        lsu_awvalid;
  wire        lsu_awready;
  wire [31:0] lsu_awaddr;
  wire [3:0]  lsu_awid;
  wire [7:0]  lsu_awlen;
  wire [2:0]  lsu_awsize;
  wire [1:0]  lsu_awburst;

  wire        lsu_wvalid;
  wire        lsu_wready;
  wire [31:0] lsu_wdata;
  wire [3:0]  lsu_wstrb;
  wire        lsu_wlast;

  wire        lsu_bready;
  wire        lsu_bvalid;
  wire [1:0]  lsu_bresp;
  wire [3:0]  lsu_bid;

  // Decoder/ALU/RF 信号（你原样）
  wire [FUN_WIDTH-1:0]        fun;
  wire [OP_WIDTH-1:0]         opcode;
  wire [REG_ADDR_WIDTH-1:0]   waddr, raddr1, raddr2;
  wire [DATA_WIDTH-1:0]       imm;
  wire [DATA_WIDTH-1:0]       src1, src2, w_data;
  wire                        wen_ret_and_j;
  wire                        wen;
  
  wire [FUN_WIDTH-1:0]        fun_ex;
  wire [OP_WIDTH-1:0]         opcode_ex;
  wire [DATA_WIDTH-1:0]       imm_ex;
  wire [DATA_WIDTH-1:0]       src1_ex, src2_ex;

  wire [DATA_WIDTH-1:0]       lsu_ex_rdata;
  wire                        lsu_ex_r_valid;

  wire lsu_ex_w_valid;
  wire lsu_ex_w_ready;
  wire lsu_dec_ar_valid;
  wire lsu_dec_ar_ready;

  ysyx_24110005_lsu #(
    .DATA_WIDTH(DATA_WIDTH),
    .ADDR_WIDTH(ADDR_WIDTH)
  ) u_lsu (
    .clock              (clock),
    .reset              (reset),

    .i_src1             (src1),
    .i_src2             (src2),
    .i_imm              (imm),
    .i_fun              (fun),
    .i_opcode           (opcode),
    .o_lsu_wmask        (lsu_wmask), 

    .i_lsu_dec_ar_valid (lsu_dec_ar_valid),
    .o_lsu_dec_ar_ready (lsu_dec_ar_ready),
    .i_exc_wb_ready     (exc_wb_ready),
    .i_lsu_ex_w_valid   (lsu_ex_w_valid),
    .o_lsu_ex_w_ready   (lsu_ex_w_ready),
    .o_lsu_rvalid      (lsu_ex_r_valid),
    .o_r_data           (lsu_ex_rdata),

    .o_lsu_arvalid      (lsu_arvalid),
    .i_lsu_arready      (lsu_arready),
    .o_lsu_araddr       (lsu_araddr),
    .o_lsu_arid         (lsu_arid),
    .o_lsu_arlen        (lsu_arlen),
    .o_lsu_arsize       (lsu_arsize),
    .o_lsu_arburst      (lsu_arburst),

    .o_lsu_rready       (lsu_rready),
    .i_lsu_rvalid       (lsu_rvalid),
    .i_lsu_rdata        (lsu_rdata),
    .i_lsu_rresp        (lsu_rresp),
    .i_lsu_rlast        (lsu_rlast),
    .i_lsu_rid          (lsu_rid),

    .o_lsu_awvalid      (lsu_awvalid),
    .i_lsu_awready      (lsu_awready),
    .o_lsu_awaddr       (lsu_awaddr),
    .o_lsu_awid         (lsu_awid),
    .o_lsu_awlen        (lsu_awlen),
    .o_lsu_awsize       (lsu_awsize),
    .o_lsu_awburst      (lsu_awburst),

    .o_lsu_wvalid       (lsu_wvalid),
    .i_lsu_wready       (lsu_wready),
    .o_lsu_wdata        (lsu_wdata),
    .o_lsu_wstrb        (lsu_wstrb),
    .o_lsu_wlast        (lsu_wlast),

    .o_lsu_bready       (lsu_bready),
    .i_lsu_bvalid       (lsu_bvalid),
    .i_lsu_bresp        (lsu_bresp),
    .i_lsu_bid          (lsu_bid)
  );

  // -------------------------------------------------------
  // Arbiter 输出：一套完整 AXI4 master -> xb_*
  // -------------------------------------------------------
  wire        xb_arvalid;
  wire        xb_arready;
  wire [31:0] xb_araddr;
  wire [3:0]  xb_arid;
  wire [7:0]  xb_arlen;
  wire [2:0]  xb_arsize;
  wire [1:0]  xb_arburst;

  wire        xb_rready;
  wire        xb_rvalid;
  wire [31:0] xb_rdata;
  wire [1:0]  xb_rresp;
  wire        xb_rlast;
  wire [3:0]  xb_rid;

  wire        xb_awvalid;
  wire        xb_awready;
  wire [31:0] xb_awaddr;
  wire [3:0]  xb_awid;
  wire [7:0]  xb_awlen;
  wire [2:0]  xb_awsize;
  wire [1:0]  xb_awburst;

  wire        xb_wvalid;
  wire        xb_wready;
  wire [31:0] xb_wdata;
  wire [3:0]  xb_wstrb;
  wire        xb_wlast;

  wire        xb_bready;
  wire        xb_bvalid;
  wire [1:0]  xb_bresp;
  wire [3:0]  xb_bid;

  ysyx_24110005_Arbiter #(
    .DATA_WIDTH(DATA_WIDTH),
    .ADDR_WIDTH(ADDR_WIDTH)
  ) u_arbiter (
    .clock(clock),
    .reset(reset),

    .ifu_arvalid (ifu_arvalid),
    .ifu_arready (ifu_arready),
    .ifu_araddr  (ifu_araddr),
    .ifu_arid    (ifu_arid),
    .ifu_arlen   (ifu_arlen),
    .ifu_arsize  (ifu_arsize),
    .ifu_arburst (ifu_arburst),

    .ifu_rready  (ifu_rready),
    .ifu_rvalid  (ifu_rvalid),
    .ifu_rdata   (ifu_rdata),
    .ifu_rresp   (ifu_rresp),
    .ifu_rlast   (ifu_rlast),
    .ifu_rid     (ifu_rid),

    .lsu_arvalid (lsu_arvalid),
    .lsu_arready (lsu_arready),
    .lsu_araddr  (lsu_araddr),
    .lsu_arid    (lsu_arid),
    .lsu_arlen   (lsu_arlen),
    .lsu_arsize  (lsu_arsize),
    .lsu_arburst (lsu_arburst),

    .lsu_rready  (lsu_rready),
    .lsu_rvalid  (lsu_rvalid),
    .lsu_rdata   (lsu_rdata),
    .lsu_rresp   (lsu_rresp),
    .lsu_rlast   (lsu_rlast),
    .lsu_rid     (lsu_rid),

    .lsu_awvalid (lsu_awvalid),
    .lsu_awready (lsu_awready),
    .lsu_awaddr  (lsu_awaddr),
    .lsu_awid    (lsu_awid),
    .lsu_awlen   (lsu_awlen),
    .lsu_awsize  (lsu_awsize),
    .lsu_awburst (lsu_awburst),

    .lsu_wvalid  (lsu_wvalid),
    .lsu_wready  (lsu_wready),
    .lsu_wdata   (lsu_wdata),
    .lsu_wstrb   (lsu_wstrb),
    .lsu_wlast   (lsu_wlast),

    .lsu_bready  (lsu_bready),
    .lsu_bvalid  (lsu_bvalid),
    .lsu_bresp   (lsu_bresp),
    .lsu_bid     (lsu_bid),

    .m_arvalid   (xb_arvalid),
    .m_arready   (xb_arready),
    .m_araddr    (xb_araddr),
    .m_arid      (xb_arid),
    .m_arlen     (xb_arlen),
    .m_arsize    (xb_arsize),
    .m_arburst   (xb_arburst),

    .m_rready    (xb_rready),
    .m_rvalid    (xb_rvalid),
    .m_rdata     (xb_rdata),
    .m_rresp     (xb_rresp),
    .m_rlast     (xb_rlast),
    .m_rid       (xb_rid),

    .m_awvalid   (xb_awvalid),
    .m_awready   (xb_awready),
    .m_awaddr    (xb_awaddr),
    .m_awid      (xb_awid),
    .m_awlen     (xb_awlen),
    .m_awsize    (xb_awsize),
    .m_awburst   (xb_awburst),

    .m_wvalid    (xb_wvalid),
    .m_wready    (xb_wready),
    .m_wdata     (xb_wdata),
    .m_wstrb     (xb_wstrb),
    .m_wlast     (xb_wlast),

    .m_bready    (xb_bready),
    .m_bvalid    (xb_bvalid),
    .m_bresp     (xb_bresp),
    .m_bid       (xb_bid)

   // .o_bresp_done(bresp)
  );

  // -------------------------------------------------------
  // XBAR：xb_* -> soc_* + clint_*
  // -------------------------------------------------------
  wire        soc_arvalid;
  wire        soc_arready;
  wire [31:0] soc_araddr;
  wire [3:0]  soc_arid;
  wire [7:0]  soc_arlen;
  wire [2:0]  soc_arsize;
  wire [1:0]  soc_arburst;

  wire        soc_rready;
  wire        soc_rvalid;
  wire [31:0] soc_rdata;
  wire [1:0]  soc_rresp;
  wire        soc_rlast;
  wire [3:0]  soc_rid;

  wire        soc_awvalid;
  wire        soc_awready;
  wire [31:0] soc_awaddr;
  wire [3:0]  soc_awid;
  wire [7:0]  soc_awlen;
  wire [2:0]  soc_awsize;
  wire [1:0]  soc_awburst;

  wire        soc_wvalid;
  wire        soc_wready;
  wire [31:0] soc_wdata;
  wire [3:0]  soc_wstrb;
  wire        soc_wlast;

  wire        soc_bready;
  wire        soc_bvalid;
  wire [1:0]  soc_bresp;
  wire [3:0]  soc_bid;

  wire        clint_arvalid;
  wire        clint_arready;
  wire [31:0] clint_araddr_axi;
  wire [3:0]  clint_arid_axi;
  wire [7:0]  clint_arlen_axi;
  wire [2:0]  clint_arsize_axi;
  wire [1:0]  clint_arburst_axi;

  wire        clint_rready_axi;
  wire        clint_rvalid_axi;
  wire [31:0] clint_rdata_axi;
  wire [1:0]  clint_rresp_axi;
  wire        clint_rlast_axi;
  wire [3:0]  clint_rid_axi;

  wire        clint_awvalid;
  wire        clint_awready;
  wire [31:0] clint_awaddr_axi;
  wire [3:0]  clint_awid_axi;
  wire [7:0]  clint_awlen_axi;
  wire [2:0]  clint_awsize_axi;
  wire [1:0]  clint_awburst_axi;

  wire        clint_wvalid;
  wire        clint_wready;
  wire [31:0] clint_wdata_axi;
  wire [3:0]  clint_wstrb_axi;
  wire        clint_wlast_axi;

  wire        clint_bready_axi;
  wire        clint_bvalid_axi;
  wire [1:0]  clint_bresp_axi;
  wire [3:0]  clint_bid_axi;

  ysyx_24110005_Xbar #(
    .ADDR_WIDTH(ADDR_WIDTH),
    .DATA_WIDTH(DATA_WIDTH)
  ) u_xbar (
    .clock(clock),
    .reset(reset),

    .xb_ar_valid  (xb_arvalid),
    .xb_ar_ready  (xb_arready),
    .xb_ar_addr   (xb_araddr),
    .xb_ar_id     (xb_arid),
    .xb_ar_len    (xb_arlen),
    .xb_ar_size   (xb_arsize),
    .xb_ar_burst  (xb_arburst),

    .xb_r_valid   (xb_rvalid),
    .xb_r_ready   (xb_rready),
    .xb_r_data    (xb_rdata),
    .xb_r_resp    (xb_rresp),
    .xb_r_last    (xb_rlast),
    .xb_r_id      (xb_rid),

    .xb_aw_valid  (xb_awvalid),
    .xb_aw_ready  (xb_awready),
    .xb_aw_addr   (xb_awaddr),
    .xb_aw_id     (xb_awid),
    .xb_aw_len    (xb_awlen),
    .xb_aw_size   (xb_awsize),
    .xb_aw_burst  (xb_awburst),

    .xb_w_valid   (xb_wvalid),
    .xb_w_ready   (xb_wready),
    .xb_w_data    (xb_wdata),
    .xb_w_strb    (xb_wstrb),
    .xb_w_last    (xb_wlast),

    .xb_b_valid   (xb_bvalid),
    .xb_b_ready   (xb_bready),
    .xb_b_resp    (xb_bresp),
    .xb_b_id      (xb_bid),

    // 下面这些端口名必须是 soc_arvalid / soc_arready / ... 这一套
    .soc_arvalid (soc_arvalid),
    .soc_arready (soc_arready),
    .soc_araddr  (soc_araddr),
    .soc_arid    (soc_arid),
    .soc_arlen   (soc_arlen),
    .soc_arsize  (soc_arsize),
    .soc_arburst (soc_arburst),

    .soc_rvalid  (soc_rvalid),
    .soc_rready  (soc_rready),
    .soc_rdata   (soc_rdata),
    .soc_rresp   (soc_rresp),
    .soc_rlast   (soc_rlast),
    .soc_rid     (soc_rid),

    .soc_awvalid (soc_awvalid),
    .soc_awready (soc_awready),
    .soc_awaddr  (soc_awaddr),
    .soc_awid    (soc_awid),
    .soc_awlen   (soc_awlen),
    .soc_awsize  (soc_awsize),
    .soc_awburst (soc_awburst),

    .soc_wvalid  (soc_wvalid),
    .soc_wready  (soc_wready),
    .soc_wdata   (soc_wdata),
    .soc_wstrb   (soc_wstrb),
    .soc_wlast   (soc_wlast),

    .soc_bvalid  (soc_bvalid),
    .soc_bready  (soc_bready),
    .soc_bresp   (soc_bresp),
    .soc_bid     (soc_bid),

    .clint_arvalid (clint_arvalid),
    .clint_arready (clint_arready),
    .clint_araddr  (clint_araddr_axi),   // 你顶层变量叫什么就接什么
    .clint_arid    (clint_arid_axi),
    .clint_arlen   (clint_arlen_axi),
    .clint_arsize  (clint_arsize_axi),
    .clint_arburst (clint_arburst_axi),

    .clint_rvalid  (clint_rvalid_axi),
    .clint_rready  (clint_rready_axi),
    .clint_rdata   (clint_rdata_axi),
    .clint_rresp   (clint_rresp_axi),
    .clint_rlast   (clint_rlast_axi),
    .clint_rid     (clint_rid_axi),

    .clint_awvalid (clint_awvalid),
    .clint_awready (clint_awready),
    .clint_awaddr  (clint_awaddr_axi),
    .clint_awid    (clint_awid_axi),
    .clint_awlen   (clint_awlen_axi),
    .clint_awsize  (clint_awsize_axi),
    .clint_awburst (clint_awburst_axi),

    .clint_wvalid  (clint_wvalid),
    .clint_wready  (clint_wready),
    .clint_wdata   (clint_wdata_axi),
    .clint_wstrb   (clint_wstrb_axi),
    .clint_wlast   (clint_wlast_axi),

    .clint_bvalid  (clint_bvalid_axi),
    .clint_bready  (clint_bready_axi),
    .clint_bresp   (clint_bresp_axi),
    .clint_bid     (clint_bid_axi)

  );

  // -------------------------------------------------------
  // soc_* <-> 顶层 io_master_* 直连
  // -------------------------------------------------------
  assign io_master_arvalid = soc_arvalid;
  assign soc_arready       = io_master_arready;
  assign io_master_araddr  = soc_araddr;
  assign io_master_arid    = soc_arid;
  assign io_master_arlen   = soc_arlen;
  assign io_master_arsize  = soc_arsize;
  assign io_master_arburst = soc_arburst;

  assign soc_rvalid        = io_master_rvalid;
  assign io_master_rready  = soc_rready;
  assign soc_rdata         = io_master_rdata;
  assign soc_rresp         = io_master_rresp;
  assign soc_rlast         = io_master_rlast;
  assign soc_rid           = io_master_rid;

  assign io_master_awvalid = soc_awvalid;
  assign soc_awready       = io_master_awready;
  assign io_master_awaddr  = soc_awaddr;
  assign io_master_awid    = soc_awid;
  assign io_master_awlen   = soc_awlen;
  assign io_master_awsize  = soc_awsize;
  assign io_master_awburst = soc_awburst;

  assign io_master_wvalid  = soc_wvalid;
  assign soc_wready        = io_master_wready;
  assign io_master_wdata   = soc_wdata;
  assign io_master_wstrb   = soc_wstrb;
  assign io_master_wlast   = soc_wlast;

  assign soc_bvalid        = io_master_bvalid;
  assign io_master_bready  = soc_bready;
  assign soc_bresp         = io_master_bresp;
  assign soc_bid           = io_master_bid;


  assign bresp = soc_bvalid&soc_bready;

  // -------------------------------------------------------
  // 内部 CLINT（你如果已改成完整 AXI4 就直接用）
  // -------------------------------------------------------
  ysyx_24110005_Clint u_clint (
    .clock(clock),
    .reset(reset),

    .s_arvalid (clint_arvalid),
    .s_arready (clint_arready),
    .s_araddr  (clint_araddr_axi),
    .s_arid    (clint_arid_axi),
    .s_arlen   (clint_arlen_axi),
    .s_arsize  (clint_arsize_axi),
    .s_arburst (clint_arburst_axi),

    .s_rvalid  (clint_rvalid_axi),
    .s_rready  (clint_rready_axi),
    .s_rdata   (clint_rdata_axi),
    .s_rresp   (clint_rresp_axi),
    .s_rlast   (clint_rlast_axi),
    .s_rid     (clint_rid_axi),

    .s_awvalid (clint_awvalid),
    .s_awready (clint_awready),
    .s_awaddr  (clint_awaddr_axi),
    .s_awid    (clint_awid_axi),
    .s_awlen   (clint_awlen_axi),
    .s_awsize  (clint_awsize_axi),
    .s_awburst (clint_awburst_axi),

    .s_wvalid  (clint_wvalid),
    .s_wready  (clint_wready),
    .s_wdata   (clint_wdata_axi),
    .s_wstrb   (clint_wstrb_axi),
    .s_wlast   (clint_wlast_axi),

    .s_bvalid  (clint_bvalid_axi),
    .s_bready  (clint_bready_axi),
    .s_bresp   (clint_bresp_axi),
    .s_bid     (clint_bid_axi)
  );

  // -------------------------------------------------------
  // Decoder / ALU / RF（你原来逻辑，修语法即可）
  // -------------------------------------------------------
  ysyx_24110005_Decoder #(
    .DATA_WIDTH(DATA_WIDTH),
    .OP_WIDTH(OP_WIDTH),
    .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
    .FUN_WIDTH(FUN_WIDTH)
  ) u_decoder (
    .clock(clock),
    .reset(reset),
    .inst(current_inst),

    .fetch_dec_valid(fetch_dec_valid),
    .fetch_dec_ready(fetch_dec_ready),

    .r_addr1(raddr1),
    .r_addr2(raddr2),

    .dec_exc_waddr (waddr),
    .dec_exc_opcode(opcode),
    .dec_exc_imm   (imm),
    .dec_exc_fun   (fun),

    .mem_ar_valid  (lsu_dec_ar_valid),
    .mem_ar_ready  (lsu_dec_ar_ready),

    .dec_exc_valid (dec_exc_valid),
    .dec_exc_ready (dec_exc_ready)
  );

  ysyx_24110005_Alu #(
    .DATA_WIDTH(DATA_WIDTH),
    .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
    .FUN_WIDTH(FUN_WIDTH),
    .OP_WIDTH(OP_WIDTH)
  ) u_alu (
    .clock(clock),
    .reset(reset),

    .dec_exc_valid(dec_exc_valid),
    .dec_exc_ready(dec_exc_ready),

    .w_addr(waddr),
    .pc(pc),
    .opcode(opcode),
    .fun(fun),
    .src1(src1),
    .src2(src2),
    .imm(imm),


    .dnpc(dnpc),
    .w_data(w_data),
    .wen(wen_ret_and_j),
    .lsu_ex_r_valid(lsu_ex_r_valid),
    .mem_rdata(lsu_ex_rdata),
    .lsu_ex_w_valid(lsu_ex_w_valid),
    .lsu_ex_w_ready(lsu_ex_w_ready),

    .bresp(bresp),
    .exc_wb_ready(exc_wb_ready),
    .exc_wb_valid(exc_wb_valid),
    .w_finish_sim(w_finish_sim)
  );

  ysyx_24110005_RegisterFile #(
    .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
    .DATA_WIDTH(DATA_WIDTH)
  ) u_rf (
    .clock(clock),
    .reset(reset),

    .wen(wen),
    .w_data(w_data),
    .w_addr(waddr),

    .r_data1(src1),
    .r_addr1(raddr1),
    .r_data2(src2),
    .r_addr2(raddr2),

    .exc_wb_ready(exc_wb_ready),
    .exc_wb_valid(exc_wb_valid),

    .wb_bresp(wb_bresp),
    .exit_code(exit_code)
  );

  // 你原来的写回使能表达式：我只补了运算符，语义仍按你写的
  assign wen = exc_wb_valid && wen_ret_and_j &&
               ( (waddr != 0) || ((waddr == 0) && (imm != 0)) );

endmodule
