//
//  Box.cpp
//  OverloadingCube
//
//  Created by Rado on 29.01.24.
//

#include "Box.hpp"

Box:: Box (double width, double length, double height) : width(width), length(length), height(height){
    
}

double Box:: getWidth(){
    return this -> width;
}

double Box:: getLength(){
    return this -> length;
}

double Box:: getHeight(){
    return this -> height;
}

void Box:: setDimentions(double w, double l, double h){
    
    this -> width = w;
    this -> length = l;
    this -> height = h;
}

Box Box:: operator+(Box modified){
    
    double newWidth = this -> width + modified.width;
    double newLength = this -> length + modified.length;
    double newHeight = this -> height + modified.height;
    
    return Box(newWidth, newLength, newHeight);
}
