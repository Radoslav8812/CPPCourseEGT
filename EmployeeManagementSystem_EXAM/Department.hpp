//
//  Department.hpp
//  EmployeeManagementSystem
//
//  Created by Rado on 31.01.24.
//

#ifndef Department_hpp
#define Department_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "Employee.hpp"

using namespace std;


class Department{
  
private:
    string departmentName;
    int numEmployees;
    
public:
    Department(string);
    vector<Employee*> employees;
    
    void setDepartmentName(string);
    string getDepartmentName();
    
    void addEmployee(Employee* employee);
    void displayEmployees();
};
#endif /* Department_hpp */
