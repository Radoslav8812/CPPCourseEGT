//
//  Car.hpp
//  RentACar
//
//  Created by Rado on 19.01.24.
//

#ifndef Car_hpp
#define Car_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Car{
  
public:
    string brand;
    string model;
    string type;
    string color;
    string chasieNumber;
    string carNumber;
    double fuelConsumption;
    
public:
    Car(string, string, string, string, string, string, double);
    ~Car();
    
    virtual double rentCost();
    
    //void setBrand(string);
    //string getBrand();
    //
    //void setModel(string);
    //string getModel();
    //
    //void setType(string);
    //string getType();
    //
    //void setColor(string);
    //string getColor();
    //
    //void setChasieNumber(string);
    //string getChasieNumber();
    //
    //void setCarNumber(string);
    //string getCarNumber();
    //
    //void setFuelConsumption(double);
    //double getFuelConsumption();
    
    
};

#endif /* Car_hpp */
