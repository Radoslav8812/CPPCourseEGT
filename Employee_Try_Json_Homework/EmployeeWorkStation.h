#pragma once
#include "WorkStation.h"
#include "Employee.h"

#include <nlohmann/json.hpp>
#include <iostream>
#include <string>

using namespace std;

class EmployeeWorkStation {

private:
	string name;
	string type;
	string age;

	Employee employee;
	WorkStation workStation;

public:
	EmployeeWorkStation();
	EmployeeWorkStation(const nlohmann::json& employeeWorkstationData);

	void setName(string);
	string getName();

	void setType(string);
	string getType();

	void setAge(string);
	string getAge();

	void setWorkStation(WorkStation&);
	const WorkStation& getWorkStation() const;

	void setEmployee(Employee&);
	const Employee& getEmployee() const;

	void print();
};