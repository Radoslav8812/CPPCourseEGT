//
//  Trainer.hpp
//  FitnessCenter
//
//  Created by Rado on 18.01.24.
//

#ifndef Trainer_hpp
#define Trainer_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include "Customer.hpp"

using namespace std;

class Trainer {
    
protected:
    string name;
    vector<Customer*> customerOfTrainer;
    
public:
    Trainer(string name);
    ~Trainer();
    
    void addCustomer(Customer* customer);
    void showCustomer();
    void showInfo();
};

#endif /* Trainer_hpp */
