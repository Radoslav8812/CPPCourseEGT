//
//  Vehicle.hpp
//  Vehicle
//
//  Created by Rado on 17.01.24.
//

#ifndef Vehicle_hpp
#define Vehicle_hpp

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class Vehicle{
    
protected:
    string brand;
    string model;
    int horsePower;
    int weight;
    vector<string> parts;
    
public:
    Vehicle(string brand, string model, int horsePower, int weight, vector<string> parts);
    
    virtual void print();
    virtual double calculatePrice();
    void printParts();
};
#endif /* Vehicle_hpp */
