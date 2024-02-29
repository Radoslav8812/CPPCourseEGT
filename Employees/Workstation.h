#pragma once
#include <iostream>
#include <string>
#include "pugixml.hpp"

using namespace std;

class Workstation {

private:
	int building;
	int floor;
	int desc;

public:
	Workstation(int building, int floor, int desc);

	void setBuilding(int);
	int getBuilding();

	void setFloor(int);
	int getFloor();

	void setDesc(int);
	int getDesc();

	void print();

	friend std::ostream& operator<<(std::ostream& os, const Workstation& workstation);

	static Workstation* parseWorkstation(pugi::xml_node);
};