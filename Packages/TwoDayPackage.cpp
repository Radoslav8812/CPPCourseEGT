//
//  TwoDayPackage.cpp
//  Packages
//
//  Created by Rado on 3.02.24.
//

#include "TwoDayPackage.hpp"

TwoDayPackage:: TwoDayPackage(string senderName, string senderAddress, string receiverName, string ReceiverAddress , double weight, double cost, double twoDayTax) : Package( senderName,  senderAddress, receiverName, ReceiverAddress, weight, cost) {
    
    setTax(twoDayTax);
}

void TwoDayPackage:: setTax(double twoDayTax){
    this -> twoDayTax = twoDayTax;
}
double TwoDayPackage:: getTax(){
    return this -> twoDayTax;
}

double TwoDayPackage:: calculateCost(){
    
    return Package:: calculateCost() + this -> getTax();
}

void TwoDayPackage:: print(){
    
    Package:: print();
    cout << "Tax: " << this -> getTax() << " ";
}

TwoDayPackage:: ~TwoDayPackage(){
    
}
