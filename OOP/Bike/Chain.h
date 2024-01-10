//
//  Chain.h
//  Bike
//
//  Created by Rado on 10.01.24.
//

#ifndef Chain_h
#define Chain_h

#include <iostream>
#include <string>

using namespace std;

class Chain
{
    
private:
    int dents;
    int lengh;

public:
    Chain(int, int);

    void setDents(int);
    int getDents();
   
    void setLengh(int);
    int getLengh();

    void showInfo();

};

#endif /* Chain_h */
