#ifndef _MAIN_H_
#define _MAIN_H_

#define TV_WIDTH 292

void NstPlayGame();
void NstPlayNsf();
void NstStopNsf();
void NstScheduleQuit();
void NstStopPlaying();
void NstReset();
bool NstIsPlaying();
bool NstIsLoaded();
void NstLoadGame(const char* filename);
void NstLaunchConfig();

void get_screen_res();
void ToggleFullscreen();
void FlipFDSDisk();
void SwitchFDSDisk();
void print_fds_info();
void print_message(char* message);

#endif
