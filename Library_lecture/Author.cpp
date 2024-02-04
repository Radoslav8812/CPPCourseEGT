//
//  Author.cpp
//  Library
//
//  Created by Rado on 19.01.24.
//

#include "Author.hpp"
#include <iostream>

using namespace std;

Author:: Author (string name, string surName, string nationality) {
   
    setName(name);
    setSurName(surName);
    setNationality(nationality);
}

void Author:: setName(string name){
    this -> name = name;
}
string Author:: getName(){
    return this -> name;
}

void Author:: setSurName(string surName){
    this -> surName = surName;
}
string Author:: getSurname(){
    return this -> surName;
}

void Author:: setNationality(string nationality){
    this -> nationality = nationality;
}
string Author:: getNationality(){
    return this -> nationality;
}

void Author:: showInfo(){
    cout << "Author name: " << getName() + " " + getSurname() <<"\nAuthor Nationality: " << this -> getNationality() << endl;
}
