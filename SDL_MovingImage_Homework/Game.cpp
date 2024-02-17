#include "game.h"

using namespace std;

Game::Game() : window(nullptr), renderer(nullptr), imageTexture(nullptr), xPos(0), xSpeed(5), quit(false) {}

Game::~Game() {
    cleanup();
}

bool Game::initialize() {

    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        cout << "sdl init err" << endl;
        return false;
    }

    window = SDL_CreateWindow("SDL Image Loading", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);
    if (window == nullptr) {
        cout << "Error on create window" << endl;
        SDL_Quit();
        return false;
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (renderer == nullptr) {
        cout << "Error on create render" << endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return false;
    }

    return true;
}

void Game::loadContent() {

    SDL_Surface* image = IMG_Load("C:/Users/User/Desktop/3.PNG");
    if (image == nullptr) {
        cerr << " IMG_Load Error " << endl;
        cleanup();
        quit = true;
        return;
    }

    imageTexture = SDL_CreateTextureFromSurface(renderer, image);
    SDL_FreeSurface(image);

    if (imageTexture == nullptr) {
        cout << "SDL_CreateTextureFromSurface Error " << endl;
        cleanup();
        quit = true;
    }
}

void Game::processInput() {

    SDL_Event e;
    while (SDL_PollEvent(&e) != 0) {
        if (e.type == SDL_QUIT) {
            quit = true;
        }
    }
}

void Game::update() {

    xPos += xSpeed;

    if (xPos + 140 > 800 || xPos < 0) {
        xSpeed = -xSpeed;

        if (xSpeed > 0) {
            xSpeed += 1;
        }
        else {
            xSpeed -= 1;
        }
    }
}

void Game::render() {

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

void Game::cleanup() {
    SDL_DestroyTexture(imageTexture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void Game::run() {

    if (!initialize()) {
        cout << "Initialization failed!" << endl;
        return;
    }

    loadContent();

    while (!quit) {
        processInput();
        update();
        render();
    }

    cleanup();
}