module ysyx_24110005_ifu #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32
)(
    input                    clock,
    input                    reset,

    input                    i_fetch_allow,
    input                    i_id_ready,
    input   [ADDR_WIDTH-1:0] i_fetch_pc,
    input                    i_flush,

    output                   o_inst_valid,
    output  [DATA_WIDTH-1:0] o_inst,
    output  [ADDR_WIDTH-1:0] o_inst_pc,

    output                   o_ifu_arvalid,
    input                    i_ifu_arready,
    output  [ADDR_WIDTH-1:0] o_ifu_araddr,
    output  [3:0]            o_ifu_arid,
    output  [7:0]            o_ifu_arlen,
    output  [2:0]            o_ifu_arsize,
    output  [1:0]            o_ifu_arburst,

    output                   o_ifu_rready,
    input                    i_ifu_rvalid,
    input   [DATA_WIDTH-1:0] i_ifu_rdata,
    input                    i_ifu_rlast
);

    // ============================================================
    // AR request register
    // ============================================================
    reg                  arvalid_r;
    reg [ADDR_WIDTH-1:0] araddr_r;

    // ============================================================
    // outstanding request
    // ============================================================
    reg                  req_outstanding;
    reg [ADDR_WIDTH-1:0] req_pc;

    // ============================================================
    // one-entry instruction buffer
    // ============================================================
    reg                  buf_valid;
    reg [DATA_WIDTH-1:0] buf_inst;
    reg [ADDR_WIDTH-1:0] buf_pc;

    // ============================================================
    // handshake
    // ============================================================
    wire ar_fire;
    wire r_fire;
    wire id_fire;

    assign ar_fire = o_ifu_arvalid && i_ifu_arready;
    assign r_fire  = o_ifu_rready  && i_ifu_rvalid && i_ifu_rlast;
    assign id_fire = buf_valid && i_id_ready;

    // ============================================================
    // start fetch
    //
    // 注意：
    //   flush 当拍不发请求；
    //   flush 后下一拍 fetch_pc 已经变成 redirect_pc，
    //   此时允许重新取指。
    // ============================================================
    wire start_fetch;

    assign start_fetch =
        i_fetch_allow    &&
        !i_flush         &&
        !arvalid_r       &&
        !req_outstanding &&
        !buf_valid;

    // ============================================================
    // ARVALID / ARADDR
    //
    // ARADDR 锁存，避免 ARVALID=1 && ARREADY=0 时地址变化。
    // ============================================================
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            arvalid_r <= 1'b0;
        end else if (i_flush) begin
            // flush 直接取消尚未握手的 AR 请求
            arvalid_r <= 1'b0;
        end else if (start_fetch) begin
            arvalid_r <= 1'b1;
        end else if (ar_fire) begin
            arvalid_r <= 1'b0;
        end
    end

    always @(posedge clock or posedge reset) begin
        if (reset) begin
            araddr_r <= {ADDR_WIDTH{1'b0}};
        end else if (start_fetch) begin
            araddr_r <= i_fetch_pc;
        end
    end

    // ============================================================
    // req_outstanding
    //
    // 关键修复：
    //   flush 时直接清掉 outstanding。
    //
    // 原因：
    //   你当前 ICache flush 后可能不会返回旧请求的 rvalid，
    //   所以 IFU 不能继续等旧请求 r_fire。
    // ============================================================
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            req_outstanding <= 1'b0;
        end else if (i_flush) begin
            req_outstanding <= 1'b0;
        end else if (ar_fire) begin
            req_outstanding <= 1'b1;
        end else if (r_fire) begin
            req_outstanding <= 1'b0;
        end
    end

    always @(posedge clock or posedge reset) begin
        if (reset) begin
            req_pc <= {ADDR_WIDTH{1'b0}};
        end else if (ar_fire) begin
            req_pc <= araddr_r;
        end
    end

    // ============================================================
    // instruction buffer valid
    //
    // flush 时清空 buffer。
    // 如果 flush 后 ICache 仍然返回旧数据，因为 i_flush 优先级更高，
    // 本拍不会接收为有效指令。
    // ============================================================
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            buf_valid <= 1'b0;
        end else if (i_flush) begin
            buf_valid <= 1'b0;
        end else if (r_fire) begin
            buf_valid <= 1'b1;
        end else if (id_fire) begin
            buf_valid <= 1'b0;
        end
    end

    always @(posedge clock or posedge reset) begin
        if (reset) begin
            buf_inst <= {DATA_WIDTH{1'b0}};
        end else if (!i_flush && r_fire) begin
            buf_inst <= i_ifu_rdata;
        end
    end

    always @(posedge clock or posedge reset) begin
        if (reset) begin
            buf_pc <= {ADDR_WIDTH{1'b0}};
        end else if (!i_flush && r_fire) begin
            buf_pc <= req_pc;
        end
    end

    // ============================================================
    // AXI AR
    //
    // 这里 o_ifu_arvalid 再额外与 !i_flush 相与，
    // 防止 flush 当拍 ICache 接收旧路径 AR。
    // ============================================================
    assign o_ifu_arvalid = arvalid_r && !i_flush;
    assign o_ifu_araddr  = araddr_r;

    assign o_ifu_arid    = 4'd0;
    assign o_ifu_arlen   = 8'd0;
    assign o_ifu_arsize  = 3'd2;
    assign o_ifu_arburst = 2'b01;

    // ============================================================
    // AXI R
    //
    // 始终 ready。
    // 如果 flush 期间旧数据返回，会被上面的 buffer 逻辑丢掉。
    // ============================================================
    assign o_ifu_rready = 1'b1;

    // ============================================================
    // IFU -> ID
    // ============================================================
    assign o_inst_valid = buf_valid;
    assign o_inst       = buf_inst;
    assign o_inst_pc    = buf_pc;

endmodule