//
//  Genre.hpp
//  Library
//
//  Created by Rado on 21.01.24.
//

#ifndef Genre_hpp
#define Genre_hpp

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class Genre{
  
private:
    string genreType;
    
public:
    Genre(string genreType);
    
    void setGenreType(string);
    string getGenreType();
    
    void showInfo();
};
#endif /* Genre_hpp */
