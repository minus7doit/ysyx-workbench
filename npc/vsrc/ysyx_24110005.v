`timescale 1ns/1ps

module ysyx_24110005(
  input             clock,
  input             reset,
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
  // 不用的 Slave 口
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
  // 参数
  // -------------------------------------------------------
  localparam DATA_WIDTH     = 32;
  localparam ADDR_WIDTH     = 32;
  localparam OP_WIDTH       = 7;
  localparam REG_ADDR_WIDTH = 5;
  localparam FUN_WIDTH      = 3;
  localparam BASE_ADDR      = 32'h3000_0000;
  localparam NOP_INST       = 32'h0000_0013;

  localparam WB_ALU = 2'b00;
  localparam WB_MEM = 2'b01;
  localparam WB_PC4 = 2'b10;
  localparam WB_CSR = 2'b11;

  localparam EXC_ILLEGAL_INST = 5'd2;
  localparam EXC_ECALL_M      = 5'd11;

  localparam TYPE_CSR = 7'b1110011;

  // -------------------------------------------------------
  // PC / flush / redirect
  // -------------------------------------------------------
  reg [31:0] fetch_pc;

  wire [31:0] redirect_pc;
  wire        ctrl_flush;
  wire        fencei_flush;
  wire        trap_flush;
  wire        mret_flush;
  wire        global_flush;

  assign global_flush = ctrl_flush | fencei_flush | trap_flush | mret_flush;

  always @(posedge clock or posedge reset) begin
    if (reset) begin
      fetch_pc <= BASE_ADDR;
    end else if (trap_flush) begin
      fetch_pc <= csr_mtvec;
    end else if (mret_flush) begin
      fetch_pc <= csr_mepc;
    end else if (ctrl_flush) begin
      fetch_pc <= redirect_pc;
    end else if (fencei_flush) begin
      fetch_pc <= ex_pc + 32'd4;
    end else if (ifu_take) begin
      fetch_pc <= ifu_id_pc + 32'd4;
    end
  end

  // =======================================================
  // IFU -> ICache CPU side
  // =======================================================
  wire        ifu_cpu_arvalid;
  wire        ifu_cpu_arready;
  wire [31:0] ifu_cpu_araddr;
  wire [3:0]  ifu_cpu_arid;
  wire [7:0]  ifu_cpu_arlen;
  wire [2:0]  ifu_cpu_arsize;
  wire [1:0]  ifu_cpu_arburst;

  wire        ifu_cpu_rready;
  wire        ifu_cpu_rvalid;
  wire [31:0] ifu_cpu_rdata;
  wire        ifu_cpu_rlast;

  wire        ifu_id_ready;
  wire        ifu_id_valid;
  wire [31:0] ifu_id_pc;
  wire [31:0] ifu_inst;
  wire        ifu_take;
  wire        ifu_fetch_allow;

  assign ifu_take        = ifu_id_valid && ifu_id_ready;
  assign ifu_fetch_allow = !global_flush;

  // -------------------------------------------------------
  // IFU
  // 当前 IFU 接口：
  //   IFU -> ICache CPU side
  //   IFU 内部带一条指令 buffer，o_inst_valid/o_inst/o_inst_pc 给 ID 阶段
  // -------------------------------------------------------
  ysyx_24110005_ifu #(
    .DATA_WIDTH(DATA_WIDTH),
    .ADDR_WIDTH(ADDR_WIDTH)
  ) u_ifu (
    .clock             (clock),
    .reset             (reset),

    .i_fetch_allow     (ifu_fetch_allow),
    .i_id_ready        (ifu_id_ready),
    .i_fetch_pc        (fetch_pc),
    .i_flush           (global_flush),

    .o_inst_valid      (ifu_id_valid),
    .o_inst            (ifu_inst),
    .o_inst_pc         (ifu_id_pc),

    .o_ifu_arvalid     (ifu_cpu_arvalid),
    .i_ifu_arready     (ifu_cpu_arready),
    .o_ifu_araddr      (ifu_cpu_araddr),
    .o_ifu_arid        (ifu_cpu_arid),
    .o_ifu_arlen       (ifu_cpu_arlen),
    .o_ifu_arsize      (ifu_cpu_arsize),
    .o_ifu_arburst     (ifu_cpu_arburst),

    .o_ifu_rready      (ifu_cpu_rready),
    .i_ifu_rvalid      (ifu_cpu_rvalid),
    .i_ifu_rdata       (ifu_cpu_rdata),
    .i_ifu_rlast       (ifu_cpu_rlast)
  );

  // =======================================================
  // ICache：CPU side 接 IFU；MEM side 接 Arbiter 的 IFU 端口
  // =======================================================
  wire        ic_mem_arvalid;
  wire        ic_mem_arready;
  wire [31:0] ic_mem_araddr;
  wire [7:0]  ic_mem_arlen;
  wire [2:0]  ic_mem_arsize;
  wire [1:0]  ic_mem_arburst;

  wire        ic_mem_rready;
  wire        ic_mem_rvalid;
  wire [31:0] ic_mem_rdata;
  wire        ic_mem_rlast;

  ysyx_24110005_icache #(
    .ADDR_WIDTH(ADDR_WIDTH),
    .DATA_WIDTH(DATA_WIDTH),
    .LINE_BYTES(8),
    .SET_NUM(128)
  ) u_icache (
    .clock            (clock),
    .rst_n            (~reset),
    .flush_i          (global_flush),

    .cpu_ar_valid     (ifu_cpu_arvalid),
    .cpu_ar_addr      (ifu_cpu_araddr),
    .cpu_ar_ready     (ifu_cpu_arready),

    .cpu_inst_rready  (ifu_cpu_rready),
    .cpu_inst_rvalid  (ifu_cpu_rvalid),
    .cpu_inst_rdata   (ifu_cpu_rdata),

    .mem_ar_valid     (ic_mem_arvalid),
    .mem_ar_addr      (ic_mem_araddr),
    .mem_ar_len       (ic_mem_arlen),
    .mem_ar_size      (ic_mem_arsize),
    .mem_ar_burst     (ic_mem_arburst),
    .mem_ar_ready     (ic_mem_arready),

    .mem_rvalid       (ic_mem_rvalid),
    .mem_rready       (ic_mem_rready),
    .mem_rdata        (ic_mem_rdata),
    .mem_rlast        (ic_mem_rlast)
  );

  // ICache CPU side is a single-instruction response, so IFU sees one beat.
  assign ifu_cpu_rlast = 1'b1;

  // =======================================================
  // IF/ID stage
  // =======================================================
  reg        id_valid;
  reg [31:0] id_pc;
  reg [31:0] id_inst;

  // Decoder outputs for ID stage
  wire [4:0]  id_rs1;
  wire [4:0]  id_rs2;
  wire [4:0]  id_rd;
  wire [31:0] id_imm;
  wire [6:0]  id_opcode;
  wire [2:0]  id_funct3;
  wire [6:0]  id_funct7;
  wire        id_use_rs1;
  wire        id_use_rs2;
  wire        id_reg_wen;
  wire        id_mem_read;
  wire        id_mem_write;
  wire        id_branch;
  wire        id_jump;
  wire        id_is_csr;
  wire        id_ecall;
  wire        id_ebreak;
  wire        id_mret;
  wire        id_fencei;
  wire        id_csr_imm_sel;
  wire [31:0] id_csr_zimm;
  wire [1:0]  id_wb_sel;
  wire        id_illegal_inst;

  ysyx_24110005_Decoder #(
    .DATA_WIDTH(DATA_WIDTH),
    .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
    .OP_WIDTH(OP_WIDTH),
    .FUN_WIDTH(FUN_WIDTH)
  ) u_decoder (
    .inst             (id_inst),
    .rs1              (id_rs1),
    .rs2              (id_rs2),
    .rd               (id_rd),
    .imm              (id_imm),
    .opcode           (id_opcode),
    .funct3           (id_funct3),
    .funct7           (id_funct7),
    .use_rs1          (id_use_rs1),
    .use_rs2          (id_use_rs2),
    .reg_wen          (id_reg_wen),
    .mem_read         (id_mem_read),
    .mem_write        (id_mem_write),
    .branch           (id_branch),
    .jump             (id_jump),
    .csr              (id_is_csr),
    .ecall            (id_ecall),
    .ebreak           (id_ebreak),
    .mret             (id_mret),
    .fencei           (id_fencei),
    .csr_imm_sel      (id_csr_imm_sel),
    .csr_zimm         (id_csr_zimm),
    .wb_sel           (id_wb_sel),
    .illegal_inst     (id_illegal_inst)
  );

  // =======================================================
  // Register file
  // =======================================================
  wire [31:0] rf_rdata1;
  wire [31:0] rf_rdata2;

  wire        rf_wen;
  wire [4:0]  rf_waddr;
  wire [31:0] rf_wdata;

  ysyx_24110005_RegisterFile #(
    .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
    .DATA_WIDTH(DATA_WIDTH)
  ) u_rf (
    .clock    (clock),
    .wen      (rf_wen),
    .w_addr   (rf_waddr),
    .w_data   (rf_wdata),
    .r_addr1  (id_rs1),
    .r_addr2  (id_rs2),
    .r_data1  (rf_rdata1),
    .r_data2  (rf_rdata2)
  );

  wire [31:0] id_csr_src1 = id_csr_imm_sel ? id_csr_zimm : rf_rdata1;

  // =======================================================
  // ID/EX stage
  // =======================================================
  reg        ex_valid;
  reg [31:0] ex_pc;
  reg [31:0] ex_inst;
  reg [31:0] ex_rs1_data;
  reg [31:0] ex_rs2_data;
  reg [31:0] ex_csr_src1;
  reg [31:0] ex_imm;
  reg [4:0]  ex_rs1;
  reg [4:0]  ex_rs2;
  reg [4:0]  ex_rd;
  reg [6:0]  ex_opcode;
  reg [2:0]  ex_funct3;
  reg [6:0]  ex_funct7;
  reg        ex_reg_wen;
  reg        ex_mem_read;
  reg        ex_mem_write;
  reg [1:0]  ex_wb_sel;
  reg        ex_is_csr;
  reg        ex_ecall;
  reg        ex_ebreak;
  reg        ex_mret;
  reg        ex_fencei;
  reg        ex_exc_valid;
  reg [4:0]  ex_exc_code;
  reg [31:0] ex_exc_tval;

  // =======================================================
  // EX stage ALU
  // =======================================================
  wire [31:0] alu_dnpc;
  wire [31:0] alu_w_data;
  wire        alu_redirect_valid;
  wire        alu_finish_sim;
  wire        alu_fencei_flush;

  ysyx_24110005_Alu #(
    .DATA_WIDTH(DATA_WIDTH),
    .OP_WIDTH(OP_WIDTH),
    .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
    .FUN_WIDTH(FUN_WIDTH)
  ) u_alu (
    .clock              (clock),
    .reset              (reset),
    .w_addr             (ex_rd),
    .pc                 (ex_pc),
    .src1               (ex_rs1_data),
    .src2               (ex_rs2_data),
    .imm                (ex_imm),
    .opcode             (ex_opcode),
    .fun                (ex_funct3),
    .i_fencei           (ex_fencei),
    .i_dec_has_exc      (ex_exc_valid),
    .dnpc               (alu_dnpc),
    .w_data             (alu_w_data),
    .o_redirect_valid   (alu_redirect_valid),
    .w_finish_sim       (alu_finish_sim),
    .o_fencei_flush     (alu_fencei_flush)
  );

  assign ctrl_flush   = ex_fire && alu_redirect_valid;
  assign fencei_flush = ex_fire && alu_fencei_flush;
  assign mret_flush   = ex_fire && ex_mret;
  assign redirect_pc  = alu_dnpc;
  // =======================================================
  // EX/MEM stage
  // =======================================================
  reg        mem_valid;
  reg [31:0] mem_pc;
  reg [31:0] mem_inst;
  reg [31:0] mem_alu_result;
  reg [31:0] mem_store_data;
  reg [31:0] mem_csr_src1;
  reg [31:0] mem_imm;
  reg [4:0]  mem_rd;
  reg [6:0]  mem_opcode;
  reg [2:0]  mem_funct3;
  reg        mem_reg_wen;
  reg        mem_mem_read;
  reg        mem_mem_write;
  reg [1:0]  mem_wb_sel;
  reg        mem_is_csr;
  reg        mem_ebreak;
  reg        mem_exc_valid;
  reg [4:0]  mem_exc_code;
  reg [31:0] mem_exc_tval;
  reg        mem_finish_sim;

  // =======================================================
  // LSU MEM stage
  // =======================================================
  wire        lsu_mem_done;
  wire [31:0] lsu_load_data;
  wire        lsu_busy;
  wire [7:0]  lsu_wmask;
  wire        lsu_exc_valid;
  wire [4:0]  lsu_exc_code;
  wire [31:0] lsu_exc_tval;

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

  ysyx_24110005_lsu #(
    .DATA_WIDTH(DATA_WIDTH),
    .ADDR_WIDTH(ADDR_WIDTH)
  ) u_lsu (
    .clock              (clock),
    .reset              (reset),
    .i_mem_valid        (mem_valid),
    .i_mem_ready        (wb_allowin),
    .i_mem_read         (mem_mem_read),
    .i_mem_write        (mem_mem_write),
    .i_mem_addr         (mem_alu_result),
    .i_store_data       (mem_store_data),
    .i_funct3           (mem_funct3),
    .o_mem_done         (lsu_mem_done),
    .o_load_data        (lsu_load_data),
    .o_lsu_busy         (lsu_busy),
    .o_lsu_wmask        (lsu_wmask),
    .o_lsu_exc_valid    (lsu_exc_valid),
    .o_lsu_exc_code     (lsu_exc_code),
    .o_lsu_exc_tval     (lsu_exc_tval),
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

  // =======================================================
  // CSR
  // 说明：这里为了让 CSR 读写和 MEM/WB 配合简单，CSR 在 mem_fire 时提交。
  // 后续如果要严格 commit 到 WB，可以把 CSR 拆成读/写双接口。
  // =======================================================
  wire [31:0] csr_rdata;
  wire [31:0] csr_mtvec;
  wire [31:0] csr_mepc;
  wire [31:0] csr_mstatus;
  wire [31:0] csr_mcause;
  wire [31:0] csr_mtval;

  wire        trap_commit;
  wire [31:0] trap_mepc;
  wire [4:0]  trap_mcause;
  wire [31:0] trap_mtval;

  assign trap_commit = mem_fire && mem_effective_exc_valid;
  assign trap_mepc   = mem_pc;
  assign trap_mcause = mem_effective_exc_code;
  assign trap_mtval  = mem_effective_exc_tval;
  assign trap_flush  = trap_commit;

  ysyx_24110005_csr #(
    .DATA_WIDTH(DATA_WIDTH)
  ) u_csr (
    .clock          (clock),
    .reset          (reset),
    .i_csr_valid    (mem_fire && mem_is_csr && !mem_effective_exc_valid),
    .i_src1         (mem_csr_src1),
    .i_imm          (mem_imm),
    .i_opcode       (mem_opcode),
    .i_funct3       (mem_funct3),
    .i_trap_commit  (trap_commit),
    .i_trap_mepc    (trap_mepc),
    .i_trap_mcause  (trap_mcause),
    .i_trap_mtval   (trap_mtval),
    .o_csr_data     (csr_rdata),
    .o_mtvec        (csr_mtvec),
    .o_mepc         (csr_mepc),
    .o_mstatus      (csr_mstatus),
    .o_mcause       (csr_mcause),
    .o_mtval        (csr_mtval)
  );

  // Need names used by PC redirect
  // =======================================================
  // MEM/WB stage
  // =======================================================
  reg        wb_valid;
  reg [31:0] wb_pc;
  reg [31:0] wb_inst;
  reg [31:0] wb_wdata;
  reg [4:0]  wb_rd;
  reg        wb_reg_wen;
  reg        wb_finish_sim;

  // =======================================================
  // ready/allow/fire
  // =======================================================
  wire wb_allowin;
  wire mem_ready_go;
  wire mem_allowin;
  wire ex_ready_go;
  wire ex_allowin;
  wire id_ready_go;
  wire id_allowin;
  wire id_fire;
  wire ex_fire;
  wire mem_fire;

  assign wb_allowin = 1'b1;

  assign mem_ready_go =
      !mem_valid ? 1'b1 :
      !(mem_mem_read || mem_mem_write) ? 1'b1 :
      lsu_mem_done;

  assign mem_allowin = !mem_valid || (mem_ready_go && wb_allowin);

  assign ex_ready_go = 1'b1;
  assign ex_allowin  = !ex_valid || (ex_ready_go && mem_allowin);

  // RAW hazard: 不做 forwarding，遇到冒险就等待到 WB 写回之后
  wire raw_hazard_rs1;
  wire raw_hazard_rs2;
  wire raw_hazard;

  assign raw_hazard_rs1 =
      id_valid && id_use_rs1 && (id_rs1 != 5'd0) &&
      ((ex_valid  && ex_reg_wen  && (ex_rd  == id_rs1)) ||
       (mem_valid && mem_reg_wen && (mem_rd == id_rs1)) ||
       (wb_valid  && wb_reg_wen  && (wb_rd  == id_rs1)));

  assign raw_hazard_rs2 =
      id_valid && id_use_rs2 && (id_rs2 != 5'd0) &&
      ((ex_valid  && ex_reg_wen  && (ex_rd  == id_rs2)) ||
       (mem_valid && mem_reg_wen && (mem_rd == id_rs2)) ||
       (wb_valid  && wb_reg_wen  && (wb_rd  == id_rs2)));

  assign raw_hazard = raw_hazard_rs1 | raw_hazard_rs2;

  assign id_ready_go = !raw_hazard;
  assign id_allowin  = !id_valid || (id_ready_go && ex_allowin);
  assign ifu_id_ready = id_allowin;

  assign id_fire  = id_valid  && id_ready_go && ex_allowin;
  assign ex_fire  = ex_valid  && ex_ready_go && mem_allowin;
  assign mem_fire = mem_valid && mem_ready_go && wb_allowin;

  // =======================================================
  // exception merge at MEM stage
  // =======================================================
  wire        mem_effective_exc_valid;
  wire [4:0]  mem_effective_exc_code;
  wire [31:0] mem_effective_exc_tval;

  assign mem_effective_exc_valid = mem_exc_valid | (mem_valid && lsu_exc_valid);
  assign mem_effective_exc_code  = mem_exc_valid ? mem_exc_code : lsu_exc_code;
  assign mem_effective_exc_tval  = mem_exc_valid ? mem_exc_tval : lsu_exc_tval;

  // =======================================================
  // pipeline registers
  // =======================================================
always @(posedge clock or posedge reset) begin
    if (reset) begin
        id_valid <= 1'b0;
        id_pc    <= BASE_ADDR;
        id_inst  <= NOP_INST;
    end else if (global_flush) begin
        // 当 branch/jump 决定 PC，flush IF/ID
        id_valid <= 1'b0;
        id_pc    <= fetch_pc;   // 新的跳转地址
        id_inst  <= NOP_INST;   // 插入 NOP
    end else if (id_allowin) begin
        if (ifu_take) begin
            id_valid <= 1'b1;
            id_pc    <= ifu_id_pc;
            id_inst  <= ifu_inst;
        end else begin
            id_valid <= 1'b0;
            id_inst  <= NOP_INST;
        end
    end
end

always @(posedge clock or posedge reset) begin
    if (reset) begin
        ex_valid <= 1'b0;
        ex_pc    <= BASE_ADDR;
        ex_inst  <= NOP_INST;
    end else if (global_flush) begin
        // flush younger instruction in EX
        // 对 ctrl_flush 来说，当前 EX 指令已经 ex_fire 到 MEM 了，
        // 所以这里清 EX 是安全的。
        ex_valid <= 1'b0;
        ex_inst  <= NOP_INST;
    end else if (ex_allowin) begin
        if (id_fire) begin
            ex_valid <= id_valid;
            ex_pc    <= id_pc;
            ex_inst  <= id_inst;
        end else begin
            ex_valid <= 1'b0;
            ex_inst  <= NOP_INST;
        end
    end
end
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      ex_rs1_data <= 32'b0;
      ex_rs2_data <= 32'b0;
      ex_csr_src1 <= 32'b0;
      ex_imm      <= 32'b0;
      ex_rs1      <= 5'b0;
      ex_rs2      <= 5'b0;
      ex_rd       <= 5'b0;
      ex_opcode   <= 7'b0;
      ex_funct3   <= 3'b0;
      ex_funct7   <= 7'b0;
      ex_reg_wen  <= 1'b0;
      ex_mem_read <= 1'b0;
      ex_mem_write<= 1'b0;
      ex_wb_sel   <= WB_ALU;
      ex_is_csr   <= 1'b0;
      ex_ecall    <= 1'b0;
      ex_ebreak   <= 1'b0;
      ex_mret     <= 1'b0;
      ex_fencei   <= 1'b0;
      ex_exc_valid<= 1'b0;
      ex_exc_code <= 5'b0;
      ex_exc_tval <= 32'b0;
    end else if (global_flush) begin
      ex_reg_wen   <= 1'b0;
      ex_mem_read  <= 1'b0;
      ex_mem_write <= 1'b0;
      ex_is_csr    <= 1'b0;
      ex_ecall     <= 1'b0;
      ex_ebreak    <= 1'b0;
      ex_mret      <= 1'b0;
      ex_fencei    <= 1'b0;
      ex_exc_valid <= 1'b0;
    end else if (ex_allowin && id_fire) begin
      ex_rs1_data <= rf_rdata1;
      ex_rs2_data <= rf_rdata2;
      ex_csr_src1 <= id_csr_src1;
      ex_imm      <= id_imm;
      ex_rs1      <= id_rs1;
      ex_rs2      <= id_rs2;
      ex_rd       <= id_rd;
      ex_opcode   <= id_opcode;
      ex_funct3   <= id_funct3;
      ex_funct7   <= id_funct7;
      ex_reg_wen  <= id_reg_wen;
      ex_mem_read <= id_mem_read;
      ex_mem_write<= id_mem_write;
      ex_wb_sel   <= id_wb_sel;
      ex_is_csr   <= id_is_csr;
      ex_ecall    <= id_ecall;
      ex_ebreak   <= id_ebreak;
      ex_mret     <= id_mret;
      ex_fencei   <= id_fencei;
      ex_exc_valid<= id_illegal_inst | id_ecall;
      ex_exc_code <= id_illegal_inst ? EXC_ILLEGAL_INST : EXC_ECALL_M;
      ex_exc_tval <= id_illegal_inst ? id_inst : 32'b0;
    end else if (ex_allowin && !id_fire) begin
      ex_reg_wen  <= 1'b0;
      ex_mem_read <= 1'b0;
      ex_mem_write<= 1'b0;
      ex_is_csr   <= 1'b0;
      ex_ecall    <= 1'b0;
      ex_ebreak   <= 1'b0;
      ex_mret     <= 1'b0;
      ex_fencei   <= 1'b0;
      ex_exc_valid<= 1'b0;
    end
  end

//ex阶段检测控制冒险，MEM阶段不需要插入NOP，需要执行完
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      mem_valid <= 1'b0;
      mem_pc    <= BASE_ADDR;
      mem_inst  <= NOP_INST;
    end else if (trap_flush || mret_flush) begin
      mem_valid <= 1'b0;
      mem_inst  <= NOP_INST;
    end else if (mem_allowin) begin
      if (ex_fire) begin
        mem_valid <= ex_valid;
        mem_pc    <= ex_pc;
        mem_inst  <= ex_inst;
      end else begin
        mem_valid <= 1'b0;
        mem_inst  <= NOP_INST;
      end
    end
  end

  always @(posedge clock or posedge reset) begin
    if (reset) begin
      mem_alu_result <= 32'b0;
      mem_store_data <= 32'b0;
      mem_csr_src1   <= 32'b0;
      mem_imm        <= 32'b0;
      mem_rd         <= 5'b0;
      mem_opcode     <= 7'b0;
      mem_funct3     <= 3'b0;
      mem_reg_wen    <= 1'b0;
      mem_mem_read   <= 1'b0;
      mem_mem_write  <= 1'b0;
      mem_wb_sel     <= WB_ALU;
      mem_is_csr     <= 1'b0;
      mem_ebreak     <= 1'b0;
      mem_exc_valid  <= 1'b0;
      mem_exc_code   <= 5'b0;
      mem_exc_tval   <= 32'b0;
      mem_finish_sim <= 1'b0;
    end else if (trap_flush || mret_flush) begin
      mem_reg_wen    <= 1'b0;
      mem_mem_read   <= 1'b0;
      mem_mem_write  <= 1'b0;
      mem_is_csr     <= 1'b0;
      mem_ebreak     <= 1'b0;
      mem_exc_valid  <= 1'b0;
      mem_finish_sim <= 1'b0;
    end else if (mem_allowin && ex_fire) begin
      mem_alu_result <= alu_w_data;
      mem_store_data <= ex_rs2_data;
      mem_csr_src1   <= ex_csr_src1;
      mem_imm        <= ex_imm;
      mem_rd         <= ex_rd;
      mem_opcode     <= ex_opcode;
      mem_funct3     <= ex_funct3;
      mem_reg_wen    <= ex_reg_wen;
      mem_mem_read   <= ex_mem_read;
      mem_mem_write  <= ex_mem_write;
      mem_wb_sel     <= ex_wb_sel;
      mem_is_csr     <= ex_is_csr;
      mem_ebreak     <= ex_ebreak;
      mem_exc_valid  <= ex_exc_valid;
      mem_exc_code   <= ex_exc_code;
      mem_exc_tval   <= ex_exc_tval;
      mem_finish_sim <= alu_finish_sim;
    end else if (mem_allowin && !ex_fire) begin
      mem_reg_wen    <= 1'b0;
      mem_mem_read   <= 1'b0;
      mem_mem_write  <= 1'b0;
      mem_is_csr     <= 1'b0;
      mem_ebreak     <= 1'b0;
      mem_exc_valid  <= 1'b0;
      mem_finish_sim <= 1'b0;
    end
  end

  // MEM final writeback data
  reg [31:0] mem_final_wdata;
  always @(*) begin
    case (mem_wb_sel)
      WB_ALU: mem_final_wdata = mem_alu_result;
      WB_MEM: mem_final_wdata = lsu_load_data;
      WB_PC4: mem_final_wdata = mem_alu_result;
      WB_CSR: mem_final_wdata = csr_rdata;
      default: mem_final_wdata = mem_alu_result;
    endcase
  end

  always @(posedge clock or posedge reset) begin
    if (reset) begin
      wb_valid      <= 1'b0;
      wb_pc         <= BASE_ADDR;
      wb_inst       <= NOP_INST;
      wb_wdata      <= 32'b0;
      wb_rd         <= 5'b0;
      wb_reg_wen    <= 1'b0;
      wb_finish_sim <= 1'b0;
    end else if (wb_allowin) begin
      if (mem_fire && !trap_flush) begin
        wb_valid      <= mem_valid;
        wb_pc         <= mem_pc;
        wb_inst       <= mem_inst;
        wb_wdata      <= mem_final_wdata;
        wb_rd         <= mem_rd;
        wb_reg_wen    <= mem_reg_wen && !mem_effective_exc_valid;
        wb_finish_sim <= mem_finish_sim;
      end else begin
        wb_valid      <= 1'b0;
        wb_inst       <= NOP_INST;
        wb_wdata      <= 32'b0;
        wb_rd         <= 5'b0;
        wb_reg_wen    <= 1'b0;
        wb_finish_sim <= 1'b0;
      end
    end
  end

  assign rf_wen   = wb_valid && wb_reg_wen;
  assign rf_waddr = wb_rd;
  assign rf_wdata = wb_wdata;

  // DPI: 先保持轻量；finish 建议在 WB/commit 触发
  always @(posedge clock) begin
    if (!reset) begin
      if (wb_valid && wb_finish_sim) begin
        finish_sim();
      end
      if (wb_valid) begin
        // difftest_step(wb_pc, wb_pc + 32'd4);
      end
    end
  end

  // =======================================================
  // Arbiter: ICache MEM side + LSU -> Xbar
  // =======================================================
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

    .ifu_arvalid (ic_mem_arvalid),
    .ifu_arready (ic_mem_arready),
    .ifu_araddr  (ic_mem_araddr),
    .ifu_arid    (4'b0000),
    .ifu_arlen   (ic_mem_arlen),
    .ifu_arsize  (ic_mem_arsize),
    .ifu_arburst (ic_mem_arburst),
    .ifu_rready  (ic_mem_rready),
    .ifu_rvalid  (ic_mem_rvalid),
    .ifu_rdata   (ic_mem_rdata),
    .ifu_rresp   (),
    .ifu_rlast   (ic_mem_rlast),
    .ifu_rid     (),

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
    .m_rvalid    (xb_rvalid),
    .m_rready    (xb_rready),
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
  );

  // =======================================================
  // XBAR -> SOC/CLINT
  // =======================================================
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
    .clint_araddr  (clint_araddr_axi),
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

  // -------------------------------------------------------
  // CLINT
  // -------------------------------------------------------
  ysyx_24110005_Clint #(
    .DATA_WIDTH(DATA_WIDTH),
    .ADDR_WIDTH(ADDR_WIDTH)
  ) u_clint (
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

  /* verilator lint_off UNUSED */
  wire _unused_interrupt = io_interrupt;
  wire [31:0] _unused_csr_mstatus = csr_mstatus;
  wire [31:0] _unused_csr_mcause  = csr_mcause;
  wire [31:0] _unused_csr_mtval   = csr_mtval;
  wire [7:0]  _unused_lsu_wmask   = lsu_wmask;
  wire        _unused_lsu_busy    = lsu_busy;
  wire [3:0]  _unused_ifu_cpu_arid = ifu_cpu_arid;
  wire [7:0]  _unused_ifu_cpu_arlen = ifu_cpu_arlen;
  wire [2:0]  _unused_ifu_cpu_arsize = ifu_cpu_arsize;
  wire [1:0]  _unused_ifu_cpu_arburst = ifu_cpu_arburst;
  /* verilator lint_on UNUSED */

endmodule
