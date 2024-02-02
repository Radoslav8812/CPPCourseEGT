//
//  Fans.hpp
//  FootBall
//
//  Created by Rado on 24.01.24.
//

#ifndef Fans_hpp
#define Fans_hpp

#include <stdio.h>
#include "Match.hpp"
#include "User.hpp"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Fans : User{

private:
    string userName;
    string passWord;
    
public:
    Fans(string fanName, string passWord);
        
    void setFanName(string);
    string getFanName();
    
    void setPassWord(string);
    string getPassWord();
    
    void viewMatchSchedule(vector<Match> matchesVect);
    void buyTicket(Match match);
    void viewLeaderBoard(vector <Team> teamsVect);
};
#endif /* Fans_hpp */
