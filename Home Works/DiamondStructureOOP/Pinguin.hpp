//
//  Pinguin.hpp
//  DiamondStructureOOP
//
//  Created by Rado on 30.01.24.
//

#ifndef Pinguin_hpp
#define Pinguin_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Mammal.hpp"
#include "Bird.hpp"

using namespace std;

class Pinguin : public Bird, public Mammal{
    
    
public:
    Pinguin (string, string, string, double, double);
    
    void Swim();
    void Run() override;
    void Fly() override;
    
    void Eat() override;
    void Sleep() override;
    void Sound() override;
    bool IsHungry() override;
    void Print() override;

};

#endif /* Pinguin_hpp */
