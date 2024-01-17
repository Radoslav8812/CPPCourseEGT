//
//  Car.cpp
//  Vehicle
//
//  Created by Rado on 17.01.24.
//

#include "Car.hpp"
#include <iostream>
using namespace std;

Car:: Car(string brand, string model, int horsePower, int weight, vector<string> parts) : Vehicle(brand, model, horsePower, weight, parts){
    
}

void Car:: print(){
    Vehicle:: print();
    cout << "Type Car: " << endl;
    printParts();
}

double Car:: calculatePrice(){
    cout << "Price of Vehicle -> ";
    return horsePower * weight;
}

void Car:: Specific(){
    cout << "Car has 6 gears and 4x4 drive." << endl;
}

Car::~Car() {
    
}
