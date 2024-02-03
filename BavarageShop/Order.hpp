//
//  User.hpp
//  BavarageShop
//
//  Created by Rado on 3.02.24.
//

#ifndef User_hpp
#define User_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>

#include "Drink.hpp"

using namespace std;

class Order {
    
protected:
    string userName;
    string date;
    double totalSum;
    
public:
    vector<Drink*> drinksVect;
    
    Order(string userName, string date, double totalSum);
    ~Order();
    
    void setUserName(string);
    string getUserName();
    
    void setDate(string);
    string getDate();
    
    void setTotalSum(double);
    double getTotalSum();
    
    void AddDrink(Drink* drink);
    vector<Drink*>& GetDrink();
    
    
    void orderInfoPrint();
    
};

#endif /* User_hpp */
