//
//  Cinema.cpp
//  Cinema
//
//  Created by Rado on 11.01.24.
//


#include "Cinema.hpp"
#include <string>
#include <iostream>

using namespace std;

Cinema::Cinema(string name, string address, vector<Hall> halls){
    setName(name);
    setAddress(address);
    setHallsVect(halls);
}

void Cinema:: setName(string name){
    this -> name = name;
}
string Cinema:: getName(){
    return this -> name;
}

void Cinema:: setAddress(string address){
    this -> address = address;
}
string Cinema:: getAddress(){
    return this -> address;
}

void Cinema:: addHallToVect(Hall hall){
    this -> hallsVect.push_back(hall);
}
void Cinema:: setHallsVect(vector<Hall> halls){
    this -> hallsVect = halls;
}
vector<Hall> Cinema:: getHallsVect(){
    return this -> hallsVect;
}

void Cinema:: Print(){
    
    cout << "Cinema Name: " << getName() << ", Cinema Address " << getAddress() << " ";
    
    for (auto& c : hallsVect){
        c.print();
        cout << endl;
    }
}
