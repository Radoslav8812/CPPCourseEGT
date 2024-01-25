//
//  Fans.cpp
//  FootBall
//
//  Created by Rado on 24.01.24.
//

#include "Fans.hpp"


Fans:: Fans (string userName, string passWord) : User(userName, passWord){
    
}

//void Fans:: setFanName(<#string#> fanName){
//    this -> fanName = fanName;
//}
//string Fans:: getFanName(){
//    return this -> fanName;
//}

void Fans:: viewMatchSchedule(vector<Match> matchesVect){
    
    cout << "Match Schedule: " << endl;
    
    for (auto& match: matchesVect){
        
        cout << "Round: " << match.getRound() << ": " << match.getHometeam().getName() << " vs " << match.getGuestTeam().getName() << " at " << match.getStadium() << ", " << match.getCity() << ", Date: " << match.getDate() << ", Time: " << match.getTime() << endl;
    }
}


void Fans:: buyTicket(Match match){
    cout << "Purchased ticket is for da match between: " << match.getHometeam().getName() << " & " << match.getGuestTeam().getName() << " at " << match.getStadium() << ", " << match.getCity() << ", Date: " << match.getDate() << ", Time: " << match.getTime() << endl;
}


void Fans:: viewLeaderBoard(vector<Team> teamsVect){
    
    cout << "Current LeaderBoard: " << endl;
    
    for (auto& team : teamsVect){
        cout << team.getName() << " -> Team Points: " << team.getPoints() << ", Wins: " << team.getWins() << ", Draws: " << team.getDraws() << ", Losses: " << team.getLosses() << endl;
    }
}
