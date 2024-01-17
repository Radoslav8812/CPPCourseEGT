//
//  MotorCycle.cpp
//  Vehicle
//
//  Created by Rado on 17.01.24.
//

#include "MotorCycle.hpp"
#include <iostream>
using namespace std;

MotorCycle:: MotorCycle (string brand, string model, int horsePower, int weight, vector<string> parts) : Vehicle(brand, model, horsePower, weight, parts) {
    
}

void MotorCycle:: print(){
    Vehicle:: print();
    cout << "Type MotorCycle; " << endl;
    printParts();
}

double MotorCycle:: calculatePrice(){
    cout<< "MotorCycle price -> ";
    return horsePower * weight;
}
