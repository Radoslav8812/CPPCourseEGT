
#include "Rectangle.h"

Rectangle::Rectangle(string color, double width, double height) : Shape(color), width(width), height(height) {

	//setName(name);
}

//void Rectangle::setName(string name) {
//	this->name = name;
//}
//string Rectangle::getName() {
//	return this->name;
//}

void Rectangle::draw() {
	Shape::draw();
	cout << this -> color  << endl;
}

double Rectangle::area() {
	return width * height;
}

void Rectangle::printArea() {

	Shape::printArea();
	cout << this->area();
}


Rectangle::~Rectangle() {

}