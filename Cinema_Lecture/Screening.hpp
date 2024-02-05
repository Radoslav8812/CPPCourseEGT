//
//  Screening.hpp
//  Cinema
//
//  Created by Rado on 11.01.24.
//

#ifndef Screening_hpp
#define Screening_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Screening
{
    
private:
    string movieName;
    int soldTickets;
    
public:
    Screening(string movieName, int soldTickets);
    
    void setMovieName(string mName);
    string getMovieName();
    
    void setSoldTickets(int sTickets);
    int getSoldTickets();

    void printInfo();
};


#endif /* Screening_hpp */
