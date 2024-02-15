
#include "Shape.h"

Shape::Shape(SDL_Renderer* renderer, int x, int y, int width, int height, int thickness): x(x), y(y), width(width), height(height), thickness(thickness) {

	
}

void Shape::draw(SDL_Renderer* renderer) {
    
    // sides - black
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

    //top side
    SDL_Rect topRect = { x, y, width, thickness };
    SDL_RenderFillRect(renderer, &topRect);

    // bottom side
    SDL_Rect bottomRect = { x, y + height - thickness, width, thickness };
    SDL_RenderFillRect(renderer, &bottomRect);

    // left side
    SDL_Rect leftRect = { x, y, thickness, height };
    SDL_RenderFillRect(renderer, &leftRect);

    // right side
    SDL_Rect rightRect = { x + width - thickness, y, thickness, height };
    SDL_RenderFillRect(renderer, &rightRect);
}