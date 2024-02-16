#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class Rectangle : public Shape {

public:
	Rectangle(string color);
	~Rectangle();

	void draw() override;
};
