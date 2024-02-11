#include "WorkStation.h"

//WorkStation::WorkStation(string buildings, string floor, string desc) {
//
//	setBuildings(buildings);
//	setFloor(floor);
//	setDesc(desc);
//}

WorkStation::WorkStation(const nlohmann::json& workstationData) : buildings(to_string(workstationData["Employee"]["Workstation"]["Building"])),
	floor(to_string(workstationData["Employee"]["Workstation"]["Floor"])), desc(to_string(workstationData["Employee"]["Workstation"]["Desc"])) {

	/*setBuildings(buildings);
	setFloor(floor);
	setDesc(desc);*/
}

void WorkStation::setBuildings(string buildings) {
	this->buildings = buildings;
}
string WorkStation::getBuildings() {
	return this->buildings;
}

void WorkStation::setFloor(string floor) {
	this->floor = floor;
}
string WorkStation::getFloor() {
	return this->floor;
}

void WorkStation::setDesc(string desc) {
	this->desc = desc;
}
string WorkStation::getDesc() {
	return this->desc;
}

void WorkStation::print() {
	cout << "WorkStation Buildings: " << getBuildings() << endl;
	cout << "WorkStation Floor: " << getFloor() << endl;
	cout << "WorkStation Desc: " << getDesc() << endl;
}