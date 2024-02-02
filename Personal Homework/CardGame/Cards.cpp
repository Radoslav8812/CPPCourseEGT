//
//  Cards.cpp
//  CardGame
//
//  Created by Rado on 31.01.24.
//

#include "Cards.hpp"
#include <iostream>

using namespace std;

Cards:: Cards() {

    static string suit[4] = { "Hearts", "Clubs", "Spades", "Diamonds" };
    static string face[13] = { "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace" };

    for(int i = 0; i < 52 ; i++)
    {
        deck[i].suit = suit[i/13]; // max 4
        deck[i].face = face[i%13]; // calculate value
    }
    
    srand(static_cast<unsigned int>(time (0)));
};

void Cards:: shuffle() {

    for(int i = 0; i < 52; i ++)
    {
        int j = rand() % 52;
        Card temp = deck[i];
        deck [i] = deck [j];
        deck[j]=temp;

    }
}

void Cards::deal() {

    for(int i = 0; i < 52; i++)
    {
        cout<< right << setw(5) <<deck[i].face <<" of " << left << setw(8) << deck[i].suit <<( (i+1) % 2  ? '\t' : '\n');
    }
}

