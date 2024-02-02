//
//  Genre.cpp
//  Library
//
//  Created by Rado on 21.01.24.
//

#include "Genre.hpp"
#include <iostream>

using namespace std;

Genre:: Genre( string genreType) {
    
    this -> genreType = genreType;
}

void Genre:: setGenreType(string genreType){
    this -> genreType = genreType;
}
string Genre:: getGenreType() {
    return genreType;
}

void Genre:: showInfo(){
    cout << " GenreType: " << getGenreType();
}
