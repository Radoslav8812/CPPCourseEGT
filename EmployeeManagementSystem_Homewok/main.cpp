//
//  main.cpp
//  EmployeeManagementSystem
//
//  Created by Rado on 31.01.24.
//

#include <iostream>
#include <string>
#include <vector>
#include "Employee.hpp"
#include "Department.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Employee* empl1 = new Employee("Tosho", 1, "C++ midd");
    Employee* empl2 = new Employee("Gosho", 2, "C++ Junnior");
    Employee* empl3 = new Employee("Dragan", 3, "C++ Senior");
    Employee* empl4 = new Employee("Petkan", 1, "C++ Team Lead");
    Employee* empl5 = new Employee("Osman", 1, "C++ architect");
    
    vector<Employee*> EmpVect = {empl1, empl2, empl3, empl4, empl5};
    
    Department* department = new Department("Software Engineering");
    Department* department1 = new Department("Education");
    

    for (int i = 0; i < 3; i++){
        department -> addEmployee(EmpVect[i]);
    }
    
    cout << endl;
    for (int i = 3; i < EmpVect.size(); i++){
        department1 -> addEmployee(EmpVect[i]);
    }
    
    cout << "Software Engineers: " << endl;
    department -> displayEmployees();
    
    cout << "Education: " << endl;
    department1 -> displayEmployees();
    
    return 0;
}
