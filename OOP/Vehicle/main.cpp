//
//  main.cpp
//  Vehicle
//
//  Created by Rado on 17.01.24.
//

#include <iostream>
#include <string>
#include <vector>
#include "Vehicle.hpp"
#include "Car.hpp"
#include "MotorCycle.hpp"
#include "Truck.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<Vehicle*> vehicleVect;
    
    vehicleVect.push_back(new Car("Toyota", "Supra", 1200, 1500, {"GPS", "Leather Seats"}));
    vehicleVect.push_back(new MotorCycle("Harley-Davidson", "Street 750", 140, 250, {"Helmet", "Gloves"}));
    vehicleVect.push_back(new Truck("Ford", "F-150", 300, 4000, {"Titan bumper", "Gravel Tyres"}));

    for (auto& v : vehicleVect){
        v -> print();
        cout << "Price: " << v -> calculatePrice() << endl;
        v -> printParts();
        v -> Specific();
        cout << endl;
    }
    
    for (auto& v : vehicleVect) {
        delete& v;
    }
    
    return 0;
}
