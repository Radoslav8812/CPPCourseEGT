#include <iostream>
#include <vector>

#include <nlohmann/json.hpp>
#include <fstream>

#include "EmployeeWorkStation.h"

using json = nlohmann::json;
using namespace std;

int main() {

	string jsonFilePath = "C:/Users/User/Desktop/VS CPP Projects/Employees/EmployeesData.json";
	// Reading JSON
	ifstream inputFile(jsonFilePath);

	if (!inputFile.is_open()) {
		cerr << " Unable to open file !" << jsonFilePath << endl;
		return 1;
	}

	// Parse JSON
	json readEmployeesData;
	inputFile >> readEmployeesData;
	inputFile.close();

	//add new json data
	json newEmployeeToAdd = {
	   "Employee", {
		   {"Age", 28},
		   {"Name", "Rado"},
		   {"Type", "Full-Time"},
		      {"workstationData", {
		        {"Building", 5},
		        {"Desc", 5},
		        {"Floor", 5}
			  }}
	   }
	};
	//readEmployeesData["Employees"].push_back(newEmployeeToAdd);

	ofstream outputFile(jsonFilePath);

	if (outputFile.is_open()) {
		outputFile << readEmployeesData;
		outputFile.close();
	}
	else {
		cerr << "Unable to open file !" << jsonFilePath << endl;
		return 1;
	}

	cout << setw(2) << readEmployeesData << endl;

	/*for (auto& employee : readEmployeesData["EmployeeData"]["Employees"]) {

		for (auto& kvp : employee.items()) {

			cout << "Info: ";
			cout << kvp.key() << " " << kvp.value()<< endl;
			cout << " - - - - - - - - - - - " << endl;
		}
		cout << endl;
	}*/

	return 0;
}