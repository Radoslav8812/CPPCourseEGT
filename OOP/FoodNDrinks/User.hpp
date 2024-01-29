//
//  User.hpp
//  FoodAndDrinks
//
//  Created by Rado on 22.01.24.
//

#ifndef User_hpp
#define User_hpp

#include "Drinks.hpp"
#include "Orders.hpp"
#include "NoAlchoholicDrinks.hpp"
#include "AlchoholicDrinks.hpp"
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>


using namespace std;

class User{

private:
    string userName;
    vector<Orders> ordersVect;
    
public:
    User(string userName);
    
    void setUserName(string);
    string getUserName();
    
    void setOrders(vector<Orders>& ordersVect);
    vector<Orders>& getOrders();
    
    void addOrder(Orders& order);
    
    int CountOfSoldDinksByType(string& drinkType);
    
    void findBestCliet();
    
    vector<User> getClientByDrinkType(string);
    vector<User> getTopClientDrinkTypeNAmount(string& type, double minAmount);
    
    
    User& getBestClient();
    
    void print();
};
    

#endif /* User_hpp */
