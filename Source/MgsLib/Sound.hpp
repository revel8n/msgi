#pragma once

#include "MgsFunction.hpp"
#include <mmsystem.h>
#include <mmreg.h>
#include <dsound.h>

signed int __cdecl Sound_Init(HWND hwnd);
char __cdecl Sound_CharUpperChangeQ(char value);
signed int __cdecl Sound_CleanUpRelated();
int __cdecl Sound_CloseWavStopQ();
signed int __cdecl Sound_CreateBufferQ(int numChannels, signed int bitsPerSample, int samplesPerSecond, int a4, int a5);
bool __cdecl Sound_CreatePrimarySoundBuffer();
signed int __cdecl Sound_CreateSecondarySoundBuffer();
__int64 __cdecl Sound_FadeQ(int a1);
bool __cdecl Sound_GetSamp1PosQ();
int __cdecl Sound_GetSomeStateQ();
int __cdecl Sound_InitFx();
signed int __cdecl Sound_LoadBufferFromFile(const char *fileName);
// signed int __cdecl Sound_LoadFxRelatedQ(const char *Str1)
// bool __cdecl Sound_LoadFxRelatedQ2(const char *Str1)
// signed int __cdecl Sound_MxdWavRelated(signed int a1)
int __cdecl Sound_PlaySample();
void __cdecl Sound_PlaySampleRelated(IDirectSoundBuffer* pSoundBuffer, int a2, int a3, signed int a4);
// void __cdecl Sound_PopulateBufferQ()
// int __cdecl Sound_ReleaseBufferQ()
// int __cdecl Sound_ReleaseSecondaryBuffer()
// signed int __cdecl Sound_RestoreRelatedQ(int a1, int (__cdecl *a2)(_DWORD), int (__cdecl *a3)(_DWORD))
//signed int __cdecl Sound_Samp1Related(void *a1, unsigned int a2, IDirectSoundBuffer *snd, int a4)
// signed int __cdecl Sound_Samp1Related_2(void *a1, unsigned int a2)
// signed int __cdecl Sound_ShutDown()
// signed int __cdecl Sound_Start2SamplesQ(_BYTE *a1)
signed int __cdecl Sound_Stop2Samples();
int __cdecl Sound_StopSample();
int __cdecl Sound_TableUnknown1(int a1, int rate, int vol);
// int __cdecl Sound_Unknown1(int a1)
// int __cdecl Sound_Unknown2(int a1)
// bool __cdecl Sound_Unknown3(unsigned __int8 idx, int a2, int a3)
// bool __cdecl Sound_Unknown4()
// int __cdecl Sound_Unknown5(int a1, int a2, int (__cdecl *a3)(_DWORD))
// int __cdecl Sound_Unknown6()
// void Sound_music_relatedQ()
// int __cdecl Sound_music_set()
// _BYTE *__cdecl Sound_set_noise_sound(int a2)