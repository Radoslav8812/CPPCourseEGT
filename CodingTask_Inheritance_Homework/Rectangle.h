#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class Rectangle : public Shape {

private:
	string name;

public:
	Rectangle(string color, string name);
	~Rectangle();

	void setName(string name);
	string getName();

	void draw();
};
