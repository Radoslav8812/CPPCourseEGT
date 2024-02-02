//
//  FitnessCenter.cpp
//  FitnessCenter
//
//  Created by Rado on 18.01.24.
//

#include "FitnessCenter.hpp"
#include "Customer.hpp"
#include "MaleCustomer.hpp"
#include "FemaleCustomer.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

FitnessCenter:: FitnessCenter (string name, string neighborhood) : name(name), neighborhood(neighborhood){
    
    if (this -> name.length() < 3 || this -> name.length() > 20){
        cerr << "Invalid fitnesss name!" << endl;
    }
    
    if (this -> neighborhood.length() < 5 || this -> neighborhood.length() > 30){
        cerr << "Invalid neighborhood name!" << endl;
    }
}

void FitnessCenter:: addCustomer(Customer* customer){
    customerVect.push_back(customer);
}

void FitnessCenter:: addEquipment(Equipment* equipment){
    equipmentVect.push_back(equipment);
}

void FitnessCenter:: addTrainer(Trainer* trainer){
    trainerVect.push_back(trainer);
}


// user menu
void FitnessCenter:: displayMenu() {
    cout << "Fitness Center Menu: " << endl;
    cout << "1. Add Customer: " << endl;
    cout << "2. Add Equipment: " << endl;
    cout << "3. Add Trainer: " << endl;
    cout << "4. Display Information: " << endl;
    cout << "5. Exit " << endl;
}

// user choice
void FitnessCenter:: userChoice(int choice){
    
    if (choice == ADD_CUSTOMER){
        
        string name;
        cout << "Enter customer name: ";
        cin >> name;
        
        char gender;
        cout << "Enter customer gender (M or F): ";
        cin >> gender;
        
        if (gender == 'M' || gender == 'm'){
            
            MaleCustomer* currentMale = new MaleCustomer(name);
            customerVect.push_back(currentMale);
            
        } else if (gender == 'F' || gender == 'f'){
            
            FemaleCustomer* currentFemale = new FemaleCustomer(name);
            customerVect.push_back(currentFemale);
            
        } else {
            cerr << "Invalid Gender! " << endl;
        }
        
        
        
    } else if (choice == ADD_EQUIPMENT){
        
        string equipmentName;
        cout << "Enter the name of equipment: ";
        cin >> equipmentName;
        
        equipmentVect.push_back(new Equipment(equipmentName));
        
    } else if (choice == ADD_TRAINER){
        
        string trainerName;
        cout << "Enter trainer name: ";
        cin >> trainerName;
        
        trainerVect.push_back(new Trainer(trainerName));
        
        
        
        for (auto& t : trainerVect){
            
            if (customerVect.size() > 0){
                
                for (auto& cust : customerVect){
                    t -> addCustomer(cust);
                    
                }
            }
        }
        
        customerVect.clear();
        
    } else if (choice == DISPLAY_INFO){
        
        cout << " FitnessCenter Info: " << endl;
        cout << "Name -> " << this -> name << endl;
        cout << "Neighborhood -> " << this -> neighborhood << endl;
        
        cout << "Customers: " << endl;
        for (auto& customer : customerVect) {
            customer -> showInfo();
        }
        
        cout << "Equipmets: " << endl;
        for (auto& equipt : equipmentVect){
            equipt -> showInfo();
        }
        
        cout << "Trainers: " << endl;
        for (auto& trainer : trainerVect){
            trainer -> showInfo();
            trainer -> showCustomer();
        }
        
    } else if (choice == EXIT){
        cout << "Exit the program! " << endl;
        
    } else {
        cout << "INVALID CHOISE! " << endl;
    }
}


FitnessCenter:: ~FitnessCenter(){
    
}
