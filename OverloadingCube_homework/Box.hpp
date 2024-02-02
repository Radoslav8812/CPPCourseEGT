//
//  Box.hpp
//  OverloadingCube
//
//  Created by Rado on 29.01.24.
//

#ifndef Box_hpp
#define Box_hpp

#include <stdio.h>
#include <iomanip>
#include <string>

using namespace std;

class Box{
  
private:
    double width, length, height;
    
public:
    Box(double width, double length, double height);
    
    double getWidth();
    double getLength();
    double getHeight();
    
    void setDimentions(double w, double l, double h);
    Box operator+(Box modified);
};

#endif /* Box_hpp */
