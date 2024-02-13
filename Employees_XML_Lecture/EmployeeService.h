#pragma once

#include "pugixml.hpp"
#include "Employee.h"
#include <iostream>
#include <vector>

using namespace std;

class EmployeeService {

private:
	static vector<Employee*> employeesList;
	static pugi::xml_document doc;

public:

	static void parseEmployeesData();

	static vector<Employee*> getEmployeesList();
};