#include "Shape.h"
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>

using namespace std;

SDL_Window* window = nullptr;
SDL_Renderer* renderer = nullptr;
SDL_Event e;

int main(int argc, char* argv[]) {

    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Rect rectangle{ 10, 10, 250, 250 };
    SDL_CreateWindowAndRenderer(1280, 720, 0, &window, &renderer);

    // Load an image
    SDL_Surface* imageSurface = IMG_Load("C:/Users/User/Desktop/cat.png");
    if (imageSurface == nullptr) {
        cerr << "Failed to load image: " << endl;
        return -1;
    }

    SDL_Texture* imageTexture = SDL_CreateTextureFromSurface(renderer, imageSurface);
    SDL_FreeSurface(imageSurface);

    // dimensions of the window
    int windowWidth, windowHeight;
    SDL_GetWindowSize(window, &windowWidth, &windowHeight);

    // centered image
    rectangle.x = (windowWidth - rectangle.w) / 2;
    rectangle.y = (windowHeight - rectangle.h) / 2;

    bool running = true;
    while (running) {
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
                running = false;
            }
            if (e.type == SDL_KEYDOWN) {
                cout << "Pressed key!" << endl;

                if (e.key.keysym.sym == SDLK_RIGHT) {
                    cout << "right pressed" << endl;
                    rectangle.x += 25;
                }
                else if (e.key.keysym.sym == SDLK_LEFT) {
                    cout << "left pressed" << endl;
                    rectangle.x -= 25;
                }
                else if (e.key.keysym.sym == SDLK_UP) {
                    cout << "up pressed" << endl;
                    rectangle.y -= 25;
                }
                else if (e.key.keysym.sym == SDLK_DOWN) {
                    cout << "down pressed" << endl;
                    rectangle.y += 25;
                }
            }

            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderClear(renderer);

            // Render the image texture
            SDL_RenderCopy(renderer, imageTexture, nullptr, &rectangle);

            SDL_RenderPresent(renderer);
            //SDL_Delay(10);
        }
    }

    SDL_DestroyTexture(imageTexture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}