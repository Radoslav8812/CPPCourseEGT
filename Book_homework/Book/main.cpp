//
//  main.cpp
//  Book
//
//  Created by Rado on 6.01.24.
//

#include <iostream>
#include <vector>
#include "Book.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    vector<Book> booksVect;
    
    booksVect.push_back(Book("Стивън Кинг", "Зеленият път", 2002, 25.5));
    booksVect.push_back(Book("Диян Дуаяр", "Пазители", 2000, 29.99));
    booksVect.push_back(Book("Стивън Кинг", "Мълчанието на агнетата", 1992, 39.99));
    booksVect.push_back(Book("Стивън Кинг", "Ханибал", 1995, 49.99));
        
    double minPrice = booksVect[0].getPrice();
    double maxPrice = booksVect[0].getPrice();

    for (int i = 1; i < booksVect.size(); i++) {
    
        double currentPrice = booksVect[i].getPrice();
        
        if (currentPrice < minPrice) {
            minPrice = currentPrice;
        }
        
        if (currentPrice > maxPrice) {
            maxPrice = currentPrice;
        }
    }
    
    cout << "Min price of book in the collection is -> " << minPrice << endl;
    cout << "Max price of book in the collection is -> " << maxPrice << endl;
    
    return 0;
}
