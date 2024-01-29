//
//  main.cpp
//  OverloadingCube
//
//  Created by Rado on 29.01.24.
//

#include <iostream>
#include <iomanip>
#include "Box.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Box box1(1.0, 2.0, 1.5);
    cout << "Box 1 Dimensions: Width = " << box1.getWidth() << " / Length = " << box1.getLength() << " / Height = " << box1.getHeight() << endl;
    
    Box box2(4.0, 5.0, 3.0);
    cout << "Box 2 Dimensions: Width = " << box2.getWidth() << " / Length = " << box2.getLength() << " / Height = " << box2.getHeight() << endl;
    
    Box resultBox = box1 + box2;
    cout << "resultBox Dimensions: Width = " << resultBox.getWidth() << " / Length = " << resultBox.getLength() << " / Height = " << resultBox.getHeight() << endl;
    
    
    
    return 0;
}
