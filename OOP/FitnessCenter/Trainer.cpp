//
//  Trainer.cpp
//  FitnessCenter
//
//  Created by Rado on 18.01.24.
//

#include "Trainer.hpp"
#include <iostream>
#include <vector>
using namespace std;

Trainer:: Trainer (string name) : name(name){
    
}

void Trainer:: addCustomer(Customer* customer){
    customerOfTrainer.push_back(customer);
}

void Trainer:: showCustomer(){
    cout << "Customers of trainer " << this -> name << endl;
    for (auto& c : customerOfTrainer){
        c -> showInfo();
    }
}

void Trainer:: showInfo(){
    cout << "Trainer -> " << this -> name << endl;
    customerOfTrainer.at(0) -> showInfo();
    
    
}

Trainer:: ~Trainer() {

    for (auto& c : customerOfTrainer) {
        delete c;
    }
}
