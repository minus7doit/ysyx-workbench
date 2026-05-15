module ysyx_24110005_lsu #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32
)(
    input                   clock,
    input                   reset,

    // ============================================================
    // MEM stage interface
    // ============================================================
    input                   i_mem_valid,
    input                   i_mem_ready,

    input                   i_mem_read,
    input                   i_mem_write,
    input  [ADDR_WIDTH-1:0] i_mem_addr,
    input  [DATA_WIDTH-1:0] i_store_data,
    input  [2:0]            i_funct3,

    output                  o_mem_done,
    output [DATA_WIDTH-1:0] o_load_data,
    output                  o_lsu_busy,

    output [7:0]            o_lsu_wmask,

    output                  o_lsu_exc_valid,
    output [4:0]            o_lsu_exc_code,
    output [31:0]           o_lsu_exc_tval,

    // ======================= AXI4 Read Address (AR) =======================
    output                  o_lsu_arvalid,
    input                   i_lsu_arready,
    output [ADDR_WIDTH-1:0] o_lsu_araddr,
    output [3:0]            o_lsu_arid,
    output [7:0]            o_lsu_arlen,
    output [2:0]            o_lsu_arsize,
    output [1:0]            o_lsu_arburst,

    // ======================= AXI4 Read Data (R) ===========================
    output                  o_lsu_rready,
    input                   i_lsu_rvalid,
    input  [DATA_WIDTH-1:0] i_lsu_rdata,
    input  [1:0]            i_lsu_rresp,
    input                   i_lsu_rlast,
    input  [3:0]            i_lsu_rid,

    // ======================= AXI4 Write Address (AW) ======================
    output                  o_lsu_awvalid,
    input                   i_lsu_awready,
    output [ADDR_WIDTH-1:0] o_lsu_awaddr,
    output [3:0]            o_lsu_awid,
    output [7:0]            o_lsu_awlen,
    output [2:0]            o_lsu_awsize,
    output [1:0]            o_lsu_awburst,

    // ======================= AXI4 Write Data (W) ==========================
    output                  o_lsu_wvalid,
    input                   i_lsu_wready,
    output [DATA_WIDTH-1:0] o_lsu_wdata,
    output [3:0]            o_lsu_wstrb,
    output                  o_lsu_wlast,

    // ======================= AXI4 Write Response (B) ======================
    output                  o_lsu_bready,
    input                   i_lsu_bvalid,
    input  [1:0]            i_lsu_bresp,
    input  [3:0]            i_lsu_bid
);

    // ============================================================
    // exception code
    // ============================================================
    localparam EXC_LOAD_MISALIGN  = 5'd4;
    localparam EXC_LOAD_ACCESS    = 5'd5;
    localparam EXC_STORE_MISALIGN = 5'd6;
    localparam EXC_STORE_ACCESS   = 5'd7;

    // ============================================================
    // state
    // ============================================================
    localparam S_IDLE       = 3'd0;
    localparam S_LOAD_AR    = 3'd1;
    localparam S_LOAD_R     = 3'd2;
    localparam S_STORE_AW_W = 3'd3;
    localparam S_STORE_B    = 3'd4;
    localparam S_DONE       = 3'd5;

    reg [2:0] state;
    reg [2:0] state_next;

    // ============================================================
    // request registers
    // ============================================================
    reg [ADDR_WIDTH-1:0] addr_r;
    reg [DATA_WIDTH-1:0] store_data_r;
    reg [2:0]            funct3_r;
    reg [1:0]            offset_r;

    reg [DATA_WIDTH-1:0] load_data_r;

    reg                  aw_done_r;
    reg                  w_done_r;

    reg                  exc_valid_r;
    reg [4:0]            exc_code_r;
    reg [31:0]           exc_tval_r;

    // ============================================================
    // start condition
    // ============================================================
    wire start_load;
    wire start_store;

    assign start_load  = (state == S_IDLE) && i_mem_valid && i_mem_read;
    assign start_store = (state == S_IDLE) && i_mem_valid && i_mem_write;

    wire [1:0] mem_offset;
    assign mem_offset = i_mem_addr[1:0];

    // ============================================================
    // alignment check
    // ============================================================
    wire is_half_access;
    wire is_word_access;
    wire addr_misalign;

    assign is_half_access =
        (i_funct3 == 3'b001) ||   // LH / SH
        (i_funct3 == 3'b101);     // LHU

    assign is_word_access =
        (i_funct3 == 3'b010);     // LW / SW

    assign addr_misalign =
        (is_half_access && i_mem_addr[0]) ||
        (is_word_access && (i_mem_addr[1:0] != 2'b00));

    wire load_misalign;
    wire store_misalign;

    assign load_misalign  = start_load  && addr_misalign;
    assign store_misalign = start_store && addr_misalign;

    wire capture_req;
    assign capture_req = load_misalign || store_misalign || start_load || start_store;

    // ============================================================
    // AXI handshake
    // ============================================================
    wire ar_fire;
    wire r_fire;
    wire aw_fire;
    wire w_fire;
    wire b_fire;

    assign ar_fire = o_lsu_arvalid && i_lsu_arready;
    assign r_fire  = o_lsu_rready  && i_lsu_rvalid && i_lsu_rlast;
    assign aw_fire = o_lsu_awvalid && i_lsu_awready;
    assign w_fire  = o_lsu_wvalid  && i_lsu_wready;
    assign b_fire  = o_lsu_bready  && i_lsu_bvalid;

    wire aw_done_next;
    wire w_done_next;

    assign aw_done_next = aw_done_r || aw_fire;
    assign w_done_next  = w_done_r  || w_fire;

    // ============================================================
    // store helper functions
    // ============================================================
    function [31:0] gen_store_wdata;
        input [2:0]  funct3;
        input [31:0] data;
        input [1:0]  offset;
        begin
            case (funct3)
                3'b000: gen_store_wdata = ({24'b0, data[7:0]}  << (8 * offset)); // SB
                3'b001: gen_store_wdata = ({16'b0, data[15:0]} << (8 * offset)); // SH
                3'b010: gen_store_wdata = data;                                  // SW
                default: gen_store_wdata = 32'b0;
            endcase
        end
    endfunction

    function [3:0] gen_store_wstrb;
        input [2:0] funct3;
        input [1:0] offset;
        begin
            case (funct3)
                3'b000: gen_store_wstrb = (4'b0001 << offset); // SB
                3'b001: gen_store_wstrb = (4'b0011 << offset); // SH
                3'b010: gen_store_wstrb = 4'b1111;             // SW
                default: gen_store_wstrb = 4'b0000;
            endcase
        end
    endfunction

    function [7:0] gen_store_wmask;
        input [2:0] funct3;
        begin
            case (funct3)
                3'b000: gen_store_wmask = 8'b0000_0001; // SB
                3'b001: gen_store_wmask = 8'b0000_0011; // SH
                3'b010: gen_store_wmask = 8'b0000_1111; // SW
                default: gen_store_wmask = 8'b0000_0000;
            endcase
        end
    endfunction

    // ============================================================
    // load helper function
    // ============================================================
    function [31:0] gen_load_data;
        input [2:0]  funct3;
        input [31:0] rdata;
        input [1:0]  offset;

        reg [31:0] shifted;
        reg [7:0]  load_byte;
        reg [15:0] load_half;
        begin
            shifted   = rdata >> (8 * offset);
            load_byte = shifted[7:0];
            load_half = shifted[15:0];

            case (funct3)
                3'b000: gen_load_data = {{24{load_byte[7]}},  load_byte}; // LB
                3'b001: gen_load_data = {{16{load_half[15]}}, load_half}; // LH
                3'b010: gen_load_data = rdata;                            // LW
                3'b100: gen_load_data = {24'b0, load_byte};               // LBU
                3'b101: gen_load_data = {16'b0, load_half};               // LHU
                default: gen_load_data = 32'b0;
            endcase
        end
    endfunction

    // ============================================================
    // next state logic
    // 组合 always 块只给 state_next 赋值。
    // ============================================================
    always @(*) begin
        state_next = state;

        case (state)
            S_IDLE: begin
                if (load_misalign || store_misalign) begin
                    state_next = S_DONE;
                end else if (start_load) begin
                    state_next = S_LOAD_AR;
                end else if (start_store) begin
                    state_next = S_STORE_AW_W;
                end else begin
                    state_next = S_IDLE;
                end
            end

            S_LOAD_AR: begin
                if (ar_fire) begin
                    state_next = S_LOAD_R;
                end else begin
                    state_next = S_LOAD_AR;
                end
            end

            S_LOAD_R: begin
                if (r_fire) begin
                    state_next = S_DONE;
                end else begin
                    state_next = S_LOAD_R;
                end
            end

            S_STORE_AW_W: begin
                if (aw_done_next && w_done_next) begin
                    state_next = S_STORE_B;
                end else begin
                    state_next = S_STORE_AW_W;
                end
            end

            S_STORE_B: begin
                if (b_fire) begin
                    state_next = S_DONE;
                end else begin
                    state_next = S_STORE_B;
                end
            end

            S_DONE: begin
                if (i_mem_ready) begin
                    state_next = S_IDLE;
                end else begin
                    state_next = S_DONE;
                end
            end

            default: begin
                state_next = S_IDLE;
            end
        endcase
    end

    // ============================================================
    // state register
    // 一个 always 块只更新 state
    // ============================================================
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            state <= S_IDLE;
        end else begin
            state <= state_next;
        end
    end

    // ============================================================
    // addr_r register
    // 一个 always 块只更新 addr_r
    // ============================================================
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            addr_r <= {ADDR_WIDTH{1'b0}};
        end else if (capture_req) begin
            addr_r <= i_mem_addr;
        end
    end

    // ============================================================
    // store_data_r register
    // 一个 always 块只更新 store_data_r
    // ============================================================
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            store_data_r <= {DATA_WIDTH{1'b0}};
        end else if (start_store && !store_misalign) begin
            store_data_r <= gen_store_wdata(i_funct3, i_store_data, i_mem_addr[1:0]);
        end
    end

    // ============================================================
    // funct3_r register
    // 一个 always 块只更新 funct3_r
    // ============================================================
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            funct3_r <= 3'b000;
        end else if (capture_req) begin
            funct3_r <= i_funct3;
        end
    end

    // ============================================================
    // offset_r register
    // 一个 always 块只更新 offset_r
    // ============================================================
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            offset_r <= 2'b00;
        end else if (capture_req) begin
            offset_r <= i_mem_addr[1:0];
        end
    end

    // ============================================================
    // load_data_r register
    // 一个 always 块只更新 load_data_r
    // ============================================================
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            load_data_r <= {DATA_WIDTH{1'b0}};
        end else if (r_fire) begin
            load_data_r <= gen_load_data(funct3_r, i_lsu_rdata, offset_r);
        end
    end

    // ============================================================
    // aw_done_r register
    // 一个 always 块只更新 aw_done_r
    // ============================================================
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            aw_done_r <= 1'b0;
        end else if (state == S_IDLE) begin
            aw_done_r <= 1'b0;
        end else if (state == S_STORE_AW_W && aw_fire) begin
            aw_done_r <= 1'b1;
        end
    end

    // ============================================================
    // w_done_r register
    // 一个 always 块只更新 w_done_r
    // ============================================================
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            w_done_r <= 1'b0;
        end else if (state == S_IDLE) begin
            w_done_r <= 1'b0;
        end else if (state == S_STORE_AW_W && w_fire) begin
            w_done_r <= 1'b1;
        end
    end

    // ============================================================
    // exc_valid_r register
    // 一个 always 块只更新 exc_valid_r
    // ============================================================
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            exc_valid_r <= 1'b0;
        end else if (state == S_IDLE) begin
            if (load_misalign || store_misalign) begin
                exc_valid_r <= 1'b1;
            end else begin
                exc_valid_r <= 1'b0;
            end
        end else if (state == S_LOAD_R && r_fire) begin
            exc_valid_r <= (i_lsu_rresp != 2'b00);
        end else if (state == S_STORE_B && b_fire) begin
            exc_valid_r <= (i_lsu_bresp != 2'b00);
        end
    end

    // ============================================================
    // exc_code_r register
    // 一个 always 块只更新 exc_code_r
    // ============================================================
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            exc_code_r <= 5'b0;
        end else if (state == S_IDLE) begin
            if (load_misalign) begin
                exc_code_r <= EXC_LOAD_MISALIGN;
            end else if (store_misalign) begin
                exc_code_r <= EXC_STORE_MISALIGN;
            end else begin
                exc_code_r <= 5'b0;
            end
        end else if (state == S_LOAD_R && r_fire) begin
            if (i_lsu_rresp != 2'b00) begin
                exc_code_r <= EXC_LOAD_ACCESS;
            end else begin
                exc_code_r <= 5'b0;
            end
        end else if (state == S_STORE_B && b_fire) begin
            if (i_lsu_bresp != 2'b00) begin
                exc_code_r <= EXC_STORE_ACCESS;
            end else begin
                exc_code_r <= 5'b0;
            end
        end
    end

    // ============================================================
    // exc_tval_r register
    // 一个 always 块只更新 exc_tval_r
    // ============================================================
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            exc_tval_r <= 32'b0;
        end else if (state == S_IDLE) begin
            if (load_misalign || store_misalign) begin
                exc_tval_r <= i_mem_addr;
            end else begin
                exc_tval_r <= 32'b0;
            end
        end else if (state == S_LOAD_R && r_fire) begin
            if (i_lsu_rresp != 2'b00) begin
                exc_tval_r <= addr_r;
            end else begin
                exc_tval_r <= 32'b0;
            end
        end else if (state == S_STORE_B && b_fire) begin
            if (i_lsu_bresp != 2'b00) begin
                exc_tval_r <= addr_r;
            end else begin
                exc_tval_r <= 32'b0;
            end
        end
    end

    // ============================================================
    // AXI Read Address
    // ============================================================
    assign o_lsu_arvalid = (state == S_LOAD_AR);
    assign o_lsu_araddr  = {addr_r[ADDR_WIDTH-1:2], 2'b00};

    assign o_lsu_arid    = 4'b0000;
    assign o_lsu_arlen   = 8'b0000_0000;
    assign o_lsu_arsize  = 3'b010;
    assign o_lsu_arburst = 2'b01;

    // ============================================================
    // AXI Read Data
    // ============================================================
    assign o_lsu_rready = (state == S_LOAD_R);

    // ============================================================
    // AXI Write Address
    // ============================================================
    assign o_lsu_awvalid = (state == S_STORE_AW_W) && !aw_done_r;
    assign o_lsu_awaddr  = {addr_r[ADDR_WIDTH-1:2], 2'b00};

    assign o_lsu_awid    = 4'b0000;
    assign o_lsu_awlen   = 8'b0000_0000;
    assign o_lsu_awsize  = 3'b010;
    assign o_lsu_awburst = 2'b01;

    // ============================================================
    // AXI Write Data
    // ============================================================
    assign o_lsu_wvalid = (state == S_STORE_AW_W) && !w_done_r;
    assign o_lsu_wdata  = store_data_r;
    assign o_lsu_wstrb  = gen_store_wstrb(funct3_r, offset_r);
    assign o_lsu_wlast  = 1'b1;

    // ============================================================
    // AXI Write Response
    // ============================================================
    assign o_lsu_bready = (state == S_STORE_B);

    // ============================================================
    // MEM stage outputs
    // ============================================================
    assign o_mem_done = (state == S_DONE);

    assign o_lsu_busy =
        (state != S_IDLE) &&
        (state != S_DONE);

    assign o_load_data = load_data_r;

    assign o_lsu_exc_valid = exc_valid_r;
    assign o_lsu_exc_code  = exc_code_r;
    assign o_lsu_exc_tval  = exc_tval_r;

    assign o_lsu_wmask =
        (state == S_IDLE) ? gen_store_wmask(i_funct3) :
                            gen_store_wmask(funct3_r);

    // ============================================================
    // unused signals
    // ============================================================
    /* verilator lint_off UNUSED */
    wire [3:0] _unused_rid = i_lsu_rid;
    wire [3:0] _unused_bid = i_lsu_bid;
    /* verilator lint_on UNUSED */

endmodule