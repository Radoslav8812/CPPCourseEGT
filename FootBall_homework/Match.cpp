//
//  Match.cpp
//  FootBall
//
//  Created by Rado on 24.01.24.
//

#include "Match.hpp"
#include <iostream>

using namespace std;

Match:: Match(int round, string date, string time, string stadium, string city, Team guestTeam, Team homeTeam, Refferee refferee, int matchID) : guestTeam(guestTeam), homeTeam(homeTeam) ,refferee(refferee)  {
    
    setRound(round);
    setDate(date);
    setTime(time);
    setStadium(stadium);
    setCity(city);
    setMatchID(matchID);
    
}

void Match:: setRound(int round){
    this -> round = round;
}
int Match:: getRound(){
    return this -> round;
}

void Match:: setDate(string date){
    this -> date = date;
}
string Match:: getDate(){
    return this -> date;
}

void Match:: setTime(string time){
    this -> time = time;
}
string Match:: getTime(){
    return this -> time;
}

void Match:: setStadium(string stadium){
    this -> stadium = stadium;
}
string Match:: getStadium(){
    return this -> stadium;
}

void Match:: setCity(string city){
    this -> city = city;
}
string Match:: getCity(){
    return this -> city;
}

void Match:: setGuestTeam(Team guestTeam){
    this -> guestTeam = guestTeam;
}
Team Match:: getGuestTeam(){
    return guestTeam;;
}

void Match:: setHomeTeam(Team homeTeam){
    this -> homeTeam = homeTeam;
}
Team Match:: getHometeam(){
    return this -> homeTeam;
}

void Match:: setRefferee(Refferee refferee){
    this -> refferee = refferee;
}
Refferee Match:: getRefferee(){
    return this -> refferee;
}

void Match:: setMatchID(int matchID){
    this -> matchID = matchID;
}
int Match:: getMatchID(){
    return this -> matchID;
}

void Match:: addRedCard(){
    totalRedCards++;
}

void Match:: addYellowCard(){
    totalYellowCards++;
}

int Match:: calculateTotalRedCards(){
    return  totalRedCards;
}

int Match:: calculateTotalYellowCards(){
    return  totalYellowCards;
}
