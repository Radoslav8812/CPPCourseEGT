
#include "Circle.h"

Circle::Circle(string color, string name) : Shape(color) {

	setName(name);
}

void Circle::setName(string name) {
	this->name = name;
}
string Circle::getName(){
	return this->name;
}

void Circle::draw() {

	Shape::draw();
	cout << this->color << " "<< "/  name is: " << getName() << endl;
}

Circle:: ~Circle(){

}