//
//  main.cpp
//  Library
//
//  Created by Rado on 18.11.23.
//

#include <iostream>
using namespace std;

struct Book {
    string title;
    int quantity;
};

const int numberOfBooks = 10; // the number of books in the library.

int main(int argc, const char * argv[]) {
    
    //Array of books
    Book libraryBooks[numberOfBooks] = {
        {"1", 5},
        {"2", 8},
        {"3", 3},
        {"4", 10},
        {"5", 1},
        {"6", 4},
        {"7", 7},
        {"8", 2},
        {"9", 9},
        {"10", 0}
    };
    
    cout << "Enter a book name to search: " << endl;
    string bookTitle;
    cin >> bookTitle;
    
    int i = 0;
    bool found = false;
    
    while (i < numberOfBooks && !found) {
        if (libraryBooks[i].title == bookTitle) {
            
            if (libraryBooks[i].quantity > 0){
                libraryBooks[i].quantity -= 1;
                cout << "One book is under rent!" << endl;
            }
            else{
                cout << "The book is not available, becouse of quantity atm." << endl;
            }
            
            cout << "Book found! Title: " << libraryBooks[i].title << " | Quantity: "
            << libraryBooks[i].quantity << endl;
            
            found = true;
        }
        i++;
    }

    if (!found) {
        cout << "Book not found in the library." << endl;
    }
}
