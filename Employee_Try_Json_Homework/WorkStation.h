#pragma once
#include <iostream>
#include <string>
#include <nlohmann/json.hpp>

using namespace std;

class WorkStation {

private:
	string buildings;
	string floor;
	string desc;

public:
	WorkStation() = default;
	WorkStation(const nlohmann::json& workstationData);

	void setBuildings(string);
	string getBuildings();

	void setFloor(string);
	string getFloor();

	void setDesc(string);
	string getDesc();

	void print();
};