//
//  Cat.cpp
//  AnimalsPolymorphism
//
//  Created by Rado on 29.01.24.
//

#include "Cat.hpp"
#include "Animal.hpp"

using namespace std;

Cat:: Cat(string name, string color) : Animal (name, color){
    
    this -> name = name;
    this -> color = color;
}

void Cat:: Print(){
    cout << "Cat Name => " << this -> name << " / Cat Color => " << this -> color << endl;
}

string Cat :: Sound(){
    
    return "Cat sound";
}
