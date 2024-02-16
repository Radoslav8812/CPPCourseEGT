
#include "Circle.h"

Circle::Circle(string color) : Shape(color) {
	
}
void Circle::draw() {
	Shape::draw();
	cout << this->color << endl;
}

Circle:: ~Circle(){

}