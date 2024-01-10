//
//  Tyres.h
//  Bike
//
//  Created by Rado on 10.01.24.
//

#ifndef Tyres_h
#define Tyres_h

#include <iostream>
#include <string>

using namespace std;

class Tyres
{
    
private:
    string name;
    int height;
    int lengh;
    
public:
    Tyres(string, int, int);

    void setName(string);
    string getName();
    
    void setHeight(int);
    int getHeight();
    
    void setLengh(int);
    int getLengh();

    void showInfo();
};

#endif /* Tyres_h */
