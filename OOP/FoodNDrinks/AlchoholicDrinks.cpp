//
//  AlchoholicDrinks.cpp
//  FoodAndDrinks
//
//  Created by Rado on 22.01.24.
//

#include "AlchoholicDrinks.hpp"
#include <iostream>
#include <string>

using namespace std;

AlchoholicDrinks:: AlchoholicDrinks(string drinkName, double drinkPrice, string drinkType, int drinkQuantity, double volume, double tax) :         Drinks(drinkName, drinkPrice, drinkType, drinkQuantity) {
    
    this -> volume = volume;
    this -> tax = tax;
}

void AlchoholicDrinks:: setVolume(double volume){
    this -> volume = volume;
}
double AlchoholicDrinks:: getVolume(){
    return this -> volume;
}

void AlchoholicDrinks:: setTax(double tax){
    this -> tax = tax;
}
double AlchoholicDrinks:: getTax(){
    return this -> tax;
}

double AlchoholicDrinks:: calculatePrice() {
    return  getDrinkQuantity() * (getDrinkPrice() * getTax());
}

void AlchoholicDrinks:: print(){
    Drinks:: print();
    cout << " Drink volume -> " << this -> volume << " Drink tax -> " << this -> tax;
}
