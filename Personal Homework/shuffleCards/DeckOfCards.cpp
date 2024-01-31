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
    size_t splitedIndex = deckVect.size() / 2;

    vector <PlayingCards> firstHaflVect;
    for (size_t i = 0; i < splitedIndex; i++){
        
        int shuffling = rand() % 26;
        PlayingCards tempCard = firstHaflVect[i];
        firstHaflVect[i] = firstHaflVect[shuffling];
        firstHaflVect[shuffling] = tempCard;
        
    }
    
    vector <PlayingCards> secondHaflVect;
    for (size_t i = splitedIndex; i < deckVect.size(); i++){
        
        int shuffling = rand() % 26;
        PlayingCards tempCard = secondHaflVect[i];
        secondHaflVect[i] = secondHaflVect[shuffling];
        secondHaflVect[shuffling] = tempCard;
    }
    
}


void DeckOfCards:: displayDeck(){
    
    for (auto& card: deckVect){
        cout << card.type << "  -  " << card.suite << endl;
    }
}
