#include "SDL2Music.h"
#include "SDLInit.h"
#include <SDL.h>

SDL2Music::SDL2Music()
{
    SDLInit::initSDLSound();
}

void SDL2Music::addMusicTrack(const char* path)
{
    Mix_Music* tmp_music = Mix_LoadMUS(path);

    if (tmp_music != nullptr) {
        musicVect.push_back(tmp_music);
    }
    else {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't load audio: %s", Mix_GetError());
    }
}

void SDL2Music::playMusicTrack(const int which)
{
    if (which > musicVect.size()) {
        
        return;
    }

    Mix_PlayMusic(musicVect.at(which), -1);
    mPlaying = true;
}

void SDL2Music::Play_Pause()
{
    if (mPlaying && !mPaused) {
        Mix_PauseMusic();
        mPaused = true;
    } 
    else if (mPlaying && mPaused){
        Mix_ResumeMusic();
        mPaused = false;
    }
}