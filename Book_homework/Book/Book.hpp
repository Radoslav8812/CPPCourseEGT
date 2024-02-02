//
//  Book.hpp
//  Book
//
//  Created by Rado on 6.01.24.
//

#ifndef Book_hpp
#define Book_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Book {
    
private:
    string author;
    string title;
    int year;
    double price;

public:
    Book(string author, string title, int year, double price);

    void setAuthor(string author);
    string getAuthor();
    
    void setTitle(string title);
    string getTitle();
    
    void setYear(int year);
    int getYear();
    
    void setPrice(double price);
    double getPrice();
};

#endif /* Book_hpp */
