
#pragma once

#ifndef SPRITESHEET_H
#define SPRITESHEET_H

#include <SDL.h>
#include <SDL_image.h>

#include <iostream>
using namespace std;

class SpriteSheet {

private:
	int screen_width;
	int screen_height;
	int sprite_size;
	int rows;
	int columns;

	SDL_Window* window;
	SDL_Renderer* render;
	SDL_Texture* spriteSheet;
	int currentFrame;

public:
	SpriteSheet();
	~SpriteSheet();

	bool init();
	bool loadMedia();
	void renderFrame();
	void run();
	void close();

};

#endif // SPRITESHEET_H