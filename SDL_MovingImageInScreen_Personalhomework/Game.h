#pragma once
#include <iostream>
#include <SDL.h>
#include <SDL_image.h>

using namespace std;

class Game {

private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Surface* imageSurface;
    SDL_Texture* texture;

    int imageWidth;
    int imageHeight;
    int x;
    int y;
    int speed;

public:
    Game();
    ~Game();

    void initSDL();
    void loadTexture();
    //void handleEvents(SDL_Event& e);
    void updatePosition(SDL_Event& e);
    void render();
    void cleanup();

    void run();
};