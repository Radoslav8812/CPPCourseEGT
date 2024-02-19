#include <SDL.h>
#include <SDL_image.h>

#include <iostream>
using namespace std;

const int WINDOW_WIDTH = 640;
const int WINDOW_HEIGHT = 480;

struct ImageInfo {
	SDL_Texture* texture;
	bool isVisible;
};

void drawImage(SDL_Renderer* renderer, ImageInfo& imageInfo, int x, int y, int width, int height) {

	if (imageInfo.isVisible) {
		SDL_Rect rect = { x, y, width, height };
		SDL_RenderCopy(renderer, imageInfo.texture, NULL, &rect);
	}
}

int main(int argc, char* args[]) {

	if (SDL_Init(SDL_INIT_VIDEO) != 0) {
		cerr << "SDL initialization failed: " << SDL_GetError() << endl;
		return 1;
	}
	if (IMG_Init(IMG_INIT_PNG) != IMG_INIT_PNG) {
		cerr << "Image initialization failed: " << IMG_GetError() << endl;
		SDL_Quit();
		return 1;
	}
	SDL_Window* window = SDL_CreateWindow("SDL Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
	if (!window) {
		cerr << "Window failed: " << endl;
		SDL_Quit();
		return 1;
	}

	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (!renderer) {
		cerr << "Renderer failed: " << SDL_GetError() << std::endl;
		SDL_DestroyWindow(window);
		SDL_Quit();
		return 1;
	}

	int pieceWidth = WINDOW_WIDTH / 2;
	int pieceHeight = WINDOW_HEIGHT / 2;

	// image for each quadrant
	ImageInfo images[4];
	for (int i = 0; i < 4; i++) {

		if (i == 0) {
			images[i].texture = IMG_LoadTexture(renderer, "C:/Users/User/Desktop/1.png");
			images[i].isVisible = false;
		}
		else if (i == 1) {
			images[i].texture = IMG_LoadTexture(renderer, "C:/Users/User/Desktop/2.png");
			images[i].isVisible = false;
		}
		else if (i == 2) {
			images[i].texture = IMG_LoadTexture(renderer, "C:/Users/User/Desktop/3.png");
			images[i].isVisible = false;
		}
		else if (i == 3) {
			images[i].texture = IMG_LoadTexture(renderer, "C:/Users/User/Desktop/4.png");
			images[i].isVisible = false;
		}

	}

	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);

	bool quit = false;
	SDL_Event event;

	while (!quit) {
		while (SDL_PollEvent(&event)) {

			if (event.type == SDL_QUIT) {
				quit = true;
			}
			else if (event.type == SDL_MOUSEBUTTONDOWN) {
				if (event.button.button == SDL_BUTTON_LEFT) {
					int mouseX = event.button.x;
					int mouseY = event.button.y;

					// Check is quadrant clicked
					int quadrant = (mouseX / pieceWidth) + 2 * (mouseY / pieceHeight);

					// reverse visibility of a quadrant
					images[quadrant].isVisible = !images[quadrant].isVisible;

					SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
					SDL_RenderClear(renderer);

					// draw images in each quadrant
					for (int i = 0; i < 4; i++) {
						drawImage(renderer, images[i], (i % 2) * pieceWidth, (i / 2) * pieceHeight, pieceWidth, pieceHeight);
					}

					SDL_RenderPresent(renderer);
				}
			}
		}
	}

	for (int i = 0; i < 4; ++i) {
		SDL_DestroyTexture(images[i].texture);
	}

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	IMG_Quit();
	SDL_Quit();

	return 0;
}
