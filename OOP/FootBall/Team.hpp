//
//  Team.hpp
//  FootBall
//
//  Created by Rado on 24.01.24.
//

#ifndef Team_hpp
#define Team_hpp

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class Team{

private:
    string name;
    string address;
    string city;
    string coach;
    vector<string> playersVect;
    int playedGames;
    int wins;
    int losses;
    int draws;
    int points;
    int leaderBoard;
    string image;
    
    vector<int> spectatorsPMVect;
    
public:
    Team(string name, string address, string city, string coach, vector<string> playersVect, int playedGames, int wins, int losses, int draws, int point, int leaderBoard, string image);
    
    void setName(string);
    string getName();
    
    void setAddress(string);
    string getAddress();
    
    void setCity(string);
    string getCity();
    
    void setCoach(string);
    string getCoach();
    
    void setPlayers(vector<string> newPlayersVect);
    vector<string> getPlayers();
    
    void setPlayedGames(int);
    int getPlayedGames();
    
    void setWins(int);
    int getWins();
    
    void setLosses(int);
    int getLosses();
    
    void setDraws(int);
    int getDraws();
    
    void setPoints(int);
    int getPoints();
    
    void getLeaderBoard(int);
    int getLeaderBoard();
    
    void setImage(string);
    string getImage();
    
    void editTeamInfo(string address, string city, string coach);
    
    void setSpectatorsForMatch(int matchIndex, int spectators);
    int calculateAvgSpectatorsPerMatch ();
    
    void showInfo();
};

#endif /* Team_hpp */
