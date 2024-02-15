//
//  main.cpp
//  LibraryManagementSystem
//
//  Created by Rado on 31.01.24.
//

#include <iostream>
#include <string>

#include "Book.hpp"
#include "Member.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    
    Book booksArr[2] = {
        Book("Paziteli", "Diin Kuntz", "112211"),
        Book("Zeleniq put", "Stivan King", "11111")
    };
    
    Member membersArr[2] = {
        Member("Rado", 35, "8812"),
        Member("Spiro", 45, "7812")
    };
    
    Member* curretMember = &membersArr[1];
    curretMember -> display();
    
    if (Book* currentBook = dynamic_cast<Book*>(&booksArr[0])){
        curretMember -> borrowBook(currentBook);
    }
    else{
        cout << "error!" << endl;
    }
    
    return  0;
}
