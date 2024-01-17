//
//  Truck.hpp
//  Vehicle
//
//  Created by Rado on 17.01.24.
//

#ifndef Truck_hpp
#define Truck_hpp

#include <stdio.h>
#include "Vehicle.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Truck : public Vehicle{
    
public:
    Truck(string brand, string model, int horsePower, int weight, vector<string> parts);
    ~Truck();
    
    void print() override;
    double calculatePrice() override;
    void Specific() override;
};

#endif /* Truck_hpp */
