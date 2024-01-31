//
//  Book.cpp
//  LibraryManagementSystem
//
//  Created by Rado on 31.01.24.
//

#include "Book.hpp"

Book:: Book (string title, string author, string isbn) {
    
    this -> title = title;
    this -> author = author;
    this -> isbn = isbn;
}

void Book:: setTitle(string title){
    this -> title = title;
}
string Book:: getTitle(){
    return this -> title;
}

void Book:: setAuthor(string author){
    this -> author = author;
}
string Book:: getAuthor(){
    return this -> author;
}

void Book:: setIsbn(string isbn){
    this -> isbn = isbn;
}
string Book:: getIsbn(){
    return this -> isbn;
}

void Book:: display(){
    cout << "Title: " << this -> title << " Author: " << this -> author << " ISBN: " << this -> isbn << endl;
}
