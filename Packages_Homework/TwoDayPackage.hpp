//
//  TwoDayPackage.hpp
//  Packages
//
//  Created by Rado on 3.02.24.
//

#ifndef TwoDayPackage_hpp
#define TwoDayPackage_hpp

#include <stdio.h>
#include <iostream>
#include <string>

#include "Package.hpp"
using namespace std;

class TwoDayPackage : public Package{
  
private:
    double twoDayTax;
    
public:
    TwoDayPackage(string senderName, string senderAddress, string receiverName, string ReceiverAddress , double weight, double cost, double twoDayTax);
    virtual ~TwoDayPackage();
    
    void setTax(double);
    double getTax();
    
    double calculateCost() override;
    void print() override;
};

#endif /* TwoDayPackage_hpp */
