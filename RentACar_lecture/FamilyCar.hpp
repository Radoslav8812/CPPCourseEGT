//
//  FamilyCar.hpp
//  RentACar
//
//  Created by Rado on 19.01.24.
//

#ifndef FamilyCar_hpp
#define FamilyCar_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Car.hpp"

using namespace std;

class FamilyCar : public Car{
    
private:
    double usageCost;
    double distancePassed;
    
public:
    FamilyCar(string, string, string, string, string, string, double, double, double);
    ~FamilyCar();
    
    double rentCost() override;
    
    //void setUsageCost(double);
    //double getUsageCost();
    //
    //void setDistancePassed(double);
    //double getDistancePassed();
    
    
};

#endif /* FamilyCar_hpp */
