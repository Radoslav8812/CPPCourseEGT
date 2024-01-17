//
//  Car.hpp
//  Vehicle
//
//  Created by Rado on 17.01.24.
//

#ifndef Car_hpp
#define Car_hpp

#include <stdio.h>
#include "Vehicle.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Car : public Vehicle{
    
    
public:
    Car (string brand, string model, int horsePower, int weight, vector<string> parts);
    ~Car();
    
    void print() override;
    double calculatePrice() override;
    void Specific() override;
};

#endif /* Car_hpp */
