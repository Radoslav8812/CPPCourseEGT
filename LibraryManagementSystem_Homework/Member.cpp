//
//  Member.cpp
//  LibraryManagementSystem
//
//  Created by Rado on 31.01.24.
//

#include "Member.hpp"
#include "Book.hpp"

using namespace std;

Member:: Member (string name, int age, string memberID) : name(name), age(age), memberID(memberID){
    
}

void Member:: borrowBook(Book* book){
    cout << " Borrowed book: " << book -> getTitle() << " by member: " << this -> name << endl;
}

void Member:: display(){
    
    cout << " Name: " << this -> name << ", Age: " << this -> age << ", MemberID: " << this -> memberID << endl;
}
