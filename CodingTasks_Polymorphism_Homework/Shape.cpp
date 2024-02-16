
#include "Shape.h"

Shape::Shape(string color) :color(color) {

}

string Shape::getColor() {
	return this->color;
}

void Shape::draw() {

	cout << "Color is: ";
}

void Shape::printArea() {
	cout << "Area: ";
} 

Shape:: ~Shape() {

}