//
//  Drink.cpp
//  BavarageShop
//
//  Created by Rado on 3.02.24.
//

#include "Drink.hpp"

Drink:: Drink (string name, double price, int quantity) {
    setName(name);
    setPrice(price);
    setQuantity(quantity);
}

void Drink:: setName(string name){
    this -> name = name;
}
string Drink:: getName(){
    return this -> name;
}

void Drink:: setPrice(double price){
    this -> price = price;
}
double Drink:: getPrice(){
    return this -> price;
}

void Drink:: setQuantity(int quantity){
    this -> quantity = quantity;
}
int Drink:: getQuantity(){
    return this -> quantity;
}

Drink:: ~Drink(){
    
}
