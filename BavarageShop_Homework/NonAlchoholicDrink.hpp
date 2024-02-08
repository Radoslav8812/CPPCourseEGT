//
//  NonAlchoholicDrink.hpp
//  BavarageShop
//
//  Created by Rado on 3.02.24.
//

#ifndef NonAlchoholicDrink_hpp
#define NonAlchoholicDrink_hpp

#include <stdio.h>
#include <iostream>
#include <string>

#include "Drink.hpp"

using namespace std;

class NonAlchoholicDrink : public Drink{
  
private:
    double liters;
    double cityTax;
    
public:
    NonAlchoholicDrink(string name, double price, int quantity ,double liters, double cityTax);
    
    
    void setLiters(double);
    double getLiters();
    
    void setCityTax(double);
    double getCityTax();
    
    void print() override;
    double calculatePrice() override;
    
};

#endif /* NonAlchoholicDrink_hpp */
