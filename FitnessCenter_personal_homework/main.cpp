//
//  main.cpp
//  FitnessCenter
//
//  Created by Rado on 18.01.24.
//

#include <iostream>
#include <vector>
#include <string>

#include "FitnessCenter.hpp"
#include "Equipment.hpp"
#include "Customer.hpp"
#include "Trainer.hpp"
#include "MaleCustomer.hpp"
#include "FemaleCustomer.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    FitnessCenter fitnessCenter("FLAIS", "Sofia");
    
    int choice;
    
    do {
        fitnessCenter.displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        
        fitnessCenter.userChoice(choice);
        
    } while (choice != EXIT);
    
    return 0;
}
