//
//  Mammal.cpp
//  DiamondStructureOOP
//
//  Created by Rado on 30.01.24.
//

#include "Mammal.hpp"

Mammal:: Mammal (string name, string livingArea, string foodType, double foodQuantity, double foodPerDay) : Animal(name, livingArea, foodType, foodQuantity, foodPerDay){
    
    this -> name = name;
    this -> livingArea = livingArea;
    this -> foodType = foodType;
    this -> foodQuantity = foodQuantity;
    this -> foodPerDay = foodPerDay;
}

void Mammal:: Run() {
    cout << "Running depend of different type of the Mammal! " << endl;
}

void Mammal:: Eat(){
    cout << "Mammals few times at day/night! " << endl;
}

void Mammal:: Sleep(){
    cout << "Mammals sleep more than birds!" << endl;
}

void Mammal:: Sound(){
    cout << "Sound depend on mammal type!" << endl;
}

bool Mammal:: IsHungry(){
    return Animal:: IsHungry();
}

void Mammal:: Print(){
    
    cout << "Mammal Info: ";
    Animal:: Print();
}
