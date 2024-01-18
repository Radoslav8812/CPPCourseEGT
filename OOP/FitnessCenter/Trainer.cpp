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
    customers.push_back(customer);
}

void Trainer:: showCustomer(){
    cout << "Customers of trainer " << this -> name << endl;
    for (auto& c : customers){
        c -> showInfo();
    }
}

void Trainer:: showInfo(){
    cout << "Trainer -> " << this -> name << endl;
}

Trainer:: ~Trainer() {

    for (auto& c : customers) {
        delete c;
    }
}
