//
//  Refferee.cpp
//  FootBall
//
//  Created by Rado on 24.01.24.
//

#include "Refferee.hpp"
#include <iostream>


Refferee :: Refferee (string userName, string passWord) {
    
    this -> userName = userName;
    this -> passWord = passWord;
    
    
}

void Refferee:: setUserName(string userName){
    this -> userName = userName;
}
string Refferee:: getUserName(){
    return this -> userName;
}

void Refferee:: setPassWord(string passWord){
    this -> passWord = passWord;
}
string Refferee:: getPassWord(){
    return this -> passWord;
}

void Refferee:: setGoalTime(string goalTime){
    this -> goalTime = goalTime;
}
string Refferee:: getGoalTime(){
    return this -> goalTime;
}

void Refferee:: recordMatchResult(string result){
    matchResult = result;
}

void Refferee:: yellowCards(string player){
    yellowCardsVect.push_back(player);
}

void Refferee:: redCards(string player){
    redCardsVect.push_back(player);
}

void Refferee:: addGoals(string realiser, string goalTime){
    goalRealisersVect.push_back(realiser);
    this -> goalTime = goalTime;
}


string Refferee:: MatchShowInfo(){
    
    string info = "Match Result: " + this -> matchResult + " ";
    cout << endl;
    info += "Yellow Cards: ";
    
    for (auto& card : yellowCardsVect){
        info += card + ", ";
    }
    
    cout << endl;
    
    for (auto& card : redCardsVect){
        info += card + ", ";
    }
    
    cout << endl;
    
    for (auto& realiser : goalRealisersVect){
        info += realiser + " (" + goalTime + "), ";
    }
    return  info;
}
