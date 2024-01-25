//
//  Refferee.hpp
//  FootBall
//
//  Created by Rado on 24.01.24.
//

#ifndef Refferee_hpp
#define Refferee_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Refferee{
    
    
private:
    string userName;
    string passWord;
    string matchResult;
    vector<string> yellowCardsVect;
    vector<string> redCardsVect;
    vector<string> goalRealisersVect;
    string goalTime;
    
public:
    Refferee(string userName, string passWord);
    
    void setUserName(string);
    string getUserName();
    
    void setPassWord(string);
    string getPassWord();
    
    void setGoalTime(string);
    string getGoalTime();
    
    void recordMatchResult (string result);
    void yellowCards(string player);
    void redCards(string player);
    void addGoals(string realiser, string time);
    
    string MatchShowInfo();
};


#endif /* Refferee_hpp */


