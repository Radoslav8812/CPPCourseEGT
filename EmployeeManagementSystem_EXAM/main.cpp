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
    
    Department* department = new Department("Software Engineering");
    Department* department1 = new Department("Education");
    
    department -> addEmployee(empl1);
    department -> addEmployee(empl2);
    department -> addEmployee(empl3);
    department -> addEmployee(empl4);
    department -> addEmployee(empl5);
    
    if (department -> employees.size() > 0){
        
        for (auto& empl: department -> employees){
            empl -> display();
        }
    }
    else{
        cout << "Empty Department!" << endl;
    }
    
    cout << endl;
    
    if (department1 -> employees.size() > 0){
        
        for (auto& empl: department1 -> employees){
            empl -> display();
        }
    }
    else{
        cout << "Empty Department!" << endl;
    }
    
    
    return 0;
}
