//
//  Fans.cpp
//  FootBall
//
//  Created by Rado on 24.01.24.
//

#include "Fans.hpp"


Fans:: Fans (string userName, string passWord) : User(userName, passWord){
    
}

void Fans:: viewMatchSchedule(vector<Match> matchesVect){
    
    cout << "Match Schedule: " << endl;
    
    for (auto& m : matchesVect){
        
        cout << "Round: " << m.getRound() << ": " << m.getHometeam().getName() << " vs " << m.getGuestTeam().getName() << " at " << m.getStadium() << ", " << m.getCity() << ", Date: " << m.getDate() << ", Time: " << m.getTime() << endl;
    }
}


void Fans:: buyTicket(Match match){
    cout << "Purchased ticket is for da match between: " << match.getHometeam().getName() << " & " << match.getGuestTeam().getName() << " at " << match.getStadium() << ", " << match.getCity() << ", Date: " << match.getDate() << ", Time: " << match.getTime() << endl;
}


void Fans:: viewLeaderBoard(vector<Team> teamsVect){
    
    cout << "Current LeaderBoard: " << endl;
    
    for (auto& t : teamsVect){
        cout << t.getName() << " -> Team Points: " << t.getPoints() << ", Wins: " << t.getWins() << ", Draws: " << t.getDraws() << ", Losses: " << t.getLosses() << endl;
    }
}
