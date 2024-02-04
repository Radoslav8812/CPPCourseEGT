//
//  Employee.cpp
//  EmployeeManagementSystem
//
//  Created by Rado on 31.01.24.
//

#include "Employee.hpp"
#include <iostream>

using namespace std;

Employee:: Employee (string name, int employeeID, string position) {
    
    setName(name);
    setEmployeeID(employeeID);
    setPosition(position);
}

void Employee:: setName(string name){
    this -> name = name;
}
string Employee:: getName(){
    return this -> name;
}

void Employee:: setEmployeeID(int employeeID){
    this -> employeeID = employeeID;
}
int Employee:: getEmployeeID(){
    return this -> employeeID;
}

void Employee:: setPosition(string position){
    this -> position = position;
}
string Employee:: getPosition(){
    return this -> position;
}

void Employee:: display(){
    cout << " Name: " << this -> name << ", ID: " << this -> employeeID << ", position: " << this -> position << endl;
}
