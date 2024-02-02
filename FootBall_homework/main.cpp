//
//  main.cpp
//  FootBall
//
//  Created by Rado on 24.01.24.
//


/* Система за футболна федерация :
 3 типа потребители

 Администрация– автентикира се с потребителско име и парола
 Рефер– автентикира се с потребителско име и парола
 Фенове

 Администрация:
 //- Добавя, променя и отписва отбори. Информацията за отбора  е: име, адрес, град, треньор, играчи, изиграни срещи, победи, задгуби, равенства, точки и класиране (за година), снимка //
 - Създава и променя графика за годината. Графика съдържа информация за срещите:
   - Кръг от първенството, дата, час, стадион, град, отбор гост, отбор домакин, рефер
 - Създава/Променя класирането

 Рефер :
 - Води отчет за всяка среща  -  резултат, картони, автори на попаденията, време на попаденията

 Фенове:
 - Вижда графика
 - Купува билет за избрана от него среща, като за целта се регистрира.
 - Вижда класирането

 Системата да показва и статистическа информация – класиране, загуби на всеки отбор, победи на всеки отбор, брой зрители за отборите по срещи, картони и други. Статистиката се вижда от всички потребители.
*/

#include <iostream>
#include <vector>
#include "Administration.hpp"
#include "Fans.hpp"
#include "Team.hpp"
#include "Match.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    //
    Team team1("Levski", "SF", "Sofia City", "Gonzo", {"p1", "p2",}, 10, 5, 3, 2, 17, 1, "empty.pic");
    Team team2("CSKA", "SF", "Sofia City", "Stoichkov", {"p3", "p4"}, 9, 4, 2, 3, 14, 2, "empty.pic");
    
    Refferee refferee("Referee1", "RefereePass");
    
    vector<Match> matches;

    matches.push_back(Match (1, "2024-01-25", "18:00", "Stadium1", "Sofia", team1, team2, refferee, 1));
    matches.push_back(Match (2, "2024-02-02", "14:00", "Stadium2", "Sofia", team2, team1, refferee, 2));
    
    vector<Team> teams;
    teams.push_back(team1);
    teams.push_back(team2);

    Administration admin("Admin", "#######");
    admin.addTeam(team1);
    admin.addTeam(team1);
    admin.addTeam(team2);
    admin.createMatchSchedule(matches);

    Fans fan("Rado", "#######");
    fan.viewMatchSchedule(matches);
    fan.buyTicket(matches[1]);
    fan.buyTicket(matches[0]);
    fan.viewLeaderBoard(teams);

    
    
    return 0;
}
