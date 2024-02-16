#include <iostream>
#include <vector>

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

void printArea(Shape* shape) {
	cout <<"Area is: " << shape->area() << endl;
}
int main() {

	Shape* circle = new Circle("black", 3.2);
	Shape* rectangle = new Rectangle("green", 8, 4);

	cout << "Circle info: " << endl;
	circle->draw();
	printArea(circle);
	cout << endl;

	cout << "Rectangle info: " << endl;
	rectangle->draw();
	printArea(rectangle);

	return 0;
}