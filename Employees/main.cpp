#include <iostream>
#include <fstream>
#include <string>

#include "pugixml.hpp"
#include "EmployeeService.h"

using namespace pugi;
using namespace std;
//using json = nlohmann::json;

int main() {

    EmployeeService::parseEmployeesData();

    /*  std::ostream& operator<<(std::ostream & os, const Workstation & workstation) {
          os << "building: " << workstation.building << " floor: " << workstation.floor << " desc: " << workstation.desc;
          return os;
      }

      friend std::ostream& operator<<(std::ostream& os, const Workstation& workstation);*/

    for (auto employee : EmployeeService::getEmployeesList()){
        cout << *employee << endl;
    }

    return 0;
}