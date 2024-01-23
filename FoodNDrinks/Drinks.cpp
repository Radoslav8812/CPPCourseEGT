//
//  Drinks.cpp
//  FoodAndDrinks
//
//  Created by Rado on 22.01.24.
//

#include "Drinks.hpp"
#include <iostream>
#include <string>


//string, double, string, int
Drinks:: Drinks(string drinkName, double drinkPrice, string drinkType, int drinkQuantity) {
    
    this -> drinkName = drinkName;
    this -> drinkPrice = drinkPrice;
    this -> drinkType = drinkType;
    this -> drinkQuantity = drinkQuantity;
}

void Drinks:: setDrinkName(string drinkName){
    this -> drinkName = drinkName;
}
string Drinks:: getDrinkName(){
    return this -> drinkName;
}

void Drinks:: setDrinkPrice(double drinkPrice){
    this -> drinkPrice = drinkPrice;
}
double Drinks:: getDrinkPrice(){
    return this -> drinkPrice;
}

void Drinks:: setDrinkQuantity(int drinkQuantity){
    this -> drinkQuantity = drinkQuantity;
}
int Drinks:: getDrinkQuantity(){
    return this -> drinkQuantity;
}

void Drinks:: setDrinkType(string drinkType){
    this -> drinkType = drinkType;
}
string Drinks:: getDrinkType(){
    return this -> drinkType;
}

double Drinks:: calculatePrice(){
    return getDrinkPrice() * getDrinkQuantity();
}

void Drinks:: print(){
    cout << "Drink name -> " << drinkName << " Drink price ->  " <<
    drinkPrice << " Drink Type ->" << drinkType << " Drink quantity -> " << drinkQuantity ;
}
