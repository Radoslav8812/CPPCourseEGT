#include <SDL.h>
#include <SDL_image.h>

#include <iostream>
using namespace std;

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int SPRITE_SIZE = 190;
const int ROWS = 4;
const int COLUMNS = 4;

SDL_Window* window = nullptr;
SDL_Renderer* render = nullptr;
SDL_Texture* spriteSheet = nullptr;

bool init();
bool loadMedia();
void close();

int main(int argc, char* args[]) {

    if (!init() || !loadMedia()) {
        printf("Failed to initialize or load media!\n");
        close();
        return -1;
    }

    SDL_Event e;
    bool quit = false;
    int currentFrame = 0;

    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        SDL_RenderClear(render);

        // position of the current frame
        int srcX = (currentFrame % COLUMNS) * SPRITE_SIZE;
        int srcY = (currentFrame / COLUMNS) * SPRITE_SIZE;

        // Render the current frame
        SDL_Rect srcRect = { srcX, srcY, SPRITE_SIZE, SPRITE_SIZE };
        SDL_Rect destRect = { 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT };

        SDL_RenderCopy(render, spriteSheet, &srcRect, &destRect);
        SDL_RenderPresent(render);

        // increment the frame counter
        currentFrame = (currentFrame + 1) % (ROWS * COLUMNS);

        SDL_Delay(1000);
    }
    close();
    return 0;
}

bool init() {

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        
        cerr << "SDL Init Eroor! " << endl;
        return false;
    }
    window = SDL_CreateWindow("SDL Animation", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == nullptr) {
        cout << "Window Error!" << endl;
        return false;
    }

    render = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (render == nullptr) {
        cout << "Renderer Error!" << endl;
        return false;
    }

    return true;
}

bool loadMedia() {
    SDL_Surface* loadedSurface = IMG_Load("C:/Users/User/Desktop/spritesheet.png");

    if (loadedSurface == nullptr) {
        
        cerr << "Unable to load image" << endl;
        return false;
    }

    spriteSheet = SDL_CreateTextureFromSurface(render, loadedSurface);
    if (spriteSheet == nullptr) {

        cout << "Error at image texture!" << endl;
        return false;
    }

    SDL_FreeSurface(loadedSurface);
    return true;
}

void close() {
    SDL_DestroyTexture(spriteSheet);
    SDL_DestroyRenderer(render);
    SDL_DestroyWindow(window);

    IMG_Quit();
    SDL_Quit();
}
