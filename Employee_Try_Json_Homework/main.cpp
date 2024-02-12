#include <iostream>
#include <vector>

#include <nlohmann/json.hpp>
#include <fstream>

#include "EmployeeWorkStation.h"

using json = nlohmann::json;
using namespace std;

int main() {

	string jsonFilePath = "C:/Users/User/Desktop/VS CPP Projects/Employees/EmployeesData.Json";

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

	json newEmployeeData = {
	   {"Name", "Spiridon Spiridonovich"},
	   {"Position", "Software Engineer"},
	   {"Salary", 100000}
	};

	//readEmployeesData["EmployeeData"]["Employees"].push_back(newEmployeeData);

	ofstream outputFile(jsonFilePath);

	//if (outputFile.is_open()) {
	//	outputFile << readEmployeesData; 
	//	outputFile.close();

	//	cout << "New employee added to the Json." << endl;
	//}
	//else {
	//	cerr << "Unable to open file for writing!" << jsonFilePath << endl;
	//	return 1;
	//}

	//cout << "JSON content: " << readEmployeesData << endl;

	for (auto& employee : readEmployeesData["EmployeeData"]["Employees"]) {

		for (auto& kvp : employee.items()) {
			cout << kvp.key() << " Value: " << kvp.value() << endl;
		}
		cout << endl; 
	}

	return 0;
}