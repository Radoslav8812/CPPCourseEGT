//
//  Employee.hpp
//  EmployeeManagementSystem
//
//  Created by Rado on 31.01.24.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Employee{
    
private:
    string name;
    int employeeID;
    string position;
    
public:
    Employee(string name, int employeeID, string position);
    
    void display();
};

#endif /* Employee_hpp */
