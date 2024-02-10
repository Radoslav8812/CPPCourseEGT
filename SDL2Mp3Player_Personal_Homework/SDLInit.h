#pragma once


class SDLInit
{

private:
	bool mSoundInitilized = false;

public:
	static void initSDLSound();

	SDLInit();
	~SDLInit();
};

