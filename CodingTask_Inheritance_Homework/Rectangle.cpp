
#include "Rectangle.h"

Rectangle::Rectangle(string color, string name) : Shape(color) {

	setName(name);
}

void Rectangle::setName(string name) {
	this->name = name;
}
string Rectangle::getName() {
	return this->name;
}

void Rectangle::draw() {
	Shape::draw();
	cout << this -> color << " " << "/ name is:" << getName() << endl;
}

Rectangle::~Rectangle() {

}