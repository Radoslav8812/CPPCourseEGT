#pragma once

#include "Shape.h"

#include <iostream>
using namespace std;

class Circle : public Shape {

private:
	string name;

public:
	Circle(string color, string name);
	~Circle() override;

	void setName(string name);
	string getName();

    void draw();
};