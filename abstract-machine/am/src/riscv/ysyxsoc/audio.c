#include <am.h>
#include <ysyxsoc.h>
#include <stdio.h>

#define AUDIO_FREQ_ADDR      (AUDIO_ADDR + 0x00)
#define AUDIO_CHANNELS_ADDR  (AUDIO_ADDR + 0x04)
#define AUDIO_SAMPLES_ADDR   (AUDIO_ADDR + 0x08)
#define AUDIO_SBUF_SIZE_ADDR (AUDIO_ADDR + 0x0c)
#define AUDIO_INIT_ADDR      (AUDIO_ADDR + 0x10)
#define AUDIO_COUNT_ADDR     (AUDIO_ADDR + 0x14)

struct audio_info_struct audio_info;

static int count_played = 0;

static int wr_ptr = 0;

void __am_audio_init() {

}

void __am_audio_config(AM_AUDIO_CONFIG_T *cfg) {
  cfg->present = false;
  //audio_info.bufsize=inl(AUDIO_SBUF_SIZE_ADDR);
  //cfg->bufsize = audio_info.bufsize;
}

void __am_audio_ctrl(AM_AUDIO_CTRL_T *ctrl) {
 
  audio_info.freq=ctrl->freq ;
  audio_info.channels=ctrl->channels;
  audio_info.samples= ctrl->samples ;   
  
  outl(AUDIO_FREQ_ADDR, audio_info.freq);
  outl(AUDIO_CHANNELS_ADDR, audio_info.channels);
  outl(AUDIO_SAMPLES_ADDR, audio_info.samples);
  outl(AUDIO_INIT_ADDR, 1);

}


void __am_audio_status(AM_AUDIO_STATUS_T *stat) {
  audio_info.count = inl(AUDIO_COUNT_ADDR);
  stat->count = audio_info.count;
}

void __am_audio_play(AM_AUDIO_PLAY_T *ctl) {
  int len = ctl->buf.end - ctl->buf.start;
  uint8_t *p = (uint8_t *)ctl->buf.start;



  int nwrite = len;
  for (int i = 0; i < nwrite; i++) {
        outb(AUDIO_SBUF_ADDR+(((wr_ptr+i)%audio_info.bufsize)), p[i]);
  }
    wr_ptr = (wr_ptr + nwrite) % audio_info.bufsize;
      int count =inl(AUDIO_COUNT_ADDR);
      count_played =count +nwrite;
      outl(AUDIO_COUNT_ADDR,count_played);
}

