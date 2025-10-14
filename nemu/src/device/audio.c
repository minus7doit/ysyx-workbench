/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <common.h>
#include <device/map.h>
#include <SDL2/SDL.h>

enum {
  reg_freq,
  reg_channels,
  reg_samples,
  reg_sbuf_size,
  reg_init,
  reg_count,
  nr_reg
};

static uint8_t *sbuf = NULL; //the data get from am
static uint32_t *audio_base = NULL;//the data am writen in here or am read from here
static uint32_t  read_ptr   = 0;      


static  void read_sbuf(void *user_data, Uint8 * stream,int len){
  SDL_LockAudio(); 
  int nread=(audio_base[reg_count]>len)?len:audio_base[reg_count];  
  if(audio_base[reg_count]){
    if(read_ptr+nread > audio_base[reg_sbuf_size]){
      int n1=audio_base[reg_sbuf_size]-read_ptr;
      memcpy(stream,sbuf+read_ptr,n1);
      memcpy(stream+n1,sbuf,nread-n1);
    }
    else{
      memcpy(stream,sbuf+read_ptr,nread);
    }
    read_ptr=(read_ptr+nread) % audio_base[reg_sbuf_size];
    audio_base[reg_count]-=nread;
  }
  if(len >nread) {
    memset(stream + nread ,0 ,len-nread);
  }
    SDL_UnlockAudio(); 
};

static void init_audio_sdl() {
SDL_AudioSpec s = {};
if(audio_base[reg_init]){
s=(SDL_AudioSpec){
  .freq = audio_base[reg_freq],
  .format = AUDIO_S16SYS,
  .channels = audio_base[reg_channels],
  .samples = audio_base[reg_samples],
  .callback = read_sbuf,//use this function to write sbuf data to audio;
  .userdata = NULL
};   

  int ret = SDL_InitSubSystem(SDL_INIT_AUDIO);
  if (ret == 0) {
    SDL_OpenAudio(&s, NULL);
    SDL_PauseAudio(0);
  }
}
}

static void audio_io_handler(uint32_t offset, int len, bool is_write) {
    if((offset % 4 == 0 && len == 4)&&is_write) {
      switch (offset){
      case reg_init*4:
        if(audio_base[reg_init]) init_audio_sdl();
        audio_base[reg_init] = 0;
        break;
      case reg_count*4:
       //  audio_base[reg_count]     = 0;
            break;
      default:break;
      }
    }
}


void init_audio() {
  uint32_t space_size = sizeof(uint32_t) * nr_reg;
  audio_base = (uint32_t *)new_space(space_size);
#ifdef CONFIG_HAS_PORT_IO
  add_pio_map ("audio", CONFIG_AUDIO_CTL_PORT, audio_base, space_size, audio_io_handler);
#else
  add_mmio_map("audio", CONFIG_AUDIO_CTL_MMIO, audio_base, space_size, audio_io_handler);
#endif

  sbuf = (uint8_t *)new_space(CONFIG_SB_SIZE);
  audio_base[reg_count]     = 0;
  audio_base[reg_sbuf_size] = CONFIG_SB_SIZE;

  add_mmio_map("audio-sbuf", CONFIG_SB_ADDR, sbuf, CONFIG_SB_SIZE, NULL);

  IFDEF(CONFIG_HAS_AUDIO, init_audio_sdl());

}
