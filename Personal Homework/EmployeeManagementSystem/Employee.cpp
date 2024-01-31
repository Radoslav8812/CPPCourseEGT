//
//  Employee.cpp
//  EmployeeManagementSystem
//
//  Created by Rado on 31.01.24.
//

#include "Employee.hpp"
#include <iostream>

using namespace std;

Employee:: Employee (string name, int employeeID, string position) : name(name), employeeID(employeeID), position(position){
    
}

void Employee:: display(){
    
    cout << " Name: " << this -> name << ", ID: " << this -> employeeID << ", position: " << this -> position << endl;
}
