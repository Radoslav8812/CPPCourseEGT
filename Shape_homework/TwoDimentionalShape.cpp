//
//  TwoDimentionalShape.cpp
//  Shape
//
//  Created by Rado on 16.01.24.
//

#include "TwoDimentionalShape.hpp"
#include "Shape.hpp"
#include <iostream>

using namespace std;

TwoDimentionalShape:: TwoDimentionalShape(int side, int Side) : Shape(side){
    this -> side = Side;
}
//void TwoDimentionalShape:: setSide(<#int#> side){
//    this -> side = side;
//}
//int TwoDimentionalShape:: getSide(){
//    return this -> side;
//}

void TwoDimentionalShape:: Print() {
    cout << "Square -> Length: " << side << ", Width: " << side << endl;
}

double TwoDimentionalShape:: getArea(){
    
    int result = side * side;
    cout << "Area of 2D shape  -> ";
    return result;
}
