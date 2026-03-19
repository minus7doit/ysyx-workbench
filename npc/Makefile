MODULE=ysyxSoCFull

include ../Makefile
#include difftest.mk
LLVM_CONFIG ?= llvm-config
LLVM_CFLAGS_RAW := $(shell $(LLVM_CONFIG) --cflags)
LLVM_CFLAGS     := $(filter-out -D__STDC_FORMAT_MACROS,$(LLVM_CFLAGS_RAW))
LLVM_LDFLAGS    := $(shell $(LLVM_CONFIG) --ldflags --libs --system-libs)

READLINE_LDFLAGS := -lreadline -ldl -lhistory

SDL_CFLAGS  := $(shell sdl2-config --cflags 2>/dev/null || pkg-config --cflags sdl2)
SDL_LDFLAGS := $(shell sdl2-config --libs   2>/dev/null || pkg-config --libs   sdl2)

.PHONY: sim
sim: $(MODULE)_waveform.vcd
	$(call git_commit, "sim RTL")

.PHONY: verilate
verilate: .stamp.verilate

.PHONY: build
build: ./obj_dir/V$(MODULE)

.PHONY: waves
waves: $(MODULE)_waveform.vcd
	@echo
	@echo "### WAVES ###"
	gtkwave $(MODULE)_waveform.vcd

$(MODULE)_waveform.vcd: ./obj_dir/V$(MODULE)
	@echo
	@echo "### SIMULATING ###"
	@echo "IMG  = $(IMG)"
	@echo "ARGS = $(ARGS)"
	@./obj_dir/V$(MODULE) $(if $(IMG),--img $(IMG),) $(ARGS) $(ARGS_DIFF)

./obj_dir/V$(MODULE): .stamp.verilate
	@echo
	@echo "### BUILDING SIM ###"
	make -C obj_dir -f V$(MODULE).mk V$(MODULE)

YSYX_PERIP_V := $(wildcard ../ysyxSoC/perip/*.v)
UART16550_V  := $(wildcard ../ysyxSoC/perip/uart16550/rtl/*.v)
SPI_V        := $(wildcard ../ysyxSoC/perip/spi/rtl/*.v)

YSYXSOC_PERIP_EXTRA := \
  ../ysyxSoC/perip/bitrev/bitrev.v \
  ../ysyxSoC/perip/amba/apb_delayer.v \
  ../ysyxSoC/perip/amba/axi4_delayer.v \
  ../ysyxSoC/perip/gpio/gpio_top_apb.v \
  ../ysyxSoC/perip/ps2/ps2_top_apb.v \
  ../ysyxSoC/perip/psram/psram_top_apb.v \
  ../ysyxSoC/perip/psram/psram.v \
  ../ysyxSoC/perip/psram/efabless/EF_PSRAM_CTRL_wb.v \
  ../ysyxSoC/perip/psram/efabless/EF_PSRAM_CTRL.v \
  ../ysyxSoC/perip/sdram/sdram_top_apb.v \
  ../ysyxSoC/perip/sdram/sdram_top_axi.v \
  ../ysyxSoC/perip/sdram/sdram.v \
  ../ysyxSoC/perip/sdram/core_sdram_axi4/sdram_axi_core.v \
  ../ysyxSoC/perip/sdram/core_sdram_axi4/sdram_axi_pmem.v \
  ../ysyxSoC/perip/sdram/core_sdram_axi4/sdram_axi.v \
  ../ysyxSoC/perip/vga/vga_top_apb.v \
  ../ysyxSoC/perip/flash/flash.v

.stamp.verilate: $(wildcard ./vsrc/*.v) ./csrc/tb_$(MODULE).cpp
	@echo
	@echo "### VERILATING ###"
	verilator --Wno-EOFNEWLINE --trace --autoflush -cc \
	  $(wildcard ./vsrc/*.v) \
	  $(YSYX_PERIP_V) $(UART16550_V) $(SPI_V) \
	  $(YSYXSOC_PERIP_EXTRA) \
	  ../ysyxSoC/build/ysyxSoCFull.v \
	  --exe ./csrc/tb_$(MODULE).cpp ./csrc/cpu_sim.cpp \
	  ./csrc/sdb.cpp ./csrc/trace.cpp ./csrc/elf.cpp ./csrc/diff.cpp ./csrc/paddr.cpp ./csrc/device.cpp \
	  ./csrc/timer.cpp ./csrc/vga.cpp ./csrc/keyboard.cpp \
	  --top-module $(MODULE) \
	  -I$(NPC_HOME) \
	  -I../ysyxSoC/perip/uart16550/rtl \
	  -I../ysyxSoC/perip/spi/rtl \
	  --timescale "1ns/1ns" \
	  --no-timing \
	  -CFLAGS "-std=c++17 $(LLVM_CFLAGS) $(SDL_CFLAGS)" \
	  -LDFLAGS "$(LLVM_LDFLAGS) $(READLINE_LDFLAGS) $(SDL_LDFLAGS)"
	@touch .stamp.verilate

.PHONY: lint
lint:
	verilator --lint-only ./vsrc/*.v

.PHONY: clean
clean:
	rm -rf .stamp.*
	rm -rf ./obj_dir
	rm -rf $(MODULE)_waveform.vcd