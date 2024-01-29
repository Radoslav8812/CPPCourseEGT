//
//  Animal.cpp
//  AnimalsPolymorphism
//
//  Created by Rado on 29.01.24.
//

#include "Animal.hpp"

Animal:: Animal (string name, string color) : name(name), color(color){
    this -> name = name;
    this -> color = color;
}

void Animal:: setName(string name){
    this -> name = name;
}
string Animal:: getName(){
    return this -> name;
}


void Animal:: setColor(string color){
    this -> color = color;
}
string Animal:: getColor(){
    return this -> color;
}

void Animal:: Print(){
    
}

string Animal:: Sound() {
    return "";
}

Animal:: ~Animal(){
    
}
