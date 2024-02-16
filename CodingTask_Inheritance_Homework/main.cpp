
#include <iostream>
#include <vector>

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main() {

	vector<Shape*> shapesVect;

	shapesVect.emplace_back (new Circle("black", "c1"));
	shapesVect.emplace_back (new Circle("white", "c2"));
	shapesVect.emplace_back (new Rectangle("green", "r1"));

	for (auto& shape : shapesVect) {

		if (dynamic_cast<Circle*>(shape)) {
			cout << "Circle founded!" << endl;
			shape->draw();
		}
		else if (dynamic_cast<Rectangle*>(shape)) {
			cout << "Rectangle founded!" << endl;
			shape->draw();
		}

		cout << endl;
	}

	for (int i = 0; i < shapesVect.size(); i++) {
		delete shapesVect[i];
	}

	return 0;
}