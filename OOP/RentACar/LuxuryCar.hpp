//
//  LuxuryCar.hpp
//  RentACar
//
//  Created by Rado on 19.01.24.
//

#ifndef LuxuryCar_hpp
#define LuxuryCar_hpp

#include <stdio.h>
#include "Car.hpp"
#include "FamilyCar.hpp"

#include <string>
#include <iostream>
#include <map>

using namespace std;

class LuxuryCar : public Car{
    
public:
    double usageCost;
    double distancePassed;
    string luxuryPercentage;
    static map<string, double> luxuryTypeMap;
    
public:
    LuxuryCar(string, string, string, string, string, string, double, double , double, string);
    ~LuxuryCar();
    
    double rentCost() override;
    
    //void setUsageCost(double);
    //double getUsageCost();
    //
    //void setDistancePassed(double);
    //double getDistancePassed();
    //
    //void setLuxuryPercentage(double);
    //double getLuxuryPercentage();
    
    
    
};

#endif /* LuxuryCar_hpp */
