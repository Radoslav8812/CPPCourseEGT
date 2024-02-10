#pragma once


class SDLInit
{

private:
	bool m_SoundInitilized = false;

public:
	static void initSDLSound();

	SDLInit();
	~SDLInit();
};

