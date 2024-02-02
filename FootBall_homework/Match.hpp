//
//  Match.hpp
//  FootBall
//
//  Created by Rado on 24.01.24.
//

#ifndef Match_hpp
#define Match_hpp

#include <stdio.h>
#include <iostream>
#include <string>

#include "Team.hpp"
#include "Refferee.hpp"

using namespace std;

class Match{
    
private:
    int round;
    string date;
    string time;
    string stadium;
    string city;
    Team guestTeam;
    Team homeTeam;
    Refferee refferee;
    
    int matchID;
    int totalRedCards;
    int totalYellowCards;
    
public:
    Match(int round, string date, string time, string stadium, string city, Team guestTeam, Team homeTeam, Refferee refferee, int matchID);
    
    
    void setRound(int);
    int getRound();
    
    void setDate(string);
    string getDate();
    
    void setTime(string);
    string getTime();
    
    void setStadium(string);
    string getStadium();
    
    void setCity(string);
    string getCity();
    
    void setGuestTeam(Team guestTeam);
    Team getGuestTeam();
    
    void setHomeTeam(Team homeTeam);
    Team getHometeam();
    
    void setRefferee(Refferee refferee);
    Refferee getRefferee();
    
    void setMatchID(int);
    int getMatchID();
    
    void addRedCard();
    void addYellowCard();
    
    int calculateTotalRedCards();
    int calculateTotalYellowCards();
    
};


#endif /* Match_hpp */
