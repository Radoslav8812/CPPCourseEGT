#include "Book.h"

Book::Book(string title, string author, int pages) {

	setTitle(title);
	setAuthor(author);
	setPages(pages);
}

void Book::setTitle(string title) {
	this->title = title;
}
string Book::getTitle() {
	return this->title;
}

void Book::setAuthor(string author) {
	this->author = author;
}
string Book::getAuthor() {
	return this->author;
}

void Book::setPages(int pages) {
	this->pages = pages;
}
int Book::getPages(){
	return this->pages;
}

void Book::display() {

	cout << "Book's Title: " << getTitle() << endl;
	cout << "Book's Author: " << getAuthor() << endl;
	cout << "Book's Pages: " << getPages() << endl;
}