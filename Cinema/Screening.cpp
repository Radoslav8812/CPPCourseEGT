//
//  Screening.cpp
//  Cinema
//
//  Created by Rado on 11.01.24.
//

#include "Screening.hpp"
#include <iostream>


Screening::Screening(string movieName, int soldTickets)
{
    setMovieName(movieName);
    setSoldTickets(soldTickets);
}

void Screening::setMovieName(string movieName)
{
    if (movieName.length() > 5) {
        this -> movieName = movieName;
    }
    else {
        this -> movieName = "";
        cerr << "Too short name!" << endl;
    }
}
string Screening::getMovieName()
{
    return this -> movieName;
}

void Screening::setSoldTickets(int soldTickets)
{
    if (soldTickets >= 0){
        this -> soldTickets = soldTickets;
    }
    else {
        this -> soldTickets = 0;
    }
}

int Screening::getSoldTickets()
{
    return this -> soldTickets;
}


void Screening::printInfo()
{
    cout << "Movie name: " << getMovieName() << ", Sold Tickets: " << getSoldTickets() << endl;
}
