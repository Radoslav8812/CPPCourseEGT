#pragma once

#include "Shape.h"

#include <iostream>
using namespace std;

class Circle : public Shape {

private:
	double radius;

public:
	Circle(string color, double radius);
	~Circle();

	double area() override;
	void draw() override;
};