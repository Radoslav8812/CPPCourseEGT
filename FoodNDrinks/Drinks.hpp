//
//  Drinks.hpp
//  FoodAndDrinks
//
//  Created by Rado on 22.01.24.
//

#ifndef Drinks_hpp
#define Drinks_hpp

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class Drinks{
  
private:
    string drinkName;
    double drinkPrice;
    int drinkQuantity;
    string drinkType;
    
public:
    Drinks(string, double, string, int);
    
    void setDrinkName(string);
    string getDrinkName();
    
    void setDrinkPrice(double);
    double getDrinkPrice();
    
    void setDrinkQuantity(int);
    int getDrinkQuantity();
    
    void setDrinkType(string);
    string getDrinkType();
    
    virtual double calculatePrice();
    
    void print();
};
#endif /* Drinks_hpp */
