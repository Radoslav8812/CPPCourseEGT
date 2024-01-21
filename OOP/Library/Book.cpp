//
//  Book.cpp
//  Library
//
//  Created by Rado on 19.01.24.
//

#include "Book.hpp"
#include "Author.hpp"
#include "Genre.hpp"
#include <iostream>
#include <string>
using namespace std;

Book:: Book ( string title, Author& author, Genre& genre, int yearOfRealise) :  author(author), genre(genre) {
    
    this -> title = title;
    this -> yearOfRelease = yearOfRealise;
}

void Book:: setTitle(string title){
    this -> title = title;
}
string Book:: getTitle(){
    return this -> title;
}

void Book:: setAuthor(Author& author) {
    this -> author = author;
}
Author& Book:: getAuthor(){
    return this -> author;
}

void Book:: setGenre(Genre & genre){
    this -> genre = genre;
}
Genre& Book:: getGenre(){
    return this -> genre;
}

void Book:: setYearOfRelease(int yearOfRelease){
    this -> yearOfRelease = yearOfRelease;
}
int Book:: getYearOfRelease(){
    return  this -> yearOfRelease;
}

bool Book:: nameSearching(string &searchName){
    return  title.find(searchName) != string:: npos;
}

void Book:: showInfo(){
    cout << "Book title: " << getTitle() << " -> ";
    author.showInfo();
    genre.showInfo();
    cout << " Book yearOfRelease: " << yearOfRelease << endl;
}
