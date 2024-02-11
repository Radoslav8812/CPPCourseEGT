
#include "EmployeeWorkstation.h"

//EmployeeWorkStation:: EmployeeWorkStation(string name, string type, string age) {
//	setName(name);
//	setType(type);
//	setAge(age);
//}

EmployeeWorkStation::EmployeeWorkStation(const nlohmann::json& employeeWorkstationData) : employee(employeeWorkstationData["Employee"]), 
			workStation(employeeWorkstationData["Employee"]["Workstation"])
{
	/*setName(name);
	setType(type);
	setAge(age);*/
}

void EmployeeWorkStation::setName(string name) {
	this->name = name;
}
string EmployeeWorkStation::getName() {
	return this->name;
}

void EmployeeWorkStation::setType(string type) {
	this->type = type;
}
string EmployeeWorkStation::getType() {
	return this->type;
}

void EmployeeWorkStation::setAge(string age) {
	this->age = age;
}
string EmployeeWorkStation::getAge() {
	return this->age;
}

//void EmployeeWorkStation::setWorkStation(WorkStation& workStation) const {
//	this->workStation = workStation;
//}
const WorkStation& EmployeeWorkStation::getWorkStation() const  {
	return this->workStation;
}

//void EmployeeWorkStation::setEmployee(Employee& employee) const {
//	this->employee = employee;
//}
const Employee& EmployeeWorkStation::getEmployee() const{
	return this->employee;
}

void EmployeeWorkStation::print() {
	
	employee.print();
	workStation.print();
 }