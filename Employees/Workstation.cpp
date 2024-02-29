#include "WorkStation.h"

Workstation::Workstation(int buiding, int floor, int desc) {

	setBuilding(building);
	setFloor(floor);
	setDesc(desc);
}

std::ostream& operator<<(std::ostream& os, const Workstation& workstation) {
	os << "building: " << workstation.building << " floor: " << workstation.floor << " desc: " << workstation.desc;
	return os;
}

void Workstation::setBuilding(int building) {
	this->building = building;
}
int Workstation::getBuilding() {
	return this->building;
}

void Workstation::setFloor(int floor) {
	this->floor = floor;
}
int Workstation::getFloor() {
	return this->floor;
}

void Workstation::setDesc(int desc) {
	this->desc = desc;
}
int Workstation::getDesc() {
	return this->desc;
}

Workstation* Workstation::parseWorkstation(pugi::xml_node workstationNode) {

	int b = workstationNode.attribute("Building").as_int();
	int f = workstationNode.attribute("Floor").as_int();
	int d = workstationNode.attribute("Desc").as_int();

	//WorkStation* w = new WorkStation(b, f, d);
	//return w;

	return new Workstation(b, f, d);
}

void Workstation::print() {
	cout << "WorkStation Buildings: " << getBuilding() << endl;
	cout << "WorkStation Floor: " << getFloor() << endl;
	cout << "WorkStation Desc: " << getDesc() << endl;
}