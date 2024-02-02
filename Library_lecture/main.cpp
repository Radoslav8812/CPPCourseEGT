//
//  main.cpp
//  Library
//
//  Created by Rado on 19.01.24.
//

#include <iostream>
#include <string>
#include <vector>
#include "Author.hpp"
#include "Book.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    vector<Book> bookVect;
    
    Genre genre("Horror");
    Author author("Stephen", "King", " N/A");
    Book book("The green way", author, genre, 1999);
    bookVect.push_back(book);
    
    Genre genre1("Horror");
    Author author1("Stephen", "King", " N/A");
    Book book1("Silence of the lambs", author, genre, 1999);
    bookVect.push_back(book1);
        
    cout << "Enter word to search to: ";
    string text;
    getline(cin, text);
    
    for (auto& book : bookVect){
        if (book.nameSearching(text)){
            book.showInfo();
        }
    }
    
    return 0;
}
