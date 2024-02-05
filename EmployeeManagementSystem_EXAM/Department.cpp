//
//  Department.cpp
//  EmployeeManagementSystem
//
//  Created by Rado on 31.01.24.
//

#include "Department.hpp"


Department:: Department (string departmentName) {
    
    setDepartmentName(departmentName);
    this -> numEmployees = 0;
}

void Department:: setDepartmentName(string departmentName){
    this -> departmentName = departmentName;
}
string Department:: getDepartmentName(){
    return this -> departmentName;
}

void Department:: addEmployee(Employee* employee){

    this -> employeesVect.push_back(employee);
    this -> numEmployees++;
}

void Department:: displayEmployees(){
    
    for (int i = 0; i < employeesVect.size(); i++){
        
        employeesVect[i] -> display();
    }
}
