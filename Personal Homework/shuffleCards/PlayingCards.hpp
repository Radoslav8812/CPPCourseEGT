//
//  PlayingCards.hpp
//  DeckOfCards
//
//  Created by Rado on 31.01.24.
//

#ifndef PlayingCards_hpp
#define PlayingCards_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class PlayingCards{
    
public:
    
    // declare here, to not use struct
    string type;
    string suite;
    
    //constructor
    PlayingCards(string, string);
    
};


#endif /* PlayingCards_hpp */
