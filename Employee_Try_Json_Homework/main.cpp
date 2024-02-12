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
	//inputFile.close();

	ofstream outputFile(jsonFilePath);

	if (outputFile.is_open()) {
		outputFile << readEmployeesData;
		outputFile.close();
	}
	else {
		cerr << "Unable to open file for writing!" << jsonFilePath << endl;
		return 1;
	}

	//cout << "JSON content: " << readEmployeesData << endl;

	for (auto& employee : readEmployeesData["EmployeeData"]["Employees"]) {

		for (auto& kvp : employee.items()) {

			cout << "Info: ";
			cout << kvp.key() << " " << kvp.value()<< endl;
			cout << " - - - - - - - - - - - " << endl;
		}
		cout << endl;
	}

	return 0;
}