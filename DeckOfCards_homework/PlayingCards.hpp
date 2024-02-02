//
//  PlayingCards.hpp
//  DeckOfCards
//
//  Created by Rado on 31.01.24.
//

#ifndef PlayingCards_hpp
#define PlayingCards_hpp

/*Тесте карти:
-метод, който разбърква картите в тестето
-Картите са клас PlayingCards, включващ type (А,К,3,4....) и suit (spades, diamonds, hearts, clubs)
-клас DeckOfCards c метод raffleShuffle, който разделя тестето на две части и взима
по една от всяка купчинка и метод displayDeck*/

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
