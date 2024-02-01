//
//  main.cpp
//  DeckOfCards
//
//  Created by Rado on 31.01.24.
//

#include <iostream>
#include "DeckOfCards.hpp"
#include "PlayingCards.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    DeckOfCards deck;
    
    cout << " Not modified deck: " << endl;
    deck.displayDeck();
    
    deck.raffleShuffle();
    
    cout << " Modified shuffled deck: " << endl;
    deck.displayDeck();
    
    return 0;
}
