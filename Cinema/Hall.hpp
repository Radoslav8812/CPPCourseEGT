//
//  Hall.hpp
//  Cinema
//
//  Created by Rado on 11.01.24.
//

#ifndef Hall_hpp
#define Hall_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "Screening.hpp"
using std::string;
using std::vector;

class Hall
{
    
private:
    string hallName;
    int seats;
    vector<Screening> screeningList;
    
public:
    Hall(string hallName, int seats);
    Hall(string hallName, int seats, vector<Screening> screeningList);

    void setHallName(string hName);
    string getHallName();
    
    void setSeats(int seats);
    int getSeats();
    
    void setScreeningList(vector<Screening>);
    vector<Screening> getScreeningList();
    void addScreening(Screening screen);
    
    void print();

};

#endif /* Hall_hpp */
