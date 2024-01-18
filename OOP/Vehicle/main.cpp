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
    /*
    vehicleVect.push_back(new Car("Toyota", "Supra", 1200, 1500, {"GPS", "Leather Seats"}));
    vehicleVect.push_back(new Car("Nissan", "GT-R", 1700, 1800, {"LC", "SportSeats"}));
    vehicleVect.push_back(new MotorCycle("Harley-Davidson", "Street 750", 140, 250, {"Helmet", "Gloves"}));
    vehicleVect.push_back(new MotorCycle("Honda", "CBR 1000RR", 190, 180, {"Helmet", "Gloves"}));
    vehicleVect.push_back(new Truck("Ford", "F-150", 300, 4000, {"Titan bumper", "Gravel Tyres"}));
    vehicleVect.push_back(new Truck("Cadilac", "Escalade", 500, 2500, {"Chrome bumper", "Chrome Wheels"}));

    for (auto& v : vehicleVect){
        v -> print();
        cout << "Price: " << v -> calculatePrice() << endl;
        v -> printParts();
        v -> Specific();
        cout << endl;
    }
    
    for (auto& v : vehicleVect) {
        delete v;
    }
    */
    
    
    int n;
    cout << "enter the number of vehicles you want to add: ";
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cout << " !!! VEHICLE MENU !!! " << endl;
        cout << " 1) CAR " << endl;
        cout << " 2) MOTORCYCLE " << endl;
        cout << " 3) TRUCK " << endl;
        cout << " Enter Your Choise " << endl;
        
        int choise;
        cin >> choise;
        
        string brand;
        cout << "Enter Brand: ";
        cin >> brand;
        
        string model;
        cout << "Enter Model: ";
        cin >> model;
        
        int horsePower;
        cout << "Enter HorsePower: ";
        cin >> horsePower;
        
        int weight;
        cout << "Enter Weight: ";
        cin >> weight;
        
        int numOfExtras;
        cout << "Enter number of extras: ";
        cin >> numOfExtras;
        
        vector<string> extrasVect;
        for (int j = 0; j < numOfExtras; j++){
            string item;
            cout << "Enter current item: ";
            cin >> item;
            extrasVect.push_back(item);
        }
        
        Vehicle* vehicle;
        
        if (choise == 1){
            vehicle = new Car(brand, model, horsePower, weight, extrasVect);
        } else if (choise == 2){
            vehicle = new MotorCycle (brand, model, horsePower, weight, extrasVect);
        } else if (choise == 3){
            vehicle = new Truck (brand, model, horsePower, weight, extrasVect);
        }else {
            cout << "INVALID INPUT!" << endl;
        }
        
        vehicleVect.push_back(vehicle);
    }
    cout << endl;
    
    for (auto& v : vehicleVect){
        cout << endl;
        v -> print();
        cout << "Price: " << v -> calculatePrice() << endl;
        v -> printParts();
        v -> Specific();
        cout << endl;
    }
    
    for (auto& v : vehicleVect) {
        delete v;
    }
    
    return 0;
}
