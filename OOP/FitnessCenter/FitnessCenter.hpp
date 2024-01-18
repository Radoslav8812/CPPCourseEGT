//
//  FitnessCenter.hpp
//  FitnessCenter
//
//  Created by Rado on 18.01.24.
//

#ifndef FitnessCenter_hpp
#define FitnessCenter_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>

#include "Customer.hpp"
#include "Equipment.hpp"
#include "Trainer.hpp"

using namespace std;

enum EnumOptions{
    ADD_CUSTOMER = 1,
    ADD_EQUIPMENT,
    ADD_TRAINER,
    DISPLAY_INFO,
    EXIT
};

class FitnessCenter{
    
private:
    string name;
    string neighborhood;
    vector<Customer*> customerVect;
    vector<Equipment*> equipmentVect;
    vector<Trainer*> trainerVect;
    
public:
    FitnessCenter(string name, string neighborhood);
    ~FitnessCenter();
    
    void addCustomer (Customer* customer);
    void addEquipment (Equipment* equipment);
    void addTrainer (Trainer* trainer);
    
    void displayMenu();
    void userChoice(int choice);
};
#endif /* FitnessCenter_hpp */
