//
//  DeckOfCards.cpp
//  DeckOfCards
//
//  Created by Rado on 31.01.24.
//

#include "DeckOfCards.hpp"
#include "PlayingCards.hpp"

DeckOfCards:: DeckOfCards() {
    
    vector <string> typesVect = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    vector <string> suitsVect = { "Spades", "Diamonds", "Hearts", "Clubs" };
    
    for (auto& suit : suitsVect){
        for (auto& type: typesVect){
            deckVect.push_back(PlayingCards(type, suit));
        }
    }
    
    
}

void DeckOfCards:: raffleShuffle(){
    // replace "int" with "size_T"
    size_t splitedIndex = deckVect.size() / 2; // 26 ?

    vector <PlayingCards> shuffleVect;
    
    for (size_t i = 0; i < splitedIndex; i++){
        
        shuffleVect.push_back(deckVect[i + 26]);
        shuffleVect.push_back(deckVect[i]);
    }
    
    deckVect.swap(shuffleVect);
    
}


void DeckOfCards:: displayDeck(){
    
    for(int i = 0;i < 52; i++)
    {
        
        cout <<  setw (10) << deckVect[i].type << " -> " << setw(10) << deckVect[i].suite <<( (i + 1) % 2  ? '\t' : '\n');
    }
}
