//
//  LuxuryCar.cpp
//  RentACar
//
//  Created by Rado on 19.01.24.
//

#include "LuxuryCar.hpp"
#include "Car.hpp"
#include <iostream>

using namespace std;

LuxuryCar:: LuxuryCar (string brand, string model, string type, string color, string chasieNumber, string carNumber, double fuelConsumption, double usageCost, double distancePassed, string luxuryPercentage) : Car(brand, model, type, color, chasieNumber, carNumber, fuelConsumption), usageCost(usageCost), distancePassed(distancePassed), luxuryPercentage(luxuryPercentage) {
    
   
    //this -> usageCost = usageCost;
    //this -> distancePassed = distancePassed;
    //this -> luxuryPercentage = luxuryPercentage;
    
}

//void LuxuryCar:: setUsageCost(double usageCost){
//    this -> usageCost = usageCost;
//}
//double LuxuryCar:: getUsageCost(){
//    return usageCost;
//}
//
//void LuxuryCar:: setDistancePassed(double distancePassed){
//    this -> distancePassed = distancePassed;
//}
//double LuxuryCar:: getDistancePassed(){
//    return distancePassed;
//}
//
//void LuxuryCar:: setLuxuryPercentage(double luxuryPercentage){
//    this -> luxuryPercentage = luxuryPercentage;
//}
//double LuxuryCar:: getLuxuryPercentage(){
//    return luxuryPercentage;
//}

map <string, double> LuxuryCar:: luxuryTypeMap = {
    {"Champagne", 100.0},
    {"Wine", 50.0},
    {"Chocolate", 40.0}
};

double LuxuryCar::rentCost() {
    
    double distancePercentage;
    
    if (this -> distancePassed < 200){
        distancePercentage = (usageCost * distancePassed) *  0.6;
    }
    else{
        distancePercentage = (usageCost * distancePassed) * 0.4;
    }

    auto it = luxuryTypeMap.find(luxuryPercentage);
    
    if (it != luxuryTypeMap.end()) {
        return distancePercentage + it -> second;
    } else {
        cerr << "Invalid luxury type: " << this -> luxuryPercentage << endl;
        return 0;
    }
}

LuxuryCar:: ~LuxuryCar(){
    
}
