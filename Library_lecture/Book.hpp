//
//  Book.hpp
//  Library
//
//  Created by Rado on 19.01.24.
//

#ifndef Book_hpp
#define Book_hpp

/* Библиотека иска да организира информацията за книгите, които притежава в информационна система.
 * За всяка книга тя събира следните данни: име, автор, жанр и година на издаване.
 * За авторите се съхранява информация за име, фамилия и националност.
 * Жанровете са: класика, детски, фантастика, биографичен, любовен.
 * Реализирайте добавяне на нова книга.
 * Реализирайте операцията добавяне на книга.
 * Реализирайте търсене на книга по име или част от името.
 * Въвеждайте параметрите на търсенето чрез стандрартен вход.
 * Покажете резултатите.
 * Реализирайте търсене на книга по автор. Покажете резултатите. */

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
