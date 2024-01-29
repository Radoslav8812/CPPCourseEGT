//
//  main.cpp
//  FoodNDrinks
//
//  Created by Rado on 23.01.24.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>


#include "Drinks.hpp"
#include "NoAlchoholicDrinks.hpp"
#include "AlchoholicDrinks.hpp"
#include "User.hpp"
#include "Orders.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    
    //string drinkName, double drinkPrice, string drinkType, int drinkQuantity, double liters, double citytax)
    Drinks* water = new NoAlchoholicDrinks("Mineral Water", 1.5, "water", 2, 2.5, 1.5);
    water -> print();
    //(string drinkName, double drinkPrice, string drinkType, int drinkQuantity, double volume, double tax)
    Drinks* wine = new AlchoholicDrinks("Red Wine", 10.0, "wine", 0.75, 1.2, 20.50);
    wine -> print();
    
    vector<Drinks*> drinksVector;
    
    drinksVector.push_back(water);
    drinksVector.push_back(wine);
    
    Orders order("1", drinksVector, "2024-01-22", 25.0);
    Orders order2("2", drinksVector, "2020-01-22", 55.00);
    
    User user1("1");
    user1.addOrder(order);
    User user2("2");
    user2.addOrder(order2);
    
    for (auto& order : user1.getOrders()) {
           for (auto& drink : order.getDrinks()) {
               
               if (dynamic_cast<AlchoholicDrinks*>(drink)) {
                   cout << drink -> getDrinkQuantity() << " ";
               }
               else if (dynamic_cast<NoAlchoholicDrinks*>(drink)){
                   cout << drink -> getDrinkQuantity() << " ";
               }
           }
       }
       cout << endl;
    
    return 0;
}
