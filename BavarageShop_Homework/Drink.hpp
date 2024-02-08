//
//  Drink.hpp
//  BavarageShop
//
//  Created by Rado on 3.02.24.
//

#ifndef Drink_hpp
#define Drink_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Drink{
    
protected:
    string name;
    double price;
    int quantity;
    
public:
    Drink(string name, double price, int quantity);
    virtual ~Drink();
    
    void setName(string);
    string getName();
    
    void setPrice(double);
    double getPrice();
    
    void setQuantity(int);
    int getQuantity();
    
    virtual void print() = 0;
    virtual double calculatePrice() = 0;
};


#endif /* Drink_hpp */
