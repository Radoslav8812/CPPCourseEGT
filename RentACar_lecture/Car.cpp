//
//  Car.cpp
//  RentACar
//
//  Created by Rado on 19.01.24.
//

#include "Car.hpp"
#include <string>
#include <iostream>

Car:: Car(string brand, string model, string type, string color, string chasieNumber, string carNumber, double fuelConsumption) : brand(brand), model(model), type(type), color(color), chasieNumber(chasieNumber), carNumber(carNumber), fuelConsumption(fuelConsumption) {
    
    //this -> brand = brand;
    //this -> model = model;
    //this -> type = type;
    //this -> color = color;
    //this -> chasieNumber = chasieNumber;
    //this -> carNumber = carNumber;
    //this -> fuelConsumption = fuelConsumption;
}//

//void Car:: setBrand(string brand){
//    this -> brand = brand;
//}
//string Car:: getBrand(){
//    return brand;
//}
//
//void Car:: setModel(string model){
//    this -> model = model;
//}
//string Car:: getModel(){
//    return model;
//}
//
//void Car:: setType(string type){
//    this -> type = type;
//}
//string Car:: getType(){
//    return type;
//}
//
//void Car:: setColor(string color){
//    this -> color = color;
//}
//string Car:: getColor(){
//    return color;
//}
//
//void Car:: setChasieNumber(string chasieNumber){
//    this -> chasieNumber = chasieNumber;
//}
//string Car:: getChasieNumber(){
//    return chasieNumber;
//}
//
//void Car:: setCarNumber(string carNumber){
//    this -> carNumber = carNumber;
//}
//string Car:: getCarNumber(){
//    return carNumber;
//}
//
//void Car:: setFuelConsumption(double fuelConsumption){
//    this -> fuelConsumption = fuelConsumption;
//}
//double Car:: getFuelConsumption(){
//    return fuelConsumption;
//}

double Car:: rentCost(){
    return 0;
}

Car:: ~Car(){
    
}
