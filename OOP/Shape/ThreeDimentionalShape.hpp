//
//  ThreeDimentionalShape.hpp
//  Shape
//
//  Created by Rado on 16.01.24.
//

#ifndef ThreeDimentionalShape_hpp
#define ThreeDimentionalShape_hpp

#include <stdio.h>
#include "Shape.hpp"
#include <iostream>

using namespace std;

class ThreeDimentionalShape : public Shape {
    
private:
    int h;
    int l;
public:
    ThreeDimentionalShape(int, int, int);
    
    void setH(int);
    int getH();
    
    void setL(int);
    int getL();
    
    virtual void print();
    virtual double getArea();
    double getVolume();
};

#endif /* ThreeDimentionalShape_hpp */
