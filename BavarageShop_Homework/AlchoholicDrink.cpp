//
//  AlchoholicDrink.cpp
//  BavarageShop
//
//  Created by Rado on 3.02.24.
//

#include "AlchoholicDrink.hpp"

AlchoholicDrink :: AlchoholicDrink(string name, double price, int quantity, double volume, double tax) : Drink(name, price, quantity) {
    
    setVolume(volume);
    setTax(tax);
}

void AlchoholicDrink:: setVolume(double volume){
    this -> volume = volume;
}
double AlchoholicDrink:: getVolume(){
    return this -> volume;
}

void AlchoholicDrink:: setTax(double tax){
    this -> tax = tax;
}
double AlchoholicDrink:: getTax(){
    return this -> tax;
}

double AlchoholicDrink:: calculatePrice(){
    
    return quantity * price + getTax();
}

void AlchoholicDrink:: print(){
    cout << "Alchoholic drink name: " << this -> name << ", price: " << this -> price << ", quantity: " << this -> quantity << ", liters: " << this -> getVolume() << ", CityTax: " << this -> getTax() << " ";
}
