//
//  Cinema.hpp
//  Cinema
//
//  Created by Rado on 11.01.24.
//

#ifndef Cinema_hpp
#define Cinema_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "Hall.hpp"
#include "Cinema.hpp"
#include "Screening.hpp"


using namespace std;

class Cinema {
  
private:
    string name;
    string address;
    vector<Hall> hallsVect;
    
public:
    Cinema(string, string, vector<Hall>);
    
    void setName(string);
    string getName();
    
    void setAddress(string);
    string getAddress();
    
    void setHallsVect(vector<Hall>);
    vector<Hall> getHallsVect();
    
    void addHallToVect(Hall);
    
    void Print();
};

#endif /* Cinema_hpp */
