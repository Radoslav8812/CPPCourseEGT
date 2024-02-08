//
//  Controller.hpp
//  BavarageShop
//
//  Created by Rado on 3.02.24.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include "Order.hpp"

using namespace std;

class Controller {
    
private:
    
    
public:
    Controller();
    ~Controller();
    
    vector<Order> ordersVect;
    
    void addOrder(Order& order);
    void printDrinkInfo();
    Order getBestCustomer();
    
    vector<Order> ordersByDrinkType(string drinkType);
    
};

#endif /* Controller_hpp */
