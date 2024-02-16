
#include <iostream>
#include <string>

using namespace std;

class Book {

private:
	string title;
	string author;
	int pages;

public:
	Book(string title, string author, int pages);

	void setTitle(string);
	string getTitle();

	void setAuthor(string);
	string getAuthor();

	void setPages(int);
	int getPages();

	void display();
};