#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class Rectangle : public Shape {

public:
<<<<<<< HEAD
	Rectangle(string color);
	~Rectangle();

	void draw() override;
};
=======
	Rectangle(string color, string name);
	~Rectangle();

	void setName(string name);
	string getName();

	void draw();
};
>>>>>>> 72dbbf83810356c6d1c7f824d73740bbbe849ae7
