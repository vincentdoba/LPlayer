#include <stdio.h>
#include <libavformat/avformat.h>
//#include <libavcodec/avcodec.h>

//int16_t *current_sample_array;
size_t size;
int nSamples;
int sample_rate;
int nb_bytes_per_sample;
int8_t *current_sample_array;
int debug;
int channels;
int cli;
int planar;

struct song {
	int duration;
	int seconds;
	int minutes;
	char *artist;
	char *title;
	char *album;
};

struct song current_song;

float amp_sort(int16_t* array);
float envelope_sort(int16_t* array);
int8_t* audio_decode(int8_t*array, const char *file);
int analyze(char *filename);
float freq_sort(int16_t *array);
int gui(int argc, char **argv);
