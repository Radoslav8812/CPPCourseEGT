//
//  Animal.hpp
//  AnimalsPolymorphism
//
//  Created by Rado on 29.01.24.
//

#ifndef Animal_hpp
#define Animal_hpp

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class Animal{
  
private:
    string name;
    string color;

public:
    Animal(string, string);
    virtual ~Animal();
    
    void setName(string);
    string getName();
    
    void setColor(string);
    string getColor();
    
    virtual void Print();
    virtual string Sound();
    
};

#endif /* Animal_hpp */
