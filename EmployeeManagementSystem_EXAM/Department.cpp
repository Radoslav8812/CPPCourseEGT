//
//  Department.cpp
//  EmployeeManagementSystem
//
//  Created by Rado on 31.01.24.
//

#include "Department.hpp"


Department:: Department (string departmentName) : departmentName(departmentName){
    
    setDepartmentName(departmentName);
}

void Department:: setDepartmentName(string departmentName){
    this -> departmentName = departmentName;
}
string Department:: getDepartmentName(){
    return this -> departmentName;
}

void Department:: addEmployee(Employee* employee){

    employees.push_back(employee);
    numEmployees += 1;
}

void Department:: displayEmployees(){
    
    for (int i = 0; i < numEmployees; i++){
        employees[i] -> display();
    }
}
