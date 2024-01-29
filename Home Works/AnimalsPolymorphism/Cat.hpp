//
//  Cat.hpp
//  AnimalsPolymorphism
//
//  Created by Rado on 29.01.24.
//

#ifndef Cat_hpp
#define Cat_hpp

#include <stdio.h>
#include <string>

#include "Animal.hpp"

using namespace std;

class Cat : public Animal{
  
private:
    string name;
    string color;
    
public:
    Cat( string, string);
    
    string Sound() override;
    void Print() override;
};


#endif /* Cat_hpp */
