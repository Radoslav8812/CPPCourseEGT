#include "Game.h"

Game::Game() : window(nullptr), renderer(nullptr), imageSurface(nullptr), texture(nullptr),
                imageWidth(0), imageHeight(0), x(0), y(0), speed(50) {
    initSDL();
    loadTexture();
}

Game::~Game() {
    cleanup();
}

void Game::initSDL() {

    SDL_Init(SDL_INIT_EVERYTHING);

    window = SDL_CreateWindow("Moving Image", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1280, 720, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    if (window == nullptr || renderer == nullptr) {

        cerr << "Failed to initialize SDL: " << SDL_GetError() << endl;
        cleanup();
        exit(1);
    }
}

void Game::loadTexture() {

    const char* imagePath = "C:/Users/User/Desktop/2.png"; 
    imageSurface = IMG_Load(imagePath);

    if (imageSurface == nullptr) {
        
        cerr << "Failed image loading! " << endl;
        cleanup();
        exit(1);
    }

    texture = SDL_CreateTextureFromSurface(renderer, imageSurface);
    SDL_FreeSurface(imageSurface);

    if (texture == nullptr) {
        cerr << "Failed to create texture: " << SDL_GetError() << endl;
        cleanup();
        exit(1);
    }

    SDL_QueryTexture(texture, nullptr, nullptr, &imageWidth, &imageHeight);

    x = (1280 - imageWidth) / 2;
    y = (720 - imageHeight) / 2;
}

void Game::run() {

    bool running = true;
    SDL_Event e;

    while (running) {
        while (SDL_PollEvent(&e)) {

            if (e.type == SDL_QUIT) {
                running = false;
            }
            else if (e.type == SDL_KEYDOWN) {
                updatePosition(e);
            }
        }

        render();
        SDL_Delay(10);
    }
}

void Game::updatePosition(SDL_Event& e) {

    if (e.key.keysym.sym == SDLK_RIGHT) {
        x = min(x + speed, 1280 - imageWidth);
    }
    if (e.key.keysym.sym == SDLK_LEFT) {
        x = max(x - speed, 0);
    }
    if (e.key.keysym.sym == SDLK_UP) {
        y = max(y - speed, 0);
    }
    if (e.key.keysym.sym == SDLK_DOWN) {
        y = min(y + speed, 720 - imageHeight);
    }
}

void Game::render() {

    SDL_RenderClear(renderer);
    // Render updated texture  
    SDL_Rect destinationRect = { x, y, imageWidth, imageHeight };
    SDL_RenderCopy(renderer, texture, nullptr, &destinationRect);

    SDL_RenderPresent(renderer);
}

void Game::cleanup() {

    if (texture) {
        SDL_DestroyTexture(texture);
    }
    if (renderer) {
        SDL_DestroyRenderer(renderer);
    }
    if (window) {
        SDL_DestroyWindow(window);
    }

    IMG_Quit();
    SDL_Quit();
}