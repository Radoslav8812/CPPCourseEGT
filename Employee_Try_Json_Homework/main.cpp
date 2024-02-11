#include <iostream>
#include <vector>

#include <nlohmann/json.hpp>
#include <fstream>

#include "EmployeeWorkStation.h"

using json = nlohmann::json;
using namespace std;

int main() {
 
    string jsonFilePath = "C:/Users/User/Desktop/VS CPP Projects/Employees/Data.Json";

    // Reading JSON
    ifstream inputFile(jsonFilePath);

    if (!inputFile.is_open()) {
        cerr << "Error: Unable to open file !" << jsonFilePath << endl;
        return 1;
    }

    // Parse JSON
    json readEmployeesData;
    inputFile >> readEmployeesData;
    inputFile.close();

    vector<EmployeeWorkStation> employeeWorkstationsVect;

    for (auto& employeeData : readEmployeesData["EmployeesData"]["Employees"]) {

        EmployeeWorkStation employeeWorkstation(employeeData);
        employeeWorkstationsVect.push_back(employeeWorkstation);
    }

    for (auto& ew : employeeWorkstationsVect) {
        ew.print();
        cout << endl;
    }

    return 0;
}