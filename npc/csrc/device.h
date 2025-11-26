#ifndef __DECIVE_H__
#define __DECIVE_H__
 
#include "npc.h"
#define CONFIG_HAS_SERIAL 0
#define CONFIG_SERIAL_MMIO 0xa00003f8
#define SERIAL_SIZE 8
#define CONFIG_HAS_TIMER 0
#define CONFIG_RTC_MMIO 0xa0000048
#define CONFIG_TIMER_GETTIMEOFDAY 1
#define CONFIG_HAS_KEYBOARD 1
#define CONFIG_I8042_DATA_MMIO 0xa0000060
#define CONFIG_HAS_VGA 1
#define CONFIG_VGA_CTL_MMIO 0xa0000100
#define CONFIG_VGA_SIZE_400x300 1
#define CONFIG_VGA_SHOW_SCREEN 1
#define CONFIG_HAS_AUDIO 1
#define CONFIG_AUDIO_CTL_MMIO 0xa0000200
#define CONFIG_FB_ADDR 0xa1000000

#define CONFIG_SB_ADDR 0xa1200000
#define CONFIG_SB_SIZE 0x10000

#define TIMER_HZ 60

#ifdef CONFIG_VGA_SIZE_800x600
#define SCREEN_W 800
#define SCREEN_H 600
#else
#define SCREEN_W 400
#define SCREEN_H 300
#endif

#define VMEM_SIZE (SCREEN_W*SCREEN_H*sizeof(uint32_t))

#ifdef CONFIG_VGA_SIZE_400x300
#define MULTI_NUM 2
#else
#define MULTI_NUM 1
#endif

extern void vmem_wirte(uint32_t addr, uint32_t data);
extern void init_vga();
extern void init_i8042();
extern void vga_update_screen();
extern uint64_t get_time();
extern int get_key();

#endif // __DECIVE_H__