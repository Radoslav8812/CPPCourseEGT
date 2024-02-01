//
//  Administration.hpp
//  FootBall
//
//  Created by Rado on 24.01.24.
//

#ifndef Administration_hpp
#define Administration_hpp
/* Football:
 Система за футболна федерация :
 3 типа потребители
 Администрация- автентикира се с потребителско име и парола
 Рефер- автентикира се с потребителско име и парола
 Фенове
 Администрация:
 - Добавя, променя и отписва отбори. Информацията за отбора е: име, адрес, град, треньор, играчи, изиграни срещи,
  победи, задгуби, равенства, точки и класиране (за година), снимка
 Създава и променя графика за годината. Графика съдьржа информация за срещите:
 - Крьг от пьрвенството, дата, час, стадион, град, отбор гост, отбор домакин, рефер
 - Сьздава/Променя класирането
 Рефер :
 - Води отчет за всяка среща - резултат, картони, автори на попаденията, време на попаденията
 Фенове:
 - Вижда графика
 - Закупува билет за избрана от него среща, като за целта се регистрира.
 - Вижда класирането
 Системата да показва и статистическа информация - класиране, загуби на всеки отбор, победи на всеки отбор,
 брой зрители за отборите по срещи, картони и други.
 Статистиката се вижда от всички потребители. */

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
