//
//  Customer.cpp
//  FitnessCenter
//
//  Created by Rado on 18.01.24.
//

#include "Customer.hpp"
#include <iostream>

Customer:: Customer (string name, char gender) : name(name), gender(gender){
    
    
}

void Customer:: showInfo(){
    cout << "Name -> " << this -> name << endl;
    cout << "Gender -> " << this -> gender << endl;
}

Customer:: ~Customer() {
    
}
