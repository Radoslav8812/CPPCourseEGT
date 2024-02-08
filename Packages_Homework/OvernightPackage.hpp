//
//  OvernightPackage.hpp
//  Packages
//
//  Created by Rado on 3.02.24.
//

#ifndef OvernightPackage_hpp
#define OvernightPackage_hpp

#include <stdio.h>
#include <iostream>
#include <string>

#include "Package.hpp"
using namespace std;

class OvernightPackage : public Package{
    
private:
    double overnightTax;
    
public:
    OvernightPackage(string senderName, string senderAddress, string receiverName, string ReceiverAddress , double weight, double cost, double overnightTax);
    virtual ~OvernightPackage();
    
    void setOvernightTax(double);
    double getOvernightTax();
    
    double calculateCost() override;
    void print() override;
};
#endif /* OvernightPackage_hpp */
