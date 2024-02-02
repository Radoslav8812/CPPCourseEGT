//
//  Equipment.cpp
//  FitnessCenter
//
//  Created by Rado on 18.01.24.
//

#include "Equipment.hpp"
#include <iostream>

Equipment:: Equipment (string name) : name(name){
    
}

void Equipment:: showInfo(){
    cout << "Equipment -> " << this -> name << endl;
}

Equipment:: ~Equipment(){
    
}
