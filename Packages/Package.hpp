//
//  Package.hpp
//  Packages
//
//  Created by Rado on 3.02.24.
//

#ifndef Package_hpp
#define Package_hpp

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class Package{
  
private:
    string senderName;
    string senderAddress;
    string receiverName;
    string receiverAddress;
    double weight;
    double cost;
    
public:
    Package(string senderName, string senderAddress, string receiverName, string ReceiverAddress , double weight, double cost);
    ~Package();
    
    void setSenderName(string);
    string getSenderName();
    
    void setSenderAddress(string);
    string getSenderAddress();
    
    void setReceiverName(string);
    string getReceiverName();
    
    void setReceiverAddress(string);
    string getReceiverAddress();
    
    void setWeight(double);
    double getWeight();
    
    void setCost(double);
    double getCost();
    
    virtual double calculateCost();
    virtual void print();
};

#endif /* Package_hpp */
