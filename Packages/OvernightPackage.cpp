//
//  OvernightPackage.cpp
//  Packages
//
//  Created by Rado on 3.02.24.
//

#include "OvernightPackage.hpp"

OvernightPackage:: OvernightPackage(string senderName, string senderAddress, string receiverName, string ReceiverAddress , double weight, double cost, double overnightTax) : Package(senderName, senderAddress, receiverName, ReceiverAddress, weight, cost){
    
    setOvernightTax(overnightTax);
}

void OvernightPackage:: setOvernightTax(double overnightTax){
    this -> overnightTax = overnightTax;
}
double OvernightPackage:: getOvernightTax(){
    return this -> overnightTax;
}

double OvernightPackage:: calculateCost(){
    return Package:: calculateCost() + getOvernightTax();
}

void OvernightPackage:: print(){
    
    Package:: print();
    cout << " Overnight Tax: " << this -> getOvernightTax() << " ";
}

OvernightPackage:: ~OvernightPackage(){
    
}
