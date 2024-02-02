//
//  main.cpp
//  OverloadingDate
//
//  Created by Rado on 28.01.24.
//

#include <iostream>
#include <istream>
#include "Date.hpp"

using namespace std;


int main(int argc, const char * argv[]) {
    
    vector<Date*> datesVect;
    
    datesVect.push_back(new Date(28, 1, 2024));
    datesVect.push_back(new Date(15, 3, 2023));
    
    for (auto& date : datesVect) {
        delete date;
    }

    
    Date inputDate(0, 0, 0);
    cout << "Enter a date in the format dd-mm-yyyy: ";
    cin >> inputDate;
    // Check if the input was successful
    if (cin.fail()) {
        cerr << "Invalid date format entered." << endl;
        return 1;
    }
    
    cout << "Entered date: " << inputDate << endl;

    return 0;
}
