//
//  Author.cpp
//  Library
//
//  Created by Rado on 19.01.24.
//

#include "Author.hpp"
#include <iostream>

using namespace std;

Author:: Author (string name, string surName, string nationality) : name(name), surName(surName), nationality(nationality){
    this -> name = name;
    this -> surName = surName;
    this -> nationality = nationality;
}

string Author:: getFullName()  {
    return this -> name + " " + this -> surName;
}

void Author:: showInfo(){
    cout << " Author name -> "<< getFullName()<< " Author nationality -> " << this -> nationality << endl;
}
