#include "Rectangle.h"

Rectangle::Rectangle(string color, double width, double height) : Shape(color), width(width), height(height) {

}

void Rectangle::draw() {
	Shape::draw();
	cout << this->color << endl;
}

double Rectangle::area() {
	return width * height;
}

Rectangle::~Rectangle() {

}