
#include <SDL.h>
#include <SDL_image.h>
#include "Game.h"

#include <string>
#include <vector>
#include <iostream>

using namespace std;


int main(int argc, char* argv[]) {

    Game game;

    bool quit = false;
    SDL_Event e;
    while (!quit) {
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        SDL_RenderCopy(game.getRenderer(), game.getBackgroundTexture(), nullptr, nullptr);
        game.renderCardVector(game.getRedCardVect(), 90, 150, 0);
        game.renderCardVector(game.getBlackCardVect(), 90, 450, 0);
        SDL_RenderPresent(game.getRenderer());
    }

    return 0;
}