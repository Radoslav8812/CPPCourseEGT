//
//  Rectangle.cpp
//  OverloadedRectangle
//
//  Created by Rado on 4.02.24.
//

#include "Rectangle.hpp"

Rectangle:: Rectangle(double length, double width){
    
    setLength(length);
    setWidth(width);
}

void Rectangle:: setLength(double length){
    this -> length = length;
}
double Rectangle:: getLength(){
    return length;
}

void Rectangle:: setWidth(double width){
    this -> width = width;
}
double Rectangle:: getWidth(){
    return width;
}



Rectangle Rectangle:: operator+ (Rectangle rectangle) {
    return Rectangle(this -> getLength() + rectangle.getLength(), this -> getWidth() + rectangle.getWidth());
}
Rectangle Rectangle:: operator- (Rectangle rectangle) {
    return Rectangle(this -> getLength() - rectangle.getLength(), this -> getWidth() - rectangle.getWidth());
}
Rectangle Rectangle:: operator* (Rectangle rectangle) {
    return Rectangle(this -> getLength() * rectangle.getLength(), this -> getWidth() * rectangle.getWidth());
}
Rectangle Rectangle:: operator/ (Rectangle rectangle) {
    return Rectangle(this -> getLength() / rectangle.getLength(), this -> getWidth() / rectangle.getWidth());
}


bool Rectangle:: operator== (Rectangle rectangle){
    return (this -> getLength() == rectangle.getLength() && this -> getWidth() == rectangle.getWidth());
}
bool Rectangle:: operator!= (Rectangle rectangle){
    return !(*this == rectangle); // this instance != rectangle in parameter
}
bool Rectangle:: operator< (Rectangle rectangle){
    return (this -> getLength() * this -> getWidth()) < (rectangle.getLength() * rectangle.getWidth());
}
bool Rectangle:: operator<= (Rectangle rectangle){
    return (*this < rectangle) || (*this == rectangle);
}
bool Rectangle:: operator> (Rectangle rectangle){
    return !(*this <= rectangle);
}
bool Rectangle:: operator>= (Rectangle rectangle){
    return !(*this < rectangle);
}


void Rectangle:: print(){
    cout << "Length: " << this -> getLength() << ", Width: " << this -> getWidth() << endl;
}
