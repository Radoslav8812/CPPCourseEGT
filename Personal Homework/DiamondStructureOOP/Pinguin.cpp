//
//  Pinguin.cpp
//  DiamondStructureOOP
//
//  Created by Rado on 30.01.24.
//

#include "Pinguin.hpp"

Pinguin:: Pinguin(string name, string livingArea, string foodType, double foodQuantity, double foodPerDay) :  Mammal(name, livingArea, foodType, foodQuantity, foodPerDay), Bird(name, livingArea, foodType, foodQuantity, foodPerDay){
    
    
}

void Pinguin:: Swim(){
    cout << "Swim mostly in icy waters ! " << endl;
}

void Pinguin:: Run(){
    Mammal:: Run();
}

void Pinguin:: Fly(){
    cout << "Pinguins cant fly !" << endl;
}


void Pinguin:: Eat(){
    Mammal:: Eat();
    Bird::Eat();
}

void Pinguin:: Sleep(){
    Mammal:: Sleep();
    Bird:: Sleep();
}

void Pinguin:: Sound(){
    cout << "pinguin singing " << endl;
}

bool Pinguin:: IsHungry(){
    
    return Mammal:: IsHungry();
    return Bird:: IsHungry();
    
}

void Pinguin:: Print(){
    
    Mammal:: Print();
    cout << endl;
    Bird :: Print();
}
