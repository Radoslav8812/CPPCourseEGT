#include <SDL.h>
#include <SDL_image.h>

#include <iostream>
using namespace std;

const int SCREEN_WIDTH = 480;
const int SCREEN_HEIGHT = 480;

SDL_Window* gWindow = nullptr;
SDL_Renderer* gRenderer = nullptr;
SDL_Texture* chessboardTexture = nullptr;

using namespace std;

bool initializeSDL()
{
    // 4 checks
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        cerr << "SDL failed: " << SDL_GetError() << endl;
        return false;
    }

    gWindow = SDL_CreateWindow("Chessboard", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (gWindow == nullptr)
    {
        cerr << "Window failed: " << SDL_GetError() << endl;
        return false;
    }

    gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);
    if (gRenderer == nullptr)
    {
        cerr << "Renderer creation failed: " << SDL_GetError() << endl;
        return false;
    }

    int imgFlags = IMG_INIT_PNG;
    if (!(IMG_Init(imgFlags) & imgFlags))
    {
        cerr << "SDL_image failed: " << IMG_GetError() << endl;
        return false;
    }

    return true;
}

bool loadMedia()
{
    SDL_Surface* chessboardSurface = IMG_Load("C:/Users/User/Desktop/VS CPP Projects/ChessSDL/Chess_Board.png");
    if (chessboardSurface == nullptr)
    {
        cerr << "Failed to load chessboard image: " << IMG_GetError() << std::endl;
        return false;
    }

    chessboardTexture = SDL_CreateTextureFromSurface(gRenderer, chessboardSurface);
    SDL_FreeSurface(chessboardSurface);

    if (chessboardTexture == nullptr)
    {
        cerr << "Failed to create texture from surface: " << SDL_GetError() << endl;
        return false;
    }

    return true;
}

void closeSDL()
{
    SDL_DestroyTexture(chessboardTexture);
    SDL_DestroyRenderer(gRenderer);
    SDL_DestroyWindow(gWindow);

    IMG_Quit();
    SDL_Quit();
}

int main(int argc, char* args[])
{
    if (!initializeSDL())
    {
        cerr << "SDL initialization failed. Exiting..." << endl;
        return -1;
    }

    if (!loadMedia())
    {
        cerr << "Failed to load media. Exiting..." << endl;
        closeSDL();
        return -1;
    }

    SDL_Event e;
    bool quit = false;

    while (!quit)
    {
        while (SDL_PollEvent(&e) != 0)
        {
            if (e.type == SDL_QUIT)
            {
                quit = true;
            }
        }

        SDL_RenderClear(gRenderer);
        SDL_RenderCopy(gRenderer, chessboardTexture, nullptr, nullptr);
        SDL_RenderPresent(gRenderer);
    }

    closeSDL();
    return 0;
}