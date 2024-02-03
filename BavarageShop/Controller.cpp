//
//  Controller.cpp
//  BavarageShop
//
//  Created by Rado on 3.02.24.
//

#include "Controller.hpp"

Controller:: Controller (){
    
    ordersVect = {};
}

void Controller:: addOrder(Order &order){
    
    ordersVect.push_back(order);
}

void Controller:: printDrinkInfo(){
    
    map <string, int> drinksMap;
    
    for (auto& order : ordersVect){
        for (auto& drink : order.drinksVect){
            drinksMap[drink -> getName()]++;
        }
    }
    
    cout << "Sales drink Info: " << endl;
    for (auto& kvp : drinksMap){
        cout << "Sold drinkName: " << kvp.first << ", Sold drink times: " << kvp.second << endl;
    }
}

Order Controller:: getBestCustomer(){
    
    auto bestCustomer = max_element(ordersVect.begin(), ordersVect.end(), [](Order& a, Order& b){
        return a.getTotalSum() < b.getTotalSum();
    });
    
    return *bestCustomer;
}

vector<Order> Controller:: ordersByDrinkType(string drinkType){
    
    vector<Order> sortedOrdersVect;
    
    for (auto& order: ordersVect){
        for (auto& drink : order.drinksVect){
            
            if (drink -> getName() == drinkType){
                sortedOrdersVect.push_back(order);
                // for no more iterations after found.
                break;
            }
        }
    }
    
    return sortedOrdersVect;
}

vector<Order> Controller:: topCustomers(double minAmount){
    
    vector<Order> emptyVect;
    return emptyVect;
}

Controller:: ~Controller(){
    
}
