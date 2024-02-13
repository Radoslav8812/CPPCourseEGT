#include "EmployeeService.h"

pugi::xml_document EmployeeService::doc;
std::vector<Employee*> EmployeeService::employeesList;

void EmployeeService::parseEmployeesData() {
	//open file // go to EmployeesData.Employees node // loop through all empl // read the Employee node -> parseEmployee (return empl obj)// add employee obj to vector

	if (!doc.load_file("sample.xml")) {
		return;
	}

	pugi::xml_node employees = doc.child("EmployeesData").child("Employees");

	/*for (pugi::xml_node employee = employee.child("Employee"); employee; employee = employee.next_sibling("Employee")) {

	}*/

	for (auto empl : employees) {
		Employee* ePtr =Employee ::parseEmployee(empl);
		employeesList.push_back(ePtr);
	}
}

vector<Employee*> EmployeeService::getEmployeesList() {
	return employeesList;
}