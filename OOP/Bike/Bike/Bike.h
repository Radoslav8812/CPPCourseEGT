//
//  Bike.h
//  Bike
//
//  Created by Rado on 10.01.24.
//

#ifndef Bike_h
#define Bike_h

#include "Chain.h"
#include "Tyres.h"
#include <iostream>
#include <string>
using namespace std;

public class Bike
{
    
private:
    string color;
    int price;
    Chain Ch;
    Tyres Ty;
};

public:
    Bike(string, int, Chain&, Tyres&);///priema adres Ch ,Ty;

    void setColor(string);
    string getColor();

    void setPrice(int);
    int getPrice();

    void setChain(Chain&);
    Chain& getChain();

    void setTyres(Tyres&);
    Tyres& getTyres();

    void showInfo();

#endif /* Bike_h */
