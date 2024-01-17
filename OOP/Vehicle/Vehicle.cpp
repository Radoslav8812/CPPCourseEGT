//
//  Vehicle.cpp
//  Vehicle
//
//  Created by Rado on 17.01.24.
//

#include "Vehicle.hpp"
#include <iostream>
using namespace std;

Vehicle:: Vehicle(string brand, string model, int horsePower, int weight, vector<string> parts) : brand(brand), model(model), horsePower(horsePower), weight(weight), parts(parts){
    
}

void Vehicle:: print(){
    cout << "Brand: " << brand << ", Model: " << model << ", Horsepower: " << horsePower << ", Weight: " << weight << " ";
}

void Vehicle:: printParts(){
    cout << "Parts -> ";
    for (auto& part: parts){
        cout << part << ", ";
    }
    cout << endl;
}

void Vehicle:: Specific(){
    
}

double Vehicle:: calculatePrice(){
    return  horsePower * weight;;
}
Vehicle::~Vehicle() {
    
}
