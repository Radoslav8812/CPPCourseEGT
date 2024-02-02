//
//  ThreeDimentionalShape.cpp
//  Shape
//
//  Created by Rado on 16.01.24.
//

#include "ThreeDimentionalShape.hpp"
#include <iostream>
#include <string>
using namespace std;

ThreeDimentionalShape :: ThreeDimentionalShape(int a, int h, int l) : Shape(a){
    this -> h = h;
    this -> l = l;
}

void ThreeDimentionalShape:: print(){
    cout << "A side of Square -> " << side << endl;
}

double ThreeDimentionalShape:: getArea(){
    cout << "Area of 3D shape -> ";
    return 6 * side * side;
}

double ThreeDimentionalShape:: getVolume(){
    
    cout << "3D Shape volume -> ";
    return side * side * side;
}
