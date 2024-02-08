//
//  main.cpp
//  OverloadedRectangle
//
//  Created by Rado on 4.02.24.
//

#include <iostream>
#include <string>
#include <istream>
#include "Rectangle.hpp"


int main(int argc, const char * argv[]) {
    
    Rectangle rect1(5, 3);
    Rectangle rect2(5, 3);
    Rectangle rect3(3, 4);

    Rectangle sum = rect1 + rect2;
    Rectangle difference = rect1 - rect2;
    Rectangle multiplication = rect1 * rect2;
    Rectangle division = rect1 / rect2;
    
    cout << "Rectangle 1: ";
    rect1.print();
    cout << "Rectangle 2: ";
    rect2.print();
    
    cout << endl;

    cout << "Sum: ";
    sum.print();

    cout << "Difference: ";
    difference.print();

    cout << "Multi: ";
    multiplication.print();

    cout << "Division: ";
    division.print();
    
    cout << endl;
    
    if (rect1 == rect2){
        cout << "Equal figures! - rect1 and rect2" << endl;
    }
    else {
        cout << "Not equal figures - rect1 and rect2!" << endl;
    }
    
    if (rect1 == rect3){
        cout << "Equal figures - rect1 and rect3!" << endl;
    }else{
        cout << "Not equal figures! - rect1 and rect3" << endl;
    }
    
    if (rect3 > rect1){
        cout << "rect3 is bigger than rect1" << endl;
    }
    else{
        cout << "rect 1 is bigger than rect3" << endl;
    }
    
    return 0;
}
