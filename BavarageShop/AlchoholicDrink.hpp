//
//  AlchoholicDrink.hpp
//  BavarageShop
//
//  Created by Rado on 3.02.24.
//

#ifndef AlchoholicDrink_hpp
#define AlchoholicDrink_hpp

#include <stdio.h>
#include <string>
#include <iostream>

#include "Drink.hpp"
using namespace std;

class AlchoholicDrink : public Drink{
  
private:
    double volume;
    double tax;
    
public:
    AlchoholicDrink(string name, double price, int quantity, double volume, double tax);
    
    
    void setVolume(double);
    double getVolume();
    
    void setTax(double);
    double getTax();
    
    void print() override;
    double calculatePrice() override;
};

#endif /* AlchoholicDrink_hpp */
