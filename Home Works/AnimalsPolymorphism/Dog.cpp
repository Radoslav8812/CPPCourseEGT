//
//  Dog.cpp
//  AnimalsPolymorphism
//
//  Created by Rado on 29.01.24.
//

#include "Dog.hpp"

Dog:: Dog (string name, string color) : Animal(name, color){
    
    this -> name = name;
    this -> color = color;
}

void Dog:: Print(){
    cout << "Dog Name => " << this -> name << " / Dog Color => " << this -> color << endl;
}

string Dog :: Sound() {
    
    return "Dog Sound ";
}
