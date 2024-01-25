//
//  Administration.hpp
//  FootBall
//
//  Created by Rado on 24.01.24.
//

#ifndef Administration_hpp
#define Administration_hpp

#include "Team.hpp"
#include "Match.hpp"
#include "User.hpp"

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Administration : public User{
  
private:
    string userName;
    string passWord;
    
    vector<Team> teamsVect;
    vector<Match> matchesVect;
    
public:
    Administration(string userName, string passWord);
    
    void addTeam(Team team);
    void editTeam(Team team);
    void removeTeam(Team team);
    
    void createMatchSchedule(vector<Match> matchesVect);
    void editMatchSchedule(vector<Match> matchesVect);
    void createOrEditLeaderBoard(vector<Team> teamsVect);
    
    
    void showStatistics();
};

#endif /* Administration_hpp */
