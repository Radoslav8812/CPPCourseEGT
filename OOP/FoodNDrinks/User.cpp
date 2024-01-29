//
//  User.cpp
//  FoodAndDrinks
//
//  Created by Rado on 22.01.24.
//

#include "User.hpp"
#include <iostream>
#include <algorithm>

using namespace std;

User:: User (string userName){
    
    this -> userName = userName;
}

void User:: setUserName(string userName){
    this -> userName = userName;
}
string User:: getUserName(){
    return this -> userName;
}

void User:: addOrder(Orders &order){
    
    ordersVect.push_back(order);
}
vector<Orders>& User::getOrders() {
    return ordersVect;
}

//void User:: print(){
//    cout << " Current user -> " << this -> userName << endl;
//    cout << " Current user orders -> " << endl;
//
//    for (auto& order : ordersVect){
//        order.print();
//        cout << endl;
//    }
//}


vector<User> User:: getClientByDrinkType(string drinkType){
    vector<User> users;
    int countDrinks = 0;
    
    for (auto& order : ordersVect){
        for (auto& drink : order.getDrinks()){
            if (drink -> getDrinkType() == drinkType){
                countDrinks += drink -> getDrinkQuantity();
                users.push_back(<#const_reference x#>)
            }
        }
    }
    
    return users;
}

void User:: findBestCliet() {
    
}

//vector<User>& User:: getClientByDrinkType(string& type) {
//
//    vector<User> clientsVect;
//
//    for (auto& order : ordersVect) {
//        for (auto& drink : order.getDrinks()) {
//            if (drink-> getDrinkType() == type) {
//                clientsVect.push_back(*this);
//                break; // Add the user only once per order
//            }
//        }
//    }
//
//    return clientsVect;
//}

vector<User> User::getTopClientDrinkTypeNAmount (string& type, double minAmount) {
    
    vector<User> topClientsVect;

    for (auto& order : ordersVect) {
        
        double orderAmount = 0.0;

        for (auto& drink : order.getDrinks()) {
            if (drink-> getDrinkType() == type) {
                orderAmount += drink-> calculatePrice();
            }
        }

        if (orderAmount > minAmount) {
            topClientsVect.push_back(*this);
        }
    }

    return topClientsVect;
}
