//
//  TwoDimentionalShape.hpp
//  Shape
//
//  Created by Rado on 16.01.24.
//

#ifndef TwoDimentionalShape_hpp
#define TwoDimentionalShape_hpp

#include <stdio.h>
#include <iostream>
#include <string>

#include "Shape.hpp"

using namespace std;

class TwoDimentionalShape : public Shape{

protected:
    int side;

public:
    TwoDimentionalShape(int, int);
    
    void setSide(int);
    int getSide();
    
    virtual void Print();
    virtual double getArea();
};

#endif /* TwoDimentionalShape_hpp */
