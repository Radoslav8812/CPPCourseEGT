//
//  Book.cpp
//  Book
//
//  Created by Rado on 6.01.24.
//

#include "Book.hpp"
#include <string>
using namespace std;

Book::Book(string author, string title, int year, double price) {
    this->author = author;
    this->title = title;
    this->year = year;
    this->price = price;
};

void Book::setAuthor(string author) {
    this->author = author;
}
string Book::getAuthor() {
    return author;
}

void Book::setTitle(string title) {
    this->title = title;
}
string Book::getTitle() {
    return title;
}

void Book::setYear(int year) {
    this->year = year;
}
int Book::getYear() {
    return year;
}

void Book::setPrice(double price) {
    this->price = price;
}
double Book::getPrice() {
    return price;
}

