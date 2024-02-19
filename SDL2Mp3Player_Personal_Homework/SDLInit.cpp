#include "SDLInit.h"
#include <SDL_mixer.h>
#include <SDL.h>

static SDLInit* sdlSound = nullptr;

void SDLInit::initSDLSound()
{
    if (sdlSound) {
        return;
    }
    sdlSound = new SDLInit();
}

SDLInit::SDLInit()
{
    SDL_Init(SDL_INIT_AUDIO);

    int audio_rate = 22050;
    Uint16 audio_format = AUDIO_S16SYS;
    int audio_channels = 2;
    int audio_buffers = 4096;

    if (Mix_OpenAudio(audio_rate, audio_format, audio_channels, audio_buffers) != 0) {
        cout << "Cant't init audio! << endl;
        exit(-1);
    } 
    else {
        mSoundInitilized = true;
    }
}

SDLInit::~SDLInit()
{
    SDL_Quit();
}
