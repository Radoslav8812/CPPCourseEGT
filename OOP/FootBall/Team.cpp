//
//  Team.cpp
//  FootBall
//
//  Created by Rado on 24.01.24.
//

#include "Team.hpp"

Team:: Team(string name, string address, string city, string coach, vector<string> playersVect, int playedGames, int wins, int losses, int draws, int point, int leaderBoard, string image) {
    
    setName(name);
    setAddress(address);
    setCity(city);
    setCoach(coach);
    setPlayers(playersVect);
    setPlayedGames(playedGames);
    setWins(wins);
    setLosses(losses);
    setDraws(draws);
    setPoints(point);
    setLeaderBoard(leaderBoard);
    setImage(image);
}

void Team:: setName(string name){
    this -> name = name;
}
string Team:: getName(){
    return this -> name;
}

void Team:: setAddress(string address){
    this -> address = address;
}
string Team:: getAddress(){
    return this -> address;
}

void Team:: setCity(string city){
    this -> city = city;
}
string Team:: getCity(){
    return this -> city;
}

void Team:: setCoach(string coach){
    this -> coach = coach;
}
string Team:: getCoach(){
    return this -> coach;
}

void Team:: setPlayers(vector<string> newPlayers){
    this -> playersVect =  newPlayers;
}

vector<string> Team:: getPlayers(){
    return playersVect;
}

void Team:: setPlayedGames(int playedGames){
    this -> playedGames = playedGames;
}
int Team:: getPlayedGames(){
    return this -> playedGames;
}

void Team:: setWins(int wins){
    this -> wins = wins;
}
int Team:: getWins(){
    return this -> wins;
}

void Team:: setLosses(int losses){
    this -> losses = losses;
}
int Team:: getLosses(){
    return this -> losses;
}

void Team:: setDraws(int draws){
    this -> draws = draws;
}
int Team:: getDraws(){
    return this -> draws;
}

void Team:: setPoints(int points){
    this -> points = points;
}
int Team:: getPoints(){
    return this -> points;
}

void Team:: setLeaderBoard(int leaderBoard){
    this -> leaderBoard = leaderBoard;
}
int Team:: getLeaderBoard (){
    return this -> leaderBoard;
}

void Team:: setImage(string image){
    this -> image = image;
}
string Team:: getImage(){
    return this -> image;
}

void Team:: editTeamInfo(string newAddress, string newCity, string newCoach){
    
    this -> address = newAddress;
    this -> city = newCity;
    this -> coach = newCoach;
}

void Team:: setSpectatorsForMatch(int matchIndex, int spectators){
    
    if (matchIndex >= spectatorsPMVect.size()){
        // size + 1 /// value
        spectatorsPMVect.resize(matchIndex + 1, 0);
        
        spectatorsPMVect[matchIndex] += spectators;
    }
}

int Team:: calculateAvgSpectatorsPerMatch(){

    int totalSpectators = 0;
    
    if (spectatorsPMVect.empty()){
        return 0;
    }
    
    for (auto& s : spectatorsPMVect){
        totalSpectators += s;
    }
    
    return totalSpectators / spectatorsPMVect.size();
}

void showInfo();
