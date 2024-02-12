#include <SDL.h>
#include <SDL_mixer.h>
#include "SDL2Music.h"

#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {

	SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;
	SDL_Event e;
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Rect rectanle{ 10, 10, 250, 250 };

	SDL_CreateWindowAndRenderer(1280, 720, 0, &window, &renderer);

	bool runnig = true;
	while (runnig) {
		while (SDL_PollEvent(&e)) {

			if (e.type == SDL_QUIT) {
				runnig = false;
			}
			if (e.type == SDL_KEYDOWN) {
				cout << "Pressed key!" << endl;

				if (e.key.keysym.sym == SDLK_RIGHT) {
					cout << "right pressed" << endl;
					rectanle.x += 25;
				}
				else if (e.key.keysym.sym == SDLK_LEFT) {
					cout << "left ressed" << endl;
					rectanle.x -= 25;
				}
				else if (e.key.keysym.sym == SDLK_UP) {
					cout << "up ressed" << endl;
					rectanle.y -= 25;
				}
				else if (e.key.keysym.sym == SDLK_DOWN) {
					cout << "down ressed" << endl;
					rectanle.y += 25;
				}
			}

			SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
			SDL_RenderClear(renderer);

			SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
			SDL_RenderFillRect(renderer, &rectanle);

			SDL_RenderPresent(renderer);
			SDL_Delay(10);
		}
	}

	return 0;
}

