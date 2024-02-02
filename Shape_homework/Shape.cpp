//
//  Shape.cpp
//  Shape
//
//  Created by Rado on 16.01.24.
//

#include "Shape.hpp"
#include <string>
#include <iostream>
using namespace std;

Shape:: Shape(int side){
    this -> side = side;
}

void Shape:: setSide(int side){
    this -> side = side;
}
int Shape:: getSide(){
    return this -> side;
}

double Shape:: getArea(){
    return 0.0;
}

void Shape:: print(){
    cout << "SideSize -> " << getSide() << endl <<  "Area ->  " << getArea() << endl;
}
