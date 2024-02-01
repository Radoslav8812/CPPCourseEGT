//
//  DeckOfCards.hpp
//  DeckOfCards
//
//  Created by Rado on 31.01.24.
//

#ifndef DeckOfCards_hpp
#define DeckOfCards_hpp

#include <stdio.h>
#include <iostream>
#include <map>
#include <vector>
#include <random>
#include <iomanip>
#include <ctime>
#include "PlayingCards.hpp"

using namespace std;

class DeckOfCards {
    
private:
    vector <PlayingCards> deckVect;
    
public:
    DeckOfCards();
    
    void raffleShuffle();
    void displayDeck();
};

#endif /* DeckOfCards_hpp */
