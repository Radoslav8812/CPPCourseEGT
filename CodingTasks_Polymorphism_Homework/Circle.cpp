
#include "Circle.h"

Circle::Circle(string color, double radius) : Shape(color), radius(radius) {

	
}

void Circle::draw() {

	Shape::draw();
	cout << this->color << endl;
}

double Circle::area() {
	return 3.14 * radius * radius;
}

void Circle::printArea() {

	Shape::printArea();
	cout << this->area();
}

Circle:: ~Circle(){

}