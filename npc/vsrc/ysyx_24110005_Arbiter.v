module ysyx_24110005_Arbiter #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32
)(
    input  clock,
    input  reset,

    // =========================================================
    // IFU side
    // =========================================================
    input                   ifu_arvalid,
    output                  ifu_arready,
    input  [ADDR_WIDTH-1:0] ifu_araddr,
    input  [3:0]            ifu_arid,
    input  [7:0]            ifu_arlen,
    input  [2:0]            ifu_arsize,
    input  [1:0]            ifu_arburst,

    output                  ifu_rvalid,
    input                   ifu_rready,
    output [DATA_WIDTH-1:0] ifu_rdata,
    output [1:0]            ifu_rresp,
    output                  ifu_rlast,
    output [3:0]            ifu_rid,

    // =========================================================
    // LSU side
    // =========================================================
    input                   lsu_arvalid,
    output                  lsu_arready,
    input  [ADDR_WIDTH-1:0] lsu_araddr,
    input  [3:0]            lsu_arid,
    input  [7:0]            lsu_arlen,
    input  [2:0]            lsu_arsize,
    input  [1:0]            lsu_arburst,

    output                  lsu_rvalid,
    input                   lsu_rready,
    output [DATA_WIDTH-1:0] lsu_rdata,
    output [1:0]            lsu_rresp,
    output                  lsu_rlast,
    output [3:0]            lsu_rid,

    input                   lsu_awvalid,
    output                  lsu_awready,
    input  [ADDR_WIDTH-1:0] lsu_awaddr,
    input  [3:0]            lsu_awid,
    input  [7:0]            lsu_awlen,
    input  [2:0]            lsu_awsize,
    input  [1:0]            lsu_awburst,

    input                   lsu_wvalid,
    output                  lsu_wready,
    input  [DATA_WIDTH-1:0] lsu_wdata,
    input  [3:0]            lsu_wstrb,
    input                   lsu_wlast,

    input                   lsu_bready,
    output                  lsu_bvalid,
    output [1:0]            lsu_bresp,
    output [3:0]            lsu_bid,

    // =========================================================
    // Master side to XBAR
    // =========================================================
    output                  m_arvalid,
    input                   m_arready,
    output [ADDR_WIDTH-1:0] m_araddr,
    output [3:0]            m_arid,
    output [7:0]            m_arlen,
    output [2:0]            m_arsize,
    output [1:0]            m_arburst,

    input                   m_rvalid,
    output                  m_rready,
    input  [DATA_WIDTH-1:0] m_rdata,
    input  [1:0]            m_rresp,
    input                   m_rlast,
    input  [3:0]            m_rid,

    output                  m_awvalid,
    input                   m_awready,
    output [ADDR_WIDTH-1:0] m_awaddr,
    output [3:0]            m_awid,
    output [7:0]            m_awlen,
    output [2:0]            m_awsize,
    output [1:0]            m_awburst,

    output                  m_wvalid,
    input                   m_wready,
    output [DATA_WIDTH-1:0] m_wdata,
    output [3:0]            m_wstrb,
    output                  m_wlast,

    output                  m_bready,
    input                   m_bvalid,
    input  [1:0]            m_bresp,
    input  [3:0]            m_bid
);

    localparam IDLE    = 2'b00;
    localparam S_IFU   = 2'b01;
    localparam S_LSU_R = 2'b10;
    localparam S_LSU_W = 2'b11;

    reg [1:0] state;

    // 读通道 owner 锁：0=IFU, 1=LSU
    reg rd_busy;
    reg rd_owner;

    // 写通道锁：一条store只允许发一次AW、一次W，然后等一次B
    reg wr_busy;
    reg wr_aw_done;
    reg wr_w_done;

    // =========================================================
    // 仲裁选择
    // 规则：
    // 1) 读写不并发
    // 2) IFU读优先于LSU读
    // 3) LSU写最低优先级
    // =========================================================
    wire ifu_req_can_grant   = ifu_arvalid && !rd_busy && !wr_busy;
    wire lsu_r_req_can_grant = lsu_arvalid && !rd_busy && !wr_busy && !ifu_arvalid;
    wire lsu_w_req_can_grant = lsu_awvalid && !rd_busy && !wr_busy && !ifu_arvalid && !lsu_arvalid;

    wire choose_ifu   = ifu_req_can_grant;
    wire choose_lsu_r = lsu_r_req_can_grant;
    wire choose_lsu_w = lsu_w_req_can_grant;

    // =========================================================
    // 读通道握手
    // =========================================================
    wire ifu_ar_fire = ifu_arvalid && ifu_arready;
    wire lsu_ar_fire = lsu_arvalid && lsu_arready;
    wire m_r_fire    = m_rvalid && m_rready && m_rlast;

    // =========================================================
    // 写通道握手
    // 注意：lsu_aw_fire / lsu_w_fire 依赖下面的组合 ready/valid
    // =========================================================
    wire aw_issue_en = (!rd_busy) && ( (!wr_busy && choose_lsu_w) || (wr_busy && !wr_aw_done) );
    wire w_issue_en  = (!rd_busy) && ( (!wr_busy && choose_lsu_w) ||  wr_busy ) && !wr_w_done;
    wire b_wait_en   = wr_busy && wr_aw_done && wr_w_done;

    wire lsu_aw_fire = lsu_awvalid && lsu_awready;
    wire lsu_w_fire  = lsu_wvalid  && lsu_wready && lsu_wlast;
    wire m_b_fire    = m_bvalid && m_bready;

    // =========================================================
    // 时序状态
    // =========================================================
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            state      <= IDLE;
            rd_busy    <= 1'b0;
            rd_owner   <= 1'b0;
            wr_busy    <= 1'b0;
            wr_aw_done <= 1'b0;
            wr_w_done  <= 1'b0;
        end else begin
            // -------------------------
            // 读锁：谁AR成功，谁独占到最后一个R beat
            // -------------------------
            if (!rd_busy) begin
                if (ifu_ar_fire) begin
                    rd_busy  <= 1'b1;
                    rd_owner <= 1'b0;
                end else if (lsu_ar_fire) begin
                    rd_busy  <= 1'b1;
                    rd_owner <= 1'b1;
                end
            end else if (m_r_fire) begin
                rd_busy <= 1'b0;
            end

            // -------------------------
            // 写锁：一条store只发一次AW/W，再等一次B
            // -------------------------
            if (!wr_busy) begin
                if (choose_lsu_w) begin
                    wr_busy    <= 1'b1;
                    wr_aw_done <= lsu_aw_fire;
                    wr_w_done  <= lsu_w_fire;
                end
            end else begin
                if (!wr_aw_done && lsu_aw_fire) begin
                    wr_aw_done <= 1'b1;
                end
                if (!wr_w_done && lsu_w_fire) begin
                    wr_w_done <= 1'b1;
                end
                if (m_b_fire) begin
                    wr_busy    <= 1'b0;
                    wr_aw_done <= 1'b0;
                    wr_w_done  <= 1'b0;
                end
            end

            // -------------------------
            // 状态机仅用于调试显示
            // -------------------------
            if (wr_busy) begin
                state <= S_LSU_W;
            end else if (rd_busy) begin
                state <= (rd_owner == 1'b0) ? S_IFU : S_LSU_R;
            end else if (choose_ifu) begin
                state <= S_IFU;
            end else if (choose_lsu_r) begin
                state <= S_LSU_R;
            end else if (choose_lsu_w) begin
                state <= S_LSU_W;
            end else begin
                state <= IDLE;
            end
        end
    end

    // =========================================================
    // 读地址通道：空闲时仲裁；被授予后直到R最后一拍都不允许另一方再发AR
    // =========================================================
    assign m_arvalid = (!rd_busy) && (choose_ifu || choose_lsu_r);
    assign m_araddr  = choose_ifu   ? ifu_araddr  :
                       choose_lsu_r ? lsu_araddr  :
                       {ADDR_WIDTH{1'b0}};
    assign m_arid    = choose_ifu   ? ifu_arid    :
                       choose_lsu_r ? lsu_arid    :
                       4'b0;
    assign m_arlen   = choose_ifu   ? ifu_arlen   :
                       choose_lsu_r ? lsu_arlen   :
                       8'b0;
    assign m_arsize  = choose_ifu   ? ifu_arsize  :
                       choose_lsu_r ? lsu_arsize  :
                       3'b0;
    assign m_arburst = choose_ifu   ? ifu_arburst :
                       choose_lsu_r ? lsu_arburst :
                       2'b0;

    assign ifu_arready = (!rd_busy) && choose_ifu   && m_arready;
    assign lsu_arready = (!rd_busy) && choose_lsu_r && m_arready;

    // =========================================================
    // 读返回通道：严格按owner回给发起方
    // =========================================================
    assign ifu_rvalid = rd_busy && (rd_owner == 1'b0) && m_rvalid;
    assign ifu_rdata  = m_rdata;
    assign ifu_rresp  = m_rresp;
    assign ifu_rlast  = m_rlast;
    assign ifu_rid    = m_rid;

    assign lsu_rvalid = rd_busy && (rd_owner == 1'b1) && m_rvalid;
    assign lsu_rdata  = m_rdata;
    assign lsu_rresp  = m_rresp;
    assign lsu_rlast  = m_rlast;
    assign lsu_rid    = m_rid;

    assign m_rready = rd_busy ? ((rd_owner == 1'b0) ? ifu_rready : lsu_rready) : 1'b0;

    // =========================================================
    // 写地址通道：只在“还没发过AW”时发
    // =========================================================
    assign m_awvalid = aw_issue_en && lsu_awvalid;
    assign m_awaddr  = lsu_awaddr;
    assign m_awid    = lsu_awid;
    assign m_awlen   = lsu_awlen;
    assign m_awsize  = lsu_awsize;
    assign m_awburst = lsu_awburst;

    assign lsu_awready = aw_issue_en ? m_awready : 1'b0;

    // =========================================================
    // 写数据通道：只在“还没发过W”时发
    // 允许与AW同拍，也允许晚于AW单独握手
    // =========================================================
    assign m_wvalid = w_issue_en && lsu_wvalid;
    assign m_wdata  = lsu_wdata;
    assign m_wstrb  = lsu_wstrb;
    assign m_wlast  = lsu_wlast;

    assign lsu_wready = w_issue_en ? m_wready : 1'b0;

    // =========================================================
    // 写响应通道：仅在AW/W都完成后等待B
    // =========================================================
    assign m_bready  = b_wait_en ? lsu_bready : 1'b0;
    assign lsu_bvalid = b_wait_en ? m_bvalid : 1'b0;
    assign lsu_bresp  = m_bresp;
    assign lsu_bid    = m_bid;

endmodule