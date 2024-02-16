
#include <iostream>
#include <vector>

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

void printArea(Shape* shape) {
	shape->printArea();
}
int main() {

	vector<Shape*> shapesVect;

	shapesVect.emplace_back (new Circle("black", 3.2));
	shapesVect.emplace_back (new Circle("white", 2.5));
	shapesVect.emplace_back (new Rectangle("green" , 8, 4));

	for (auto& shape : shapesVect) {

		if (dynamic_cast<Circle*>(shape)) {

			cout << "Circle founded!" << endl;
			printArea(shape);
			shape->draw();
			
		}
		else if (dynamic_cast<Rectangle*>(shape)) {

			cout << "Rectangle founded!" << endl;
			printArea(shape);
			shape->draw();
			
		}

		cout << endl;
	}

	for (int i = 0; i < shapesVect.size(); i++) {
		delete shapesVect[i];
	}

	return 0;
}