#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class Rectangle : public Shape {

private:
	double width;
	double height;

public:
	Rectangle(string color, double width, double height);
	~Rectangle();

	double area() override;
	void draw() override;
};