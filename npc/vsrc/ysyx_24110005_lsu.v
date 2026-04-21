module ysyx_24110005_lsu #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32
)(
    input                   clock,
    input                   reset,

    input  [DATA_WIDTH-1:0] i_src1,
    input  [DATA_WIDTH-1:0] i_src2,
    input  [DATA_WIDTH-1:0] i_imm,
    input  [2:0]            i_fun,
    input  [6:0]            i_opcode,

    input                   i_lsu_dec_ar_valid,
    input                   i_exc_wb_ready,
    input                   i_lsu_ex_w_valid,
    input                   i_store_capture_valid,

    output                  o_lsu_arvalid,
    input                   i_lsu_arready,
    output [ADDR_WIDTH-1:0] o_lsu_araddr,
    output [3:0]            o_lsu_arid,
    output [7:0]            o_lsu_arlen,
    output [2:0]            o_lsu_arsize,
    output [1:0]            o_lsu_arburst,

    output                  o_lsu_rready,
    input                   i_lsu_rvalid,
    input  [DATA_WIDTH-1:0] i_lsu_rdata,
    input  [1:0]            i_lsu_rresp,
    input                   i_lsu_rlast,
    input  [3:0]            i_lsu_rid,

    output                  o_lsu_awvalid,
    input                   i_lsu_awready,
    output [ADDR_WIDTH-1:0] o_lsu_awaddr,
    output [3:0]            o_lsu_awid,
    output [7:0]            o_lsu_awlen,
    output [2:0]            o_lsu_awsize,
    output [1:0]            o_lsu_awburst,

    output                  o_lsu_wvalid,
    input                   i_lsu_wready,
    output [DATA_WIDTH-1:0] o_lsu_wdata,
    output [3:0]            o_lsu_wstrb,
    output                  o_lsu_wlast,

    output                  o_lsu_bready,
    input                   i_lsu_bvalid,
    input  [1:0]            i_lsu_bresp,
    input  [3:0]            i_lsu_bid,

    output [DATA_WIDTH-1:0] o_r_data,
    output                  o_lsu_rvalid,
    output                  o_lsu_dec_ar_ready,
    output                  o_lsu_ex_w_ready,
    output [7:0]            o_lsu_wmask,

    output                  o_lsu_dec_exc_valid,
    output [4:0]            o_lsu_dec_exc_code,
    output [31:0]           o_lsu_dec_exc_tval,

    output                  o_lsu_resp_exc_valid,
    output [4:0]            o_lsu_resp_exc_code,
    output [31:0]           o_lsu_resp_exc_tval
);

    localparam TYPE_I0 = 7'b0000011;
    localparam TYPE_S  = 7'b0100011;

    localparam EXC_LOAD_MISALIGN  = 5'd4;
    localparam EXC_LOAD_ACCESS    = 5'd5;
    localparam EXC_STORE_MISALIGN = 5'd6;
    localparam EXC_STORE_ACCESS   = 5'd7;

    wire [ADDR_WIDTH-1:0] cur_mem_addr   = i_src1 + i_imm;
    wire [1:0]            cur_mem_offset = cur_mem_addr[1:0];

    wire [7:0] cur_wmask = i_fun[0] ? 8'b0000_0011 :
                          (i_fun[1] ? 8'b0000_1111 :
                                      8'b0000_0001);

    wire [3:0] cur_wstrb = i_fun[0] ? (4'b0011 << cur_mem_offset) :
                          (i_fun[1] ? (4'b1111 << cur_mem_offset) :
                                      (4'b0001 << cur_mem_offset));

    wire [DATA_WIDTH-1:0] cur_wdata =
        i_fun[0] ? ({16'b0, i_src2[15:0]} << (8 * cur_mem_offset)) :
        i_fun[1] ? i_src2 :
                   ({24'b0, i_src2[7:0]} << (8 * cur_mem_offset));

    assign o_lsu_wmask = cur_wmask;

    wire is_half = (i_fun == 3'b001) || (i_fun == 3'b101);
    wire is_word = (i_fun == 3'b010);

    wire addr_misalign =
        (is_half && cur_mem_addr[0]) ||
        (is_word && (cur_mem_addr[1:0] != 2'b00));

    // 关键修复：store 异常判定不能依赖 i_store_capture_valid
    wire load_addr_misalign  = (i_opcode == TYPE_I0) && i_lsu_dec_ar_valid && addr_misalign;
    wire store_addr_misalign = (i_opcode == TYPE_S)  && addr_misalign;

    assign o_lsu_dec_exc_valid = load_addr_misalign | store_addr_misalign;
    assign o_lsu_dec_exc_code  = load_addr_misalign  ? EXC_LOAD_MISALIGN  :
                                 store_addr_misalign ? EXC_STORE_MISALIGN :
                                                        5'd0;
    assign o_lsu_dec_exc_tval  = cur_mem_addr;

    reg                  load_pending;
    reg [1:0]            load_offset_r;
    reg [2:0]            load_fun_r;
    reg [DATA_WIDTH-1:0] r_lsu_data;

    reg                  store_buf_valid;
    reg [ADDR_WIDTH-1:0] store_addr_r;
    reg [DATA_WIDTH-1:0] store_data_r;
    reg [3:0]            store_wstrb_r;

    wire ar_fire = o_lsu_arvalid && i_lsu_arready;
    wire r_fire  = i_lsu_rvalid && o_lsu_rready && i_lsu_rlast;
    wire b_fire  = i_lsu_bvalid && o_lsu_bready;

    always @(posedge clock or posedge reset) begin
        if (reset) begin
            load_pending    <= 1'b0;
            load_offset_r   <= 2'b00;
            load_fun_r      <= 3'b000;
            r_lsu_data      <= {DATA_WIDTH{1'b0}};

            store_buf_valid <= 1'b0;
            store_addr_r    <= {ADDR_WIDTH{1'b0}};
            store_data_r    <= {DATA_WIDTH{1'b0}};
            store_wstrb_r   <= 4'b0000;
        end else begin
            if (ar_fire) begin
                load_pending  <= 1'b1;
                load_offset_r <= cur_mem_offset;
                load_fun_r    <= i_fun;
            end

            if (r_fire) begin
                load_pending <= 1'b0;
                case (load_fun_r)
                    3'b000: r_lsu_data <= (i_lsu_rdata >> (8 * load_offset_r)) & 32'h0000_00ff;
                    3'b001: r_lsu_data <= (i_lsu_rdata >> (8 * load_offset_r)) & 32'h0000_ffff;
                    3'b010: r_lsu_data <= i_lsu_rdata;
                    3'b100: r_lsu_data <= (i_lsu_rdata >> (8 * load_offset_r)) & 32'h0000_00ff;
                    3'b101: r_lsu_data <= (i_lsu_rdata >> (8 * load_offset_r)) & 32'h0000_ffff;
                    default: r_lsu_data <= i_lsu_rdata;
                endcase
            end

            if (i_store_capture_valid) begin
                store_buf_valid <= 1'b1;
                store_addr_r    <= cur_mem_addr;
                store_data_r    <= cur_wdata;
                store_wstrb_r   <= cur_wstrb;
            end

            if (b_fire) begin
                store_buf_valid <= 1'b0;
            end
        end
    end

    assign o_lsu_arvalid = i_lsu_dec_ar_valid && !load_addr_misalign;
    assign o_lsu_araddr  = cur_mem_addr;
    assign o_lsu_arid    = 4'b0;
    assign o_lsu_arlen   = 8'b0;
    assign o_lsu_arsize  = 3'b010;
    assign o_lsu_arburst = 2'b01;

    assign o_lsu_dec_ar_ready = i_lsu_arready && !load_pending;

    assign o_lsu_rready = load_pending && i_exc_wb_ready;
    assign o_lsu_rvalid = r_fire;
    assign o_r_data     = r_lsu_data;

    assign o_lsu_awvalid = i_lsu_ex_w_valid && store_buf_valid;
    assign o_lsu_awaddr  = store_addr_r;
    assign o_lsu_awid    = 4'b0;
    assign o_lsu_awlen   = 8'b0;
    assign o_lsu_awsize  = 3'b010;
    assign o_lsu_awburst = 2'b01;

    assign o_lsu_wvalid = i_lsu_ex_w_valid && store_buf_valid;
    assign o_lsu_wdata  = store_data_r;
    assign o_lsu_wstrb  = store_wstrb_r;
    assign o_lsu_wlast  = 1'b1;

    assign o_lsu_ex_w_ready = i_lsu_awready & i_lsu_wready;
    assign o_lsu_bready     = 1'b1;

    assign o_lsu_resp_exc_valid =
        (r_fire && (i_lsu_rresp != 2'b00)) ||
        (b_fire && (i_lsu_bresp != 2'b00));

    assign o_lsu_resp_exc_code =
        (r_fire && (i_lsu_rresp != 2'b00)) ? EXC_LOAD_ACCESS  :
        (b_fire && (i_lsu_bresp != 2'b00)) ? EXC_STORE_ACCESS :
                                             5'd0;

    assign o_lsu_resp_exc_tval =
        (r_fire && (i_lsu_rresp != 2'b00)) ? cur_mem_addr :
        (b_fire && (i_lsu_bresp != 2'b00)) ? store_addr_r :
                                             32'b0;

endmodule