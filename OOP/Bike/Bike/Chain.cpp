//
//  Chain.cpp
//  Bike
//
//  Created by Rado on 10.01.24.
//

#include <stdio.h>
#include "Chain.h"
#include <iostream>
#include <string>

using namespace std;

Chain::Chain(int Dents,int Lengh)
{
    this -> dents = Dents;
    this -> lengh = Lengh;
}

void Chain:: setDents(int Dents)
{
    this -> dents = Dents;
}
int Chain:: getDents()
{
    return this -> dents;
}

void Chain:: setLengh(int Lengh)
{
    this -> lengh = Lengh;
}
int Chain:: getLengh()
{
    return this -> lengh;
}

void Chain:: showInfo()
{
    cout << getDents() << " " << getLengh() << endl;
}
