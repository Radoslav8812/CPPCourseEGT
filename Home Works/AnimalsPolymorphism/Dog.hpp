//
//  Dog.hpp
//  AnimalsPolymorphism
//
//  Created by Rado on 29.01.24.
//

#ifndef Dog_hpp
#define Dog_hpp

#include <stdio.h>
#include <iostream>
#include <string>

#include "Animal.hpp"

using namespace std;

class Dog : public Animal{
    
private:
    string name;
    string color;
    
public:
    Dog(string, string);
    
    string Sound() override;
    void Print() override;
    
};

#endif /* Dog_hpp */
