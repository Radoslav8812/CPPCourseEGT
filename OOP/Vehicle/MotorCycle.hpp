//
//  MotorCycle.hpp
//  Vehicle
//
//  Created by Rado on 17.01.24.
//

#ifndef MotorCycle_hpp
#define MotorCycle_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Vehicle.hpp"
using namespace std;

class MotorCycle : public Vehicle{
    
public:
    MotorCycle(string brand, string model, int horsePower, int weight, vector<string> parts);
    
    void print() override;
    double calculatePrice() override;
};
#endif /* MotorCycle_hpp */
