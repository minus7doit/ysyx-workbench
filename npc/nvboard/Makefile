TOPNAME = ysyxSoCFull
NXDC_FILES = constr/ysyxSoCFull.nxdc

NPC_HOME := /home/minus7/ysyx-workbench/npc
YSYXSOC_HOME := /home/minus7/ysyx-workbench/ysyxSoC

VERILATOR = verilator
LLVM_CONFIG ?= llvm-config

VERILATOR_CFLAGS += -MMD --build -cc --trace\
                    -O3 --x-assign fast --x-initial fast --noassert \
                    --no-timing --timescale 1ns/1ns -Wno-TIMESCALEMOD 

BUILD_DIR = ./build
OBJ_DIR   = $(BUILD_DIR)/obj_dir
BIN       = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES) | $(BUILD_DIR)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# -----------------------------
# source files
# -----------------------------
YSYX_PERIP_V := $(wildcard $(YSYXSOC_HOME)/perip/*.v)
UART16550_V  := $(wildcard $(YSYXSOC_HOME)/perip/uart16550/rtl/*.v)
SPI_V        := $(wildcard $(YSYXSOC_HOME)/perip/spi/rtl/*.v)

YSYXSOC_PERIP_EXTRA := \
  $(YSYXSOC_HOME)/perip/bitrev/bitrev.v \
  $(YSYXSOC_HOME)/perip/amba/apb_delayer.v \
  $(YSYXSOC_HOME)/perip/amba/axi4_delayer.v \
  $(YSYXSOC_HOME)/perip/gpio/gpio_top_apb.v \
  $(YSYXSOC_HOME)/perip/ps2/ps2_top_apb.v \
  $(YSYXSOC_HOME)/perip/psram/psram_top_apb.v \
  $(YSYXSOC_HOME)/perip/psram/psram.v \
  $(YSYXSOC_HOME)/perip/psram/efabless/EF_PSRAM_CTRL_wb.v \
  $(YSYXSOC_HOME)/perip/psram/efabless/EF_PSRAM_CTRL.v \
  $(YSYXSOC_HOME)/perip/sdram/sdram_top_apb.v \
  $(YSYXSOC_HOME)/perip/sdram/sdram_top_axi.v \
  $(YSYXSOC_HOME)/perip/sdram/sdram.v \
  $(YSYXSOC_HOME)/perip/sdram/core_sdram_axi4/sdram_axi_core.v \
  $(YSYXSOC_HOME)/perip/sdram/core_sdram_axi4/sdram_axi_pmem.v \
  $(YSYXSOC_HOME)/perip/sdram/core_sdram_axi4/sdram_axi.v \
  $(YSYXSOC_HOME)/perip/vga/vga_top_apb.v \
  $(YSYXSOC_HOME)/perip/flash/flash.v

VSRCS := \
  $(wildcard $(NPC_HOME)/vsrc/*.v) \
  $(YSYX_PERIP_V) \
  $(UART16550_V) \
  $(SPI_V) \
  $(YSYXSOC_PERIP_EXTRA) \
  $(YSYXSOC_HOME)/build/ysyxSoCFull.v

CSRCS := \
  $(NPC_HOME)/csrc/tb_$(TOPNAME).cpp \
  $(NPC_HOME)/csrc/cpu_sim.cpp \
  $(NPC_HOME)/csrc/sdb.cpp \
  $(NPC_HOME)/csrc/trace.cpp \
  $(NPC_HOME)/csrc/elf.cpp \
  $(NPC_HOME)/csrc/diff.cpp \
  $(NPC_HOME)/csrc/paddr.cpp \
  $(NPC_HOME)/csrc/device.cpp \
  $(NPC_HOME)/csrc/timer.cpp \
  $(NPC_HOME)/csrc/vga.cpp \
  $(NPC_HOME)/csrc/keyboard.cpp \
  $(SRC_AUTO_BIND)

# -----------------------------
# external compile/link flags
# -----------------------------
LLVM_CFLAGS_RAW := $(shell $(LLVM_CONFIG) --cflags)
LLVM_CFLAGS     := $(filter-out -D__STDC_FORMAT_MACROS,$(LLVM_CFLAGS_RAW))
LLVM_LDFLAGS    := $(shell $(LLVM_CONFIG) --ldflags --libs --system-libs)

READLINE_LDFLAGS := -lreadline -ldl -lhistory
SDL_CFLAGS       := $(shell sdl2-config --cflags 2>/dev/null || pkg-config --cflags sdl2)
SDL_LDFLAGS      := $(shell sdl2-config --libs   2>/dev/null || pkg-config --libs   sdl2)

# -----------------------------
# include paths
# -----------------------------
INC_PATH := \
  $(NPC_HOME) \
  $(YSYXSOC_HOME)/perip/uart16550/rtl \
  $(YSYXSOC_HOME)/perip/spi/rtl

# 给 C++ 编译器用
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) $(LLVM_CFLAGS) $(SDL_CFLAGS) -std=c++17 -DTOP_NAME="\"V$(TOPNAME)\""
LDFLAGS  += $(LLVM_LDFLAGS) $(READLINE_LDFLAGS) $(SDL_LDFLAGS)

# 给 Verilator 解析 Verilog `include 用
VINCFLAGS = $(addprefix -I, $(INC_PATH))

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# -----------------------------
# build
# -----------------------------
$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE) | $(BUILD_DIR)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		$(VINCFLAGS) \
		--top-module $(TOPNAME) $^ \
		-CFLAGS "$(CXXFLAGS)" \
		-LDFLAGS "$(LDFLAGS)" \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

all: default

run: $(BIN)
	@$(BIN) $(if $(IMG),--img $(IMG),)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: default all clean run