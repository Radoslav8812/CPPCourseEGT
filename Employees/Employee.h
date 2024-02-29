#pragma once

#include <iostream>
#include <string>
#include "WorkStation.h"

using namespace std;

class Employee {

private:
	string name;
	string type;
	int age;

	Workstation* workstation;
public:
	Employee(string name, string type, int age, Workstation*);

	void setName(string);
	string getName();

	void setType(string);
	string getType();

	void setAge(int);
	int getAge();

	void setWorkStation(Workstation*);
	Workstation* getWorkStation();

	static Employee* parseEmployee(pugi::xml_node);

	friend ostream& operator<<(ostream& os, const Employee& employee);

	void print();
};