#pragma once
#include <vector>
#include <SDL_mixer.h>

using namespace std;

class SDL2Music
{

private:
	vector<Mix_Music*> m_Musics;

	bool mPaused = false;
	bool mPlaying = false;

public:

	SDL2Music();
	
	void addMusicTrack(const char* path);
	void playMusicTrack(const int which);
	void Play_Pause();
};

