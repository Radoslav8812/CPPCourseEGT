
#include "SpriteSheet.h"


SpriteSheet::SpriteSheet() : screen_width(640), screen_height(480), sprite_size(190), rows(4), columns(4) {

	window = nullptr;
	render = nullptr;
	spriteSheet = nullptr;
	currentFrame = 0;
}

bool SpriteSheet::init() {

	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {

		cout << "Error on SDL Init!" << endl;
		return false;
	}

	window = SDL_CreateWindow("SDL Sprite Sheets", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, screen_width, screen_height, SDL_WINDOW_SHOWN);
	if (window == nullptr) {
		cout << "Error on window init" << endl;
		return false;
	}

	render = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	if (render == nullptr) {
		cout << "Error on renderer" << endl;
		return false;
	}

	return true;
}

bool SpriteSheet::loadMedia() {

	SDL_Surface* loadedSurface = IMG_Load("C:/Users/User/Desktop/spritesheet.png");
	if (loadedSurface == nullptr) {
		cout << "Error on laod images" << endl;
		return false;
	}

	spriteSheet = SDL_CreateTextureFromSurface(render, loadedSurface);
	if (spriteSheet == nullptr) {
		cout << "Error on textureFromService" << endl;
		return false;
	}

	SDL_FreeSurface(loadedSurface);
	return true;
}

void SpriteSheet::renderFrame() {

	SDL_RenderClear(render);
		     // range 0 to -1            // horizontal position ensure
	int X = (currentFrame % columns) * sprite_size;
	// which roll of sheet current frame is in. // vectical position ensure
	int Y = (currentFrame / columns) * sprite_size;

	SDL_Rect xyRect = { X, Y, sprite_size, sprite_size };
	SDL_Rect destinationRect = { 0, 0, screen_width, screen_height };

	SDL_RenderCopy(render, spriteSheet, &xyRect, &destinationRect);
	SDL_RenderPresent(render);

	currentFrame = (currentFrame + 1) % (rows * columns);
}

void SpriteSheet::run() {

	SDL_Event e;
	bool quit = false;

	while (!quit) {
		while (SDL_PollEvent(&e) != 0) {
			if (e.type == SDL_QUIT) {
				quit = true;
			}
		}

		renderFrame();
		SDL_Delay(16); // Adjust the delay to control frame rate (16 milliseconds for 60 fps)
	}

	close();
}

void SpriteSheet::close() {

	SDL_DestroyTexture(spriteSheet);
	SDL_DestroyRenderer(render);
	SDL_DestroyWindow(window);

	IMG_Quit();
	SDL_Quit();
}

SpriteSheet:: ~SpriteSheet() {

	cout << " - destructor - " << endl;
	close();
}