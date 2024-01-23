//
//  AlchoholicDrinks.hpp
//  FoodAndDrinks
//
//  Created by Rado on 22.01.24.
//

#ifndef AlchoholicDrinks_hpp
#define AlchoholicDrinks_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "Drinks.hpp"

using namespace std;

class AlchoholicDrinks : public Drinks{
    
protected:
    double volume;
    double tax;
    
public:
    AlchoholicDrinks (string, double, string, int, double, double);
    
    void setVolume(double);
    double getVolume();
    
    void setTax(double);
    double getTax();
    
    virtual double calculatePrice();
    
    void print();
    
};
#endif /* AlchoholicDrinks_hpp */
