//
//  FemaleCustomer.cpp
//  FitnessCenter
//
//  Created by Rado on 18.01.24.
//

#include "FemaleCustomer.hpp"
#include <iostream>

FemaleCustomer:: FemaleCustomer (string name) : Customer (name, 'F') {
    
}

void FemaleCustomer:: showInfo(){
    cout << "Female customer -> ";
    Customer:: showInfo();
}
