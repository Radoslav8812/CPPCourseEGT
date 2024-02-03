//
//  NonAlchoholicDrink.cpp
//  BavarageShop
//
//  Created by Rado on 3.02.24.
//

#include "NonAlchoholicDrink.hpp"
#include "Drink.hpp"
#include <iostream>

NonAlchoholicDrink:: NonAlchoholicDrink(string name, double price, int quantity, double liters, double cityTax) : Drink( name,  price, quantity) {
    
    setLiters(liters);
    setCityTax(cityTax);
}

void NonAlchoholicDrink:: setLiters(double liters){
    this -> liters = liters;
}
double NonAlchoholicDrink:: getLiters(){
    return this -> liters;
}

void NonAlchoholicDrink:: setCityTax(double cityTax){
    this -> cityTax = cityTax;
}
double NonAlchoholicDrink:: getCityTax(){
    return this -> cityTax;
}

double NonAlchoholicDrink:: calculatePrice(){
    return this -> quantity * price + getCityTax();
}

void NonAlchoholicDrink:: print(){
    cout << "Non alchoholic drink name: " << this -> name << ", price: " << this -> price << ", quantity: " << this -> quantity << ", liters: " << this -> getLiters() << ", CityTax: " << this -> getCityTax() << " ";
}

