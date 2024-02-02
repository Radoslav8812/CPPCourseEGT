//
//  main.cpp
//  CardGame
//
//  Created by Rado on 31.01.24.
//

#include <iostream>
#include <iostream>
#include"Cards.hpp"

int main(int argc, const char * argv[]) {
    
    
    Cards deckOfCards;
    
    deckOfCards.deal();
    deckOfCards.shuffle();
    
    //cout<<"-------------------";
    deckOfCards.deal();
    
    return 0;
}
