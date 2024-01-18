//
//  Customer.hpp
//  FitnessCenter
//
//  Created by Rado on 18.01.24.
//

#ifndef Customer_hpp
#define Customer_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Customer{
  
private:
    string name;
    char gender;
    
public:
    Customer(string name, char gender);
    ~Customer();
    
    virtual void showInfo();
};

#endif /* Customer_hpp */
