//
//  Truck.cpp
//  Vehicle
//
//  Created by Rado on 17.01.24.
//

#include "Truck.hpp"
#include <iostream>

Truck:: Truck(string brand, string model, int horsePower, int weight, vector<string> parts) : Vehicle(brand, model, horsePower, weight, parts){
    
}

void Truck::print() {
    Vehicle::print();
    cout << "Type Truck: ";
    printParts();
}

double Truck:: calculatePrice(){
    return horsePower * weight * 0.05;
}

void Truck:: Specific(){
    cout << "Truck has 6x6 drive and 16 gears." << endl;
}

Truck:: ~Truck(){
    
}
