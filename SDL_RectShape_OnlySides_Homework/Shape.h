#include <SDL.h>
#include <iostream>
using namespace std;

class Shape {

private:
	int x;
	int y;
	int width;
	int height;
	int thickness;	

public:
	Shape(SDL_Renderer* renderer, int x, int y, int width, int height, int thickness);

	void draw(SDL_Renderer* renderer);
};