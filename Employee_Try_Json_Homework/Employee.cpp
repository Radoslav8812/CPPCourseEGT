#include "Employee.h"

Employee::Employee(const nlohmann::json& employeeData) : name(employeeData["Name"]), type(employeeData["Type"]), age(to_string(employeeData["Age"])) {

	/*setName(name);
	setType(type);
	setAge(age);*/
}


void Employee::setName(string name) {
	this->name = name;
}
string Employee::getName() {
	return this->name;
}

void Employee::setType(string type) {
	this->type = type;
}
string Employee::getType() {
	return this->type;
}

void Employee::setAge(string age) {
	this->age = age;
}
string Employee::getAge() {
	return this->age;
}

void Employee::print() {
	cout << "Employee Name: " << getName() << endl;
	cout << "Employee Type: " << getType() << endl;
	cout << "Employee Age: " << getAge() << endl;
}