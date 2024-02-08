//
//  Animal.cpp
//  DiamondStructureOOP
//
//  Created by Rado on 30.01.24.
//

#include "Animal.hpp"

Animal:: Animal (string name, string livingArea, string foodType, double foodQuantity, double foodPerDay) : name(name), livingArea(livingArea), foodType(foodType), foodQuantity(foodQuantity), foodPerDay(foodPerDay){
    
    setName(name);
    setLivingArea(livingArea);
    setFoodType(foodType);
    setFoodQuantity(foodQuantity);
    setFoodPerDay(foodPerDay);
}

void Animal:: setName(string name){
    this -> name = name;
}
string Animal:: getName(){
    return this -> name;
}

void Animal:: setLivingArea(string livingArea){
    this -> livingArea = livingArea;
}
string Animal:: getLivingArea(){
    return this -> livingArea;
}

void Animal:: setFoodType(string foodType){
    this -> foodType = foodType;
}
string Animal:: getFoodType(){
    return this -> foodType;
}

void Animal:: setFoodQuantity(double foodQuantity){
    this -> foodQuantity = foodQuantity;
}
double Animal:: getFoodQuantity(){
    return this -> foodQuantity;
}

void Animal:: setFoodPerDay(double foodPerDay){
    this -> foodPerDay = foodPerDay;
}
double Animal:: getFoodPerDay(){
    return this -> foodPerDay;
}

void Animal:: Eat(){
    
}

void Animal:: Sleep() {
    
}

void Animal:: Sound(){
    
}

bool Animal:: IsHungry(){
    
    if (getFoodQuantity() - getFoodPerDay() >= 0) {
        cout << "Not hungry! " << getFoodQuantity() - getFoodPerDay() << " food left" << endl;
        return false;
    } else {
        cout << "Hungry! " << getFoodPerDay() - getFoodQuantity() << " more food needed" << endl;
        return true;
    }
}

void Animal:: Print(){
    cout << "Name: " << this -> getName() << ", Living Area: " << this -> getLivingArea() << ", Type of Food: " << this -> getFoodType() << ", Food Quantity: " << this -> getFoodQuantity() << ", Food Per Day: " << this -> getFoodPerDay() << endl;
}



