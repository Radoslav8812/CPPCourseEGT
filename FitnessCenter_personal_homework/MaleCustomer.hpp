//
//  MaleCustomer.hpp
//  FitnessCenter
//
//  Created by Rado on 18.01.24.
//

#ifndef MaleCustomer_hpp
#define MaleCustomer_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Customer.hpp"

using namespace std;

class MaleCustomer : public Customer{
    
public:
    MaleCustomer(string name);
    void showInfo() override;
};

#endif /* MaleCustomer_hpp */
