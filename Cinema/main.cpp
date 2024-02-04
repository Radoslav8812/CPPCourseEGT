//
//  main.cpp
//  Cinema
//
//  Created by Rado on 11.01.24.
//

#include <iostream>
#include <string>
#include <vector>
#include "Screening.hpp"
#include "Hall.hpp"
#include "Cinema.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Screening sc1("Titanic", 30);
    Screening sc2("Predators", 10);
    Screening sc4("Saw", 10);
    Screening sc3("Silence of the lambs", 10);
    
    vector<Screening> screeningsVect;
    screeningsVect.push_back(sc1);
    screeningsVect.push_back(sc2);
    screeningsVect.push_back(sc4);
    screeningsVect.push_back(sc3);
    
    
        
    Hall h1("Hall 1", 80, screeningsVect);
    Hall h2("Hall 2", 90, screeningsVect);
    Hall h4("Hall 4", 50, screeningsVect);
    Hall h3("Hall 3", 40, screeningsVect);
    
    vector<Hall> hallsVect;
    hallsVect.push_back(h1);
    hallsVect.push_back(h2);
    hallsVect.push_back(h3);
    hallsVect.push_back(h4);
    
    h1.print();
    h2.print();
    h4.print();
    h3.print();
    
    Cinema cinema("Paradice-Cinema", "Sofia-Lozenetz", hallsVect);
    cinema.Print();
    cout << endl;

    Screening sc5("Matrix 2", 55);
    h3.addScreening(sc5);
    cout << "new one" << endl;
    h3.print();
    
    return 0;
}
