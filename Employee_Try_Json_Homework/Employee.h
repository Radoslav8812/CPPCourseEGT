#pragma once

#include <iostream>
#include <string>
#include <nlohmann/json.hpp>
using namespace std;

class Employee {

private:
	string name;
	string type;
	string age;

public:
	Employee();
	Employee(const nlohmann:: json& employeeData);

	void setName(string);
	string getName();

	void setType(string);
	string getType();

	void setAge(string);
	string getAge();

	void print();
};