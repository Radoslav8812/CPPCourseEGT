//
//  Mammal.hpp
//  DiamondStructureOOP
//
//  Created by Rado on 30.01.24.
//

#ifndef Mammal_hpp
#define Mammal_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "Animal.hpp"

using namespace std;

class Mammal : Animal{
    
public:
    Mammal (string, string, string, double , double);
    
    virtual void Run();
    
    void Eat() override;
    void Sleep() override;
    void Sound() override;
    bool IsHungry() override;
    void Print() override;
};
#endif /* Mammal_hpp */
