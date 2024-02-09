#include <iostream>
#include <string>

#include "SDL.h"
using namespace std;

int main(int argc, char* argv[]) {

	// first initialize SDL 
	SDL_Init(SDL_INIT_EVERYTHING);
	// creating a window in the center of screen with size 600x400 px and show it
	SDL_Window *window = SDL_CreateWindow("Try Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
	// use sdl render to draw a graphic into window with default parameters
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
	// set green color (without transperanty)
	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);

	SDL_RenderClear(renderer);
	// display renderer content in the window
	SDL_RenderPresent(renderer);
	// set delay of 3000ms(equal to 3 sec) to keep window open, before program exit.
	SDL_Delay(3000);

	return 0;
}