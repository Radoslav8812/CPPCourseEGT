#include <SDL.h>
#include <SDL_image.h>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        cerr << "SDL_Init Error: " << SDL_GetError() << endl;
        return 1;
    }
    SDL_Window* window = SDL_CreateWindow("SDL Image Loading", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);
    if (window == nullptr) {
        cerr << "SDL_CreateWindow Error: " << SDL_GetError() << endl;
        SDL_Quit();
        return 1;
    }

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (renderer == nullptr) {
        cerr << "SDL_CreateRenderer Error: " << SDL_GetError() << endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }
    // Load image
    SDL_Surface* image = IMG_Load("C:/Users/User/Desktop/logo.PNG");
    if (image == nullptr) {
        cerr << "IMG_Load Error: " << IMG_GetError() << endl;
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }
    SDL_Texture* imageTexture = SDL_CreateTextureFromSurface(renderer, image);
    SDL_FreeSurface(image);
    if (imageTexture == nullptr) {
        cerr << "SDL_CreateTextureFromSurface Error: " << SDL_GetError() << endl;
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    int xPos = 0; // position
    int xSpeed = 2; // speed

    bool quit = false;
    SDL_Event e;
    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        xPos += xSpeed;
        // Check if reached the right or left edge of the window, than reverse direction of image
        if (xPos + 140 > 800 || xPos < 0) {
            xSpeed = -xSpeed;

            if (xSpeed > 0) {
                xSpeed += 1;
            }
            else {
                xSpeed -= 1;
            }  
        }

        SDL_RenderClear(renderer);

        SDL_Rect destinationRect;
        destinationRect.x = xPos;
        destinationRect.y = 0;
        destinationRect.w = 140;
        destinationRect.h = 140;

        SDL_RenderCopy(renderer, imageTexture, nullptr, &destinationRect);
        SDL_RenderPresent(renderer);
        SDL_Delay(5);
    }

    SDL_DestroyTexture(imageTexture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}


