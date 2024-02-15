#include "Shape.h"
#include <SDL.h>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Error on init! %s ", SDL_GetError());
        return -1;
    }

    SDL_Window* window = SDL_CreateWindow("Empty Rectangle", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    if (window == nullptr || renderer == nullptr) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Error window / renderer %s", SDL_GetError());
        return -1;
    }

    int x = 100;
    int y = 100;
    int width = 200;
    int height = 150;
    int thickness = 5;

    // Set the drawing color to white and clear the screen
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);

    // Set the drawing color to black and draw the shape
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    Shape rectShape(renderer, x, y, width, height, thickness);
    rectShape.draw(renderer);

    SDL_RenderPresent(renderer);

    // Main loop
    bool quit = false;
    SDL_Event e;
    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }
    }

    // Cleanup
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;

    return 0;
}