//
//  Book.hpp
//  Library
//
//  Created by Rado on 19.01.24.
//

#ifndef Book_hpp
#define Book_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include "Author.hpp"
#include "Genre.hpp"

using namespace std;

class Book{
  
protected:
    string title;
    Author& author;
    Genre& genre;
    int yearOfRelease;
    
public:
    Book(string title,  Author& author,  Genre& genre, int yearOfRelease);
    
    void setTitle(string);
    string getTitle();
    
    void setAuthor(Author&);
    Author& getAuthor();
    
    void setGenre(Genre&);
    Genre& getGenre() ;
    
    void setYearOfRelease(int);
    int getYearOfRelease();
    
    bool nameSearching(string& searchName) ;
    
    void showInfo();
};


#endif /* Book_hpp */
