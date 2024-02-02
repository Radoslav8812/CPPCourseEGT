//
//  Cards.hpp
//  CardGame
//
//  Created by Rado on 31.01.24.
//

#ifndef Cards_hpp
#define Cards_hpp

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>

using namespace std;

struct Card{
    string face;
    string suit;
};
class Cards {
    
private:
    Card deck[52];
    
public:
    Cards();
    
    void shuffle();
    void deal();
    
};


#endif /* Cards_hpp */
