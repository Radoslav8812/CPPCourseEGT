//
//  Book.hpp
//  LibraryManagementSystem
//
//  Created by Rado on 31.01.24.
//

#ifndef Book_hpp
#define Book_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Book {
    
private:
    
    string title;
    string author;
    string isbn;
    
public:
    Book(string title, string author, string isbn);
    
    void setTitle(string title);
    string getTitle();
    
    void setAuthor(string author);
    string getAuthor();
    
    void setIsbn(string price);
    string getIsbn();
    
    void display();
};
#endif /* Book_hpp */
