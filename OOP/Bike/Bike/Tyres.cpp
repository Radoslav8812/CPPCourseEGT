//
//  Tyres.cpp
//  Bike
//
//  Created by Rado on 10.01.24.
//

#include <stdio.h>
#include "Tyres.h"

Tyres::Tyres(string name,int height ,int lengh)
{
    this -> name = name;
    this -> height = height;
    this -> lengh = lengh;
}

void Tyres:: setName(string name)
{
    this -> name = name;
}
string Tyres:: getName()
{
    return this -> name;
}

void Tyres:: setHeight(int height)
{
    this -> height = height;
}
int Tyres:: getHeight()
{
    return this -> height;
}

void Tyres:: setLengh(int lengh)
{
    this -> lengh = lengh;
}
int Tyres:: getLengh()
{
    return this -> lengh;
}

void Tyres:: showInfo()
{
    cout << getName() << " " << getHeight() << " " << getLengh() << endl;
}
