#pragma once
#include <iostream>

using namespace std;

class Shape {

protected:
	string color;

public:
	Shape(string color);
	virtual ~Shape();

	string getColor();

	virtual void draw();
};