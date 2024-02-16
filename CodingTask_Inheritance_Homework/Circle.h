#pragma once

#include "Shape.h"

#include <iostream>
using namespace std;

class Circle : public Shape {

public:
<<<<<<< HEAD
	Circle(string color);
	~Circle();

    void draw() override;
};
=======
	Circle(string color, string name);
	~Circle();

	void setName(string name);
	string getName();

    void draw();
};
>>>>>>> 72dbbf83810356c6d1c7f824d73740bbbe849ae7
