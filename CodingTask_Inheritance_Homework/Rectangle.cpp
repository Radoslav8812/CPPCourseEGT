
#include "Rectangle.h"

Rectangle::Rectangle(string color) : Shape(color) {

}

void Rectangle::draw() {
	Shape::draw();
	cout << this -> color << endl;
}

Rectangle::~Rectangle() {

}