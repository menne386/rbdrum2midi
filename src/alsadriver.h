//ssj71
#ifndef ALSADRIVER_H
#define ALSADRIVER_H
#include <alsa/asoundlib.h>
#include <alsa/seq.h>

typedef struct _aseq{
    snd_seq_t *g_seq;
    int g_port;
}ALSA_SEQ;

int init_alsa(ALSA_SEQ* seq, unsigned char verbose);
void close_alsa(ALSA_SEQ* seq);
void noteup_alsa(void* seqq, unsigned char chan, unsigned char note, unsigned char vel);
void notedown_alsa(void* seqq, unsigned char chan, unsigned char note, unsigned char vel);
void pitch_alsa(void* seqq, unsigned char chan, short val);
void control_alsa(void* seqq, unsigned char chan, unsigned char indx, unsigned char val);
void prog_alsa(void* seqq, unsigned char chan, unsigned char indx);

#endif
