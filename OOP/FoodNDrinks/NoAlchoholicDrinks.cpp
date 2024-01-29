//
//  NoAlchoholicDrinks.cpp
//  FoodAndDrinks
//
//  Created by Rado on 22.01.24.
//

#include "NoAlchoholicDrinks.hpp"
#include "Drinks.hpp"
#include <string>
#include <iostream>

using namespace std;

NoAlchoholicDrinks:: NoAlchoholicDrinks (string drinkName, double drinkPrice, string drinkType, int drinkQuantity, double liters, double citytax) :         Drinks(drinkName, drinkPrice, drinkType, drinkQuantity), liters(liters), cityTax(citytax){
    
    this -> liters = liters;
    this -> cityTax = citytax;
}

void NoAlchoholicDrinks:: setLiters(double liters){
    this -> liters = liters;
}
double NoAlchoholicDrinks:: getLiters(){
    return this -> liters;
}

void NoAlchoholicDrinks:: setCityTax(double cityTax){
    this -> cityTax = cityTax;
}
double NoAlchoholicDrinks:: getCityTax(){
    return this -> cityTax;
}

double NoAlchoholicDrinks:: calculatePrice(){
    return (getDrinkQuantity() * getDrinkPrice()) + getCityTax();
}

void NoAlchoholicDrinks:: print(){
    Drinks:: print();
    cout << " Drink liters -> " << this ->  liters << " Drink cityTax -> " << this -> cityTax;
}
