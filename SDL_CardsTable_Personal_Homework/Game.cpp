#include "Game.h"

Game::Game() : window(nullptr), renderer(nullptr), backgroundTexture(nullptr) {

    window = SDL_CreateWindow("Card Display", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, 0);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    backgroundTexture = loadTexture("C:/Users/User/Desktop/1 vs 1 Card Game/CasinoTable.JPG");

    blackCardVect = {
        "C:/Users/User/Desktop/1 vs 1 Card Game/blackCards/black2.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/blackCards/black3.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/blackCards/black4.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/blackCards/black5.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/blackCards/black6.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/blackCards/black7.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/blackCards/black8.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/blackCards/black9.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/blackCards/black10.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/blackCards/blackJ.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/blackCards/blackQ.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/blackCards/blackK.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/blackCards/blackA.png"
    };

    redCardVect = {
        "C:/Users/User/Desktop/1 vs 1 Card Game/redCards/red2.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/redCards/red3.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/redCards/red4.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/redCards/red5.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/redCards/red6.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/redCards/red7.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/redCards/red8.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/redCards/red9.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/redCards/red10.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/redCards/redJ.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/redCards/redQ.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/redCards/redK.png",
        "C:/Users/User/Desktop/1 vs 1 Card Game/redCards/redA.png"
    };
}


SDL_Texture* Game::loadTexture(const string& imagePath) {

    SDL_Surface* surface = IMG_Load(imagePath.c_str());
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);

    SDL_FreeSurface(surface);
    return texture;
}

void Game::renderCardVector(const vector<string>& cardVector, int startX, int startY, int yOffset) {

    int cardWidth = 80;
    int cardHeight = 120;
    int spacing = 5;

    for (int i = 0; i < cardVector.size(); ++i) {
        // x coordinate for each card in row
        int x = startX + i * (cardWidth + spacing);
        // column / vertical position
        int y = startY;

        SDL_Texture* cardTexture = loadTexture(cardVector[i]); // loadTexture to load texture of the card from file path
        if (cardTexture) {
            SDL_Rect destRect = { x, y, cardWidth, cardHeight }; // destination for draw
            SDL_RenderCopy(renderer, cardTexture, nullptr, &destRect); // copy texture to the dest rect on renderer

            SDL_DestroyTexture(cardTexture); // free memory , after operation of rendering
        }
    }
}

SDL_Renderer* Game::getRenderer() const {
    return this -> renderer;
}

SDL_Texture* Game::getBackgroundTexture() const {
    return this -> backgroundTexture;
}

const vector<string>& Game::getBlackCardVect() const {
    return this -> blackCardVect;
}

const vector<string>& Game::getRedCardVect() const {
    return redCardVect;
}
Game::~Game() {
    SDL_DestroyTexture(backgroundTexture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    IMG_Quit();
    SDL_Quit();
}

