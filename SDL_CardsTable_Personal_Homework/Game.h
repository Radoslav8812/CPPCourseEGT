#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include <string>

#include <SDL.h>
#include <SDL_image.h>

using namespace std;

class Game {

private:
    SDL_Renderer* renderer;
    SDL_Window* window;
    SDL_Texture* backgroundTexture;

    SDL_Texture* loadTexture(const string& imagePath);
   
    vector<string> blackCardVect;
    vector<string> redCardVect;

public:
    Game();
    ~Game();

    void renderCardVector(const vector<string>& cardVector, int startX, int startY, int yOffset);

    SDL_Renderer* getRenderer() const;
    SDL_Texture* getBackgroundTexture() const;

    const vector<string>& getBlackCardVect() const;
    const vector<string>& getRedCardVect() const;
};

#endif // GAME_H
