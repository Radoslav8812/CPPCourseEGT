//
//  Rectangle.hpp
//  OverloadedRectangle
//
//  Created by Rado on 4.02.24.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
#include <iostream>
#include <istream>
#include <string>

using namespace std;

class Rectangle {
  
private:
    double length;
    double width;
    
public:
    Rectangle(double length, double width);
    
    void setLength(double);
    double getLength();
    
    void setWidth(double);
    double getWidth();
    
    
    Rectangle operator+ (Rectangle rect);
    Rectangle operator- (Rectangle rect);
    Rectangle operator* (Rectangle rect);
    Rectangle operator/ (Rectangle rect);    
    
    bool operator== (Rectangle other);
    bool operator!= (Rectangle other);
    bool operator<( Rectangle other);
    bool operator<= (Rectangle other);
    bool operator> (Rectangle other);
    bool operator>= (Rectangle other);
    
    void print();
};
#endif /* Rectangle_hpp */
