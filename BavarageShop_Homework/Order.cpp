//
//  User.cpp
//  BavarageShop
//
//  Created by Rado on 3.02.24.
//

#include "Order.hpp"

Order:: Order(string userName, string date, double totalSum) {
    
    setUserName(userName);
    setDate(date);
    setTotalSum(totalSum);
    
    drinksVect = {};
}

void Order:: setUserName(string userName){
    this -> userName = userName;
}
string Order:: getUserName(){
    return this -> userName;
}

void Order:: setDate(string date){
    this -> date = date;
}
string Order:: getDate(){
    return this -> date;
}

void Order:: setTotalSum(double totalSum){
    this -> totalSum = totalSum;
}
double Order:: getTotalSum(){
    return this -> totalSum;
}

void Order::AddDrink(Drink* drink) {
    
    drinksVect.push_back(drink);
}
vector<Drink*>& Order:: GetDrink(){
    return drinksVect;
}

void Order:: orderInfoPrint(){
    cout << "Username: " << getUserName() << ", Date: " << getDate() << ", Total Sum: " << getTotalSum() << endl;
}

Order:: ~Order(){
    
}
