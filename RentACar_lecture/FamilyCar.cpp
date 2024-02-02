//
//  FamilyCar.cpp
//  RentACar
//
//  Created by Rado on 19.01.24.
//

#include "FamilyCar.hpp"
#include "Car.hpp"
#include <string>
#include <iostream>

using namespace std;

FamilyCar:: FamilyCar (string brand, string model, string type, string color, string chasieNumber, string carNumber, double fuelConsumption, double usageCost, double distancePassed) : Car(brand, model, type, color, chasieNumber, carNumber, fuelConsumption), usageCost(usageCost), distancePassed(distancePassed) {
    
    this -> usageCost = usageCost;
    this -> distancePassed = distancePassed;
}

//void FamilyCar:: setUsageCost(double usageCost){
//    this -> usageCost = usageCost;
//}
//double FamilyCar:: getUsageCost(){
//    return usageCost;
//}
//
//void FamilyCar:: setDistancePassed(double distancePassed){
//    this -> distancePassed = distancePassed;
//}
//double FamilyCar:: getDistancePassed(){
//    return distancePassed;
//}


double FamilyCar:: rentCost(){
    
    double distancePercentage;
    
    if (this -> distancePassed < 500){
        distancePercentage = (usageCost * distancePassed) *  0.7;
    }
    else{
        distancePercentage = (usageCost * distancePassed) * 0.4;
    }
    
    return distancePercentage;
}

FamilyCar:: ~FamilyCar(){
    
}
