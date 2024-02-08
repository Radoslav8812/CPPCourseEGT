//
//  Bird.cpp
//  DiamondStructureOOP
//
//  Created by Rado on 30.01.24.
//

#include "Bird.hpp"

Bird:: Bird(string name, string livingArea, string foodType, double foodQuantity, double foodPerDay) : Animal(name, livingArea, foodType, foodQuantity, foodPerDay){
    
    this -> name = name;
    this -> livingArea = livingArea;
    this -> foodType = foodType;
    this -> foodQuantity = foodQuantity;
    this -> foodPerDay = foodPerDay;
}

void Bird:: Fly() {
    cout << "Flying depend of different type of the bird! " << endl;
}

void Bird:: Eat(){
    cout << "Birds eat more often, becouse their metabolysm! " << endl;
}

void Bird:: Sleep(){
    cout << "Birds sleep most of the time in a nest!" << endl;
}

void Bird:: Sound(){
    cout << "Sound/singing depend on bird type!" << endl;
}

bool Bird:: IsHungry(){
    return Animal:: IsHungry();
}

void Bird:: Print(){
    
    cout << "Bird Info: ";
    Animal:: Print();
}
