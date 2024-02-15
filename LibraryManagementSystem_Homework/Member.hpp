//
//  Member.hpp
//  LibraryManagementSystem
//
//  Created by Rado on 31.01.24.
//

#ifndef Member_hpp
#define Member_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Book.hpp"

using namespace std;

class Member{
    
private:
    string name;
    int age;
    string memberID;
    
public:
    Member(string name, int age, string memberID);
    
    void borrowBook(Book* book);
    void display();
};


#endif /* Member_hpp */
