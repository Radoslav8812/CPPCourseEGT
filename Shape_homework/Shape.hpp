//
//  Shape.hpp
//  Shape
//
//  Created by Rado on 16.01.24.
//

#ifndef Shape_hpp
#define Shape_hpp

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class Shape{
    
protected:
    int side;
    
public:
    Shape(int);
    
    void setSide(int);
    int getSide();
    
    virtual double getArea();
    virtual void print();
    
    virtual ~Shape() {}
};

#endif /* Shape_hpp */
