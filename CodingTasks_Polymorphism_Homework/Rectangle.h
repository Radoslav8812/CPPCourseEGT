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

	void setName(string name);
	string getName();

	double area() override;
	void draw() override;
	void printArea() override;
};
