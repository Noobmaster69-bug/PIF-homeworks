/* tips:byte 0->3:"RIFF"
        byte 4->7:file size
        byte 8->11:"WAVE"
        byte 12->15:"fmt"
        byte 16->19: format chunk
        byte 20->21: PCM format
        byte 22->23: number of channels
        byte 24->27: sample rate
        byte 28->31: byte per second
        byte 32->33: byte per sample
        byte 34->35: bits per sample 
        byte 36->39:"data"
        byte 40->43: audio size
*/
#include <stdio.h>
typedef struct{
    char RIFF[4];
    int file_size;
    char WAVE[4];
    char ftm[4];
    int format_chunk;
    short int PCM_format;
    short int channels;
    int sample_rate;
    int byte_per_second;
    short int byte_per_sample;
    short int bits_per_sample;
    char data[4];
    int audio_size;
} wav;
void main(){
    wav file1;
    FILE* fptr;
    fptr =fopen("file_example_WAV_1MG.wav","r");
    fread(&file1,sizeof(wav),1,fptr);
    printf("Sample rate: %d\n",file1.sample_rate);
    printf("Bits per sample: %d\n",file1.bits_per_sample);
    printf("Number of channels: %d",file1.channels);
    fclose(fptr);
}
