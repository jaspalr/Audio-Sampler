// Playback sounds in real time, allowing multiple simultaneous wave files
// to be mixed together and played without jitter.
#ifndef BEAT_H
#define BEAT_H

#include <pthread.h>
#include "audioMixer_template.h"
#include "../Utility.h"

#define MIN_BPM 40
#define MAX_BPM 300

#define MAX_BEAT_SET 4
#define MAX_SOUND_SET 4
extern wavedata_t presetSound[MAX_SOUND_SET];

#define DIR_PREFIX "/mnt/remote/myApps/"

#define TEST DIR_PREFIX "final-wav-files/test.wav"
#define FREQ_TESTER DIR_PREFIX "final-wav-files/freqTester_old.wav"
#define DRUM_BD_HARD DIR_PREFIX "final-wav-files/100051__menegass__gui-drum-bd-hard.wav"
#define DRUM_CC DIR_PREFIX "final-wav-files/100053__menegass__gui-drum-cc.wav"
#define DRUM_SNARE_SOFT DIR_PREFIX "final-wav-files/100059__menegass__gui-drum-snare-soft.wav"

#define UPLOADED_WAVE_FILE "/tmp/final-wav-files/uploaded.wav"


//thread
void startBeatController();
void clearBeatController();

//functions
void* startBeat();
bool playASound(int index);
void initialUploadWave();

// set/get settings
bool setBPM(int bpm);
int getBPM();
int getBPMms(double beat);
void switchBeatSetting();
bool setBeatSetting(int setting);
int getBeatSetting();
#endif