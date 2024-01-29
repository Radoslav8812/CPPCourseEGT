//
//  Orders.hpp
//  FoodAndDrinks
//
//  Created by Rado on 22.01.24.
//

#ifndef Orders_hpp
#define Orders_hpp

#include "NoAlchoholicDrinks.hpp"
#include "AlchoholicDrinks.hpp"
#include "User.hpp"
#include "Drinks.hpp"
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Orders {
    
private:
    string clientName;
    vector<Drinks*> drinksVect;
    string date;
    double totalSum;
    
public:
    Orders (string, vector<Drinks*> drinksVect, string, double);
    
    void setClientName(string);
    string getClientName();
    
    void setDrinks(vector<Drinks*>& drinksVect);
    vector<Drinks*>& getDrinks();
    
    void addDrink(Drinks* drink);
    void addDrinks(vector<Drinks*>& drinks);
    
    void setDate(string);
    string getDate();
    
    void setTotalSum(double);
    double getTotalSum();
    
    void print();
    
};


#endif /* Orders_hpp */
