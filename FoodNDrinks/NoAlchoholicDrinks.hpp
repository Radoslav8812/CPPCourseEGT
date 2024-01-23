//
//  NoAlchoholicDrinks.hpp
//  FoodAndDrinks
//
//  Created by Rado on 22.01.24.
//

#ifndef NoAlchoholicDrinks_hpp
#define NoAlchoholicDrinks_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Drinks.hpp"

using namespace std;

class NoAlchoholicDrinks : public Drinks{
    
private:
    double liters;
    double cityTax;
public:
    
    //string, double, string , int, double, double
    NoAlchoholicDrinks(string, double, string , int, double, double);
    
    void setLiters(double);
    double getLiters();
    
    void setCityTax(double);
    double getCityTax();
    
    virtual double calculatePrice();
    
    void print();
};
#endif /* NoAlchoholicDrinks_hpp */
