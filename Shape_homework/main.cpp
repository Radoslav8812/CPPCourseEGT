//
//  main.cpp
//  Shape
//
//  Created by Rado on 16.01.24.
//

#include <iostream>
#include <string>
#include <vector>
#include "Shape.hpp"
#include "TwoDimentionalShape.hpp"
#include "ThreeDimentionalShape.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    vector<Shape*> shapesVect;
    
    Shape *shapePtr1 = new TwoDimentionalShape(30, 30);
    Shape *shapePtr2 = new ThreeDimentionalShape(15, 15, 15);
    Shape *shapePtr3 = new Shape(3);
    
    shapesVect.push_back(shapePtr1);
    shapesVect.push_back(shapePtr2);
    shapesVect.push_back(shapePtr3);
    
    for (auto& shape : shapesVect) {
        
        shape -> print();
        // Check fop 2D
        if (dynamic_cast<TwoDimentionalShape*>(shape)) {
            cout << dynamic_cast<TwoDimentionalShape*>(shape) -> getArea() << endl;
        }
        // Check for 3D
        if (dynamic_cast<ThreeDimentionalShape*>(shape)) {
            cout << dynamic_cast<ThreeDimentionalShape*>(shape) -> getArea() << endl;
            cout << dynamic_cast<ThreeDimentionalShape*>(shape) -> getVolume() << endl;
        }
    }
    
    return 0;
}
