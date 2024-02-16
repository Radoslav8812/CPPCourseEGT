
#include "Book.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {

	vector<Book> booksVect;

	booksVect.emplace_back("Silence of the lambs", "Stephen King", 500);
	booksVect.emplace_back("Rise of the hunter", " N/A", 250);

	for (int i = 0; i < booksVect.size(); i++) {

		cout << i + 1 << endl;
		booksVect[i].display();
		cout << endl;
	}


	return 0;
}