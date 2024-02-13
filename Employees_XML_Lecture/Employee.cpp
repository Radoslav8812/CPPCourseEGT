#include "Employee.h"

Employee::Employee(string name, string type, int age, Workstation* workStation) {

	setName(name);
	setType(type);
	setAge(age);
	setWorkStation(workStation);
}

ostream& operator<<(ostream& os, const Employee& employee) {
	os << "Name: " << employee.name << " Type: " << employee.type << " Age: " << employee.age << " Workstation: "
		<< employee.workstation;
	return os;
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

void Employee::setAge(int age) {
	this->age = age;
}
int Employee::getAge() {
	return this->age;
}

//void Employee::setWorkstation(Workstation* workstation) {
//	this->workstation = workstation;
//}
//
//Workstation* Employee::getWorkstation() {
//	return this->workstation;
//}

Employee* Employee::parseEmployee(pugi::xml_node employeeNode) {

	string name = employeeNode.attribute("Name").value();
	string type = employeeNode.attribute("Type").value();
	int age = employeeNode.attribute("Age").as_int();

	Workstation* wPtr = Workstation::parseWorkstation(employeeNode.child("Workstation"));

	return new Employee(name, type, age, wPtr);
}

void Employee::print() {
	cout << "Employee Name: " << getName() << endl;
	cout << "Employee Type: " << getType() << endl;
	cout << "Employee Age: " << getAge() << endl;
}