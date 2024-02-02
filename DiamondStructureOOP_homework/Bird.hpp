//
//  Bird.hpp
//  DiamondStructureOOP
//
//  Created by Rado on 30.01.24.
//

#ifndef Bird_hpp
#define Bird_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "Animal.hpp"

using namespace std;

class Bird : public Animal{
  
public:
    Bird(string, string, string, double, double);
    
    virtual void Fly();
    
    void Eat() override;
    void Sleep() override;
    void Sound() override;
    bool IsHungry() override;
    void Print() override;
    
};

#endif /* Bird_hpp */
