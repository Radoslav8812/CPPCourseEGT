//
//  Animal.hpp
//  DiamondStructureOOP
//
//  Created by Rado on 30.01.24.
//

#ifndef Animal_hpp
#define Animal_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Animal{
    
protected:
    string name;
    string livingArea;
    string foodType;
    double foodQuantity;
    double foodPerDay;
    
public:
    Animal(string, string, string, double, double);
    
    void setName(string);
    string getName();
    
    void setLivingArea(string);
    string getLivingArea();
    
    void setFoodType(string);
    string getFoodType();
    
    void setFoodQuantity(double);
    double getFoodQuantity();
    
    void setFoodPerDay(double);
    double getFoodPerDay();
    
    
    virtual void Eat();
    virtual void Sleep();
    virtual void Sound();
    virtual bool IsHungry();
    virtual void Print();
};

#endif /* Animal_hpp */

