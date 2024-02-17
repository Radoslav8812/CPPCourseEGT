//Game.h
#pragma once
#include <SDL.h>
#include <SDL_ttf.h>
#include <SDL_image.h>

#include <iostream>
using namespace std;

class Game {

private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Texture* imageTexture;
    int xPos;
    int xSpeed;
    bool quit;

public:
    Game();
    ~Game();

    void run();

    bool initialize();
    void loadContent();
    void processInput();
    void update();
    void render();
    void cleanup();
};