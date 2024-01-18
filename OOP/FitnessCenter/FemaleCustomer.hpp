//
//  FemaleCustomer.hpp
//  FitnessCenter
//
//  Created by Rado on 18.01.24.
//

#ifndef FemaleCustomer_hpp
#define FemaleCustomer_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Customer.hpp"
using namespace std;

class FemaleCustomer : public Customer{
  
public:
    FemaleCustomer(string name);
    
    void showInfo() override;
};
#endif /* FemaleCustomer_hpp */
