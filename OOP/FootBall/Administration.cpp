//
//  Administration.cpp
//  FootBall
//
//  Created by Rado on 24.01.24.
//

#include "Administration.hpp"


Administration:: Administration(string userName, string passWord) : User (userName, passWord){
    
    teamsVect = {};
    matchesVect = {};
}

void Administration:: addTeam(Team team){
    
    bool isExist = false;
    
    for (auto& existTeam : teamsVect) {
        if (existTeam.getName() == team.getName()) {
            
            isExist = true;
            break;
        }
    }
    
    if (!isExist){
        teamsVect.push_back(team);
        cout << "Added Team : " << team.getName() << endl;
    }
    else{
        cout << "Team already exist!" << endl;
    }
}

void Administration:: editTeam(Team team){
    
    for (auto& existingTeam : teamsVect){
        if (existingTeam.getName() == team.getName()){
            existingTeam.setCoach(team.getCoach());
            existingTeam.setPlayers(team.getPlayers());
            
            
            cout << "Edited Team: " << team.getName() << endl;
            return;
        }
    }
    cout << "Team not found for editing!" << endl;
}

void Administration:: removeTeam(Team team){
    
    auto it = remove_if(teamsVect.begin(), teamsVect.end(), [&team](Team existingTeam) {
        return existingTeam.getName() == team.getName();
    });
    
    if (it != teamsVect.end()) {
        teamsVect.erase(it, teamsVect.end());
        cout << "Team Removed: " << team.getName() << endl;
    } else {
        cout << "Team not found for removing! " << endl;
    }
}

void Administration:: createMatchSchedule(vector<Match> matchesVect){
    
    
  
  //(string name, string address, string city, string coach, vector<string> playersVect, int playedGames, int wins, int losses, int draws, int point, int leaderBoard, string image)
    Team team1("Team Levski", "Sofia city", "Sofia", "Stoichkov" , {"Player1", "Player2", "Player3"}, 2, 1, 1, 0, 10, 3, "image1");
    Team team2("Team Lokomotiv", "Sofia city", "Sofia", "Gonzo" , {"Player11", "Player22", "Player33"}, 2, 1, 1, 0, 10, 3, "image12");

    Refferee referee1("Referee1", "###");
    Refferee referee2("Referee2", "#####");

    //int round, string date, string time, string stadium, string city, Team guestTeam, Team homeTeam, Refferee refferee) : guestTeam(guestTeam), homeTeam(homeTeam) ,refferee(refferee)
   // Match match1( 1, "2024-02-01", "18:00", "Stadium ", "Sofia", team1, team2, referee1, team2, team1, referee1);
     //Match match2( 1, "2024-02-01", "18:00", "Stadium ", "Sofia", team1, team2, referee1, team2, team1, referee1);
    // Add matches to the vector
   // matchesVect.push_back(match1);
   // matchesVect.push_back(match2);

    cout << "Match schedule created" << endl;
}


void Administration:: showStatistics(){
    
    cout << "Team Rankings: " << endl;
    
    for (auto& team : teamsVect) {
        cout << team.getName() << ": " << team.getPoints() << endl;
    }
    
    cout << endl;
    // Display wins, losses, and spectators per team
    cout << " Team Statistics: " << endl;
    
    for (auto& team : teamsVect) {
        
        cout << "Team: " <<  team.getName()<< endl;
        cout << "Wins: " << team.getWins() << endl;
        cout << "Losses: " << team.getLosses() << endl;
        cout << "Spectators per match: " << team.calculateAvgSpectatorsPerMatch() << endl;
        
        cout << endl;
    }

    // Display match statistics (e.g., cards)
    cout << " Match Statistics: " << endl;
    
    for ( auto& match : matchesVect) {
        
        cout << "Red Cards: " << match.calculateTotalRedCards() << endl;
        cout << "Yellow Cards: " << match.calculateTotalYellowCards() << endl;
        
        cout << endl;
    }
}
