//
//  Hall.cpp
//  Cinema
//
//  Created by Rado on 11.01.24.
//
#include "Hall.hpp"
#include <vector>

using namespace std;

Hall::Hall(string name, int seats)
{
    setHallName(name);
    setSeats(seats);
}

Hall::Hall(string name, int seats, vector<Screening> screeningList) : screeningList(screeningList)
{
    setHallName(name);
    setSeats(seats);
}

void Hall::setHallName(string hallName)
{
    this -> hallName = hallName;
}
string Hall::getHallName()
{
    return this -> hallName;
}

void Hall::setSeats(int seats)
{
    this -> seats = seats;
}
int Hall::getSeats()
{
    return this-> seats;
}

void Hall::setScreeningList(vector<Screening>)
{
   
}
vector<Screening> Hall::getScreeningList()
{
    return this -> screeningList;
}

void Hall::addScreening(Screening screen)
{
   this->screeningList.push_back(screen);
}

void Hall::print()
{
    cout << "Hall: " << getHallName() << endl << "Seats: " << getSeats() << endl;
    
    for (int i = 0; i < this -> screeningList.size(); i++)
    {
        this -> screeningList.at(i).printInfo();
    }

}
