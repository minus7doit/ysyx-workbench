AM_SRCS := riscv/ysyxsoc/start.S \
           riscv/ysyxsoc/trm.c \
           riscv/ysyxsoc/ioe.c \
           riscv/ysyxsoc/timer.c \
           riscv/ysyxsoc/input.c \
           riscv/ysyxsoc/gpu.c \
           riscv/ysyxsoc/audio.c \
           riscv/ysyxsoc/cte.c \
           riscv/ysyxsoc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
CFLAGS    += -g
CFLAGS    += -I$(AM_HOME)/am/src/riscv/ysyxsoc/include

SOCFLAGS  += -l $(shell dirname $(IMAGE).elf)/ysyxsoc-log.txt
#SOCFLAGS += -b

# mem-test 作为 SRAM payload；bootloader 和其他程序仍走普通链接脚本
ifeq ($(NAME),microbench)
  LDSCRIPT = $(AM_HOME)/scripts/ysyxsoc_flash_exec_sdram_all.ld
  CFLAGS   += -Os
else ifeq ($(NAME),rtthread)
  LDSCRIPT = $(AM_HOME)/scripts/ysyxsoc_rtthread_sdram.ld
  CFLAGS   += -Os
else ifeq ($(NAME),sdram_test)
  LDSCRIPT = $(AM_HOME)/scripts/ysyxsoc_flash_exec_psram_all.ld
  CFLAGS   += -Os
else ifeq ($(NAME),fsbl)
  LDSCRIPT = $(AM_HOME)/scripts/ysyxsoc_boot2.ld
  CFLAGS   += -Os
  LDFLAGS += -Map=$(IMAGE).map
else
  LDSCRIPT = $(AM_HOME)/scripts/ysyxsoc.ld
  SOCFLAGS += -f $(IMAGE).elf
endif

$(info [YSYXSOC] NAME=$(NAME) LDSCRIPT=$(LDSCRIPT))

LDFLAGS += -T $(LDSCRIPT)
LDFLAGS += --gc-sections -e _start
LDFLAGS += --defsym=_mrom_start=0x20000000 \
           --defsym=_sram_start=0x0f000000 \
           --defsym=_flash_start=0x30000000 \
           --defsym=_psram_start=0x80000000 \
           --defsym=_sdram_start=0xa0000000

MAINARGS_MAX_LEN = 64
MAINARGS_PLACEHOLDER = The insert-arg rule in Makefile will insert mainargs here.
CFLAGS += -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) \
          -DMAINARGS_PLACEHOLDER=\""$(MAINARGS_PLACEHOLDER)"\"


insert-arg: image
	@python $(AM_HOME)/tools/insert-arg.py $(IMAGE).bin $(MAINARGS_MAX_LEN) "$(MAINARGS_PLACEHOLDER)" "$(mainargs)"


image: image-dep
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
ifeq ($(NAME),rtthread)
	@$(OBJCOPY) -O binary \
		-R .bss -R .sbss -R .comment -R .riscv.attributes \
		-R .debug* -R .note* \
		$(IMAGE).elf $(IMAGE).bin
else
	@$(OBJCOPY) -O binary -R .bss -R .sbss -R .comment -R .riscv.attributes $(IMAGE).elf $(IMAGE).bin
endif
	@riscv64-linux-gnu-nm -n $(IMAGE).elf > $(IMAGE).sym
	@$(OBJDUMP) -h $(IMAGE).elf > $(IMAGE).sec

run: insert-arg
ifeq ($(NAME),bootloader)
	@echo "[BOOTLOADER] build SRAM payload: mem-test"
	$(MAKE) -C $(YSYXSOC_HOME) sim ARGS="$(SOCFLAGS)" IMG=$(IMAGE).bin
else
	$(MAKE) -C $(YSYXSOC_HOME) sim ARGS="$(SOCFLAGS)" IMG=$(IMAGE).bin
endif

.PHONY: insert-arg image run