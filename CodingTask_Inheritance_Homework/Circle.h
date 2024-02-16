#pragma once

#include "Shape.h"

#include <iostream>
using namespace std;

class Circle : public Shape {

public:
	Circle(string color);
	~Circle();

    void draw() override;
};
