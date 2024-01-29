//
//  Orders.cpp
//  FoodAndDrinks
//
//  Created by Rado on 22.01.24.
//
#include "Drinks.hpp"
#include "User.hpp"
#include "NoAlchoholicDrinks.hpp"
#include "AlchoholicDrinks.hpp"

#include "Orders.hpp"
#include <string>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

Orders:: Orders (string clientName, vector<Drinks*> drinksVect, string date, double totalSum) {
    
    this -> clientName = clientName;
    this -> drinksVect = drinksVect;
    this -> date = date;
    this -> totalSum = totalSum;
}

void Orders:: setClientName(string clientName) {
    this -> clientName = clientName;
}
string Orders:: getClientName(){
    return this -> clientName;
}

void Orders:: setDrinks (vector<Drinks*>& drinksVect) {
    this->drinksVect = drinksVect;
}
vector<Drinks*>& Orders:: getDrinks() {
    return this -> drinksVect;
}

void Orders:: setDate(string date){
    this -> date = date;
}
string Orders:: getDate(){
    return this -> date;
}

void Orders:: setTotalSum(double totalSum){
    this -> totalSum = totalSum;
}
double Orders:: getTotalSum(){
    return this -> totalSum;
}

void Orders:: addDrink(Drinks* drink) {
    
    this-> drinksVect.push_back(drink);
}

void Orders:: addDrinks(vector<Drinks*>& drinks) {
    
    this-> drinksVect.insert(this-> drinksVect.end(), drinks.begin(), drinks.end());
}


void Orders:: print() {
    
    for (auto& drink : drinksVect) {
        drink -> print();
        cout << endl;
    }
}


