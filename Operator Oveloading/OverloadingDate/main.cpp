//
//  main.cpp
//  OverloadingDate
//
//  Created by Rado on 28.01.24.
//

#include <iostream>
#include <iomanip>
#include "Date.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Date date(28, 1, 2024);

       // Prefix decrement
       --date;
       cout << "Prefix Decrement: " << date << endl;

       // Postfix decrement
       date--;
       cout << "Postfix Decrement: " << date << endl;

       // Input using >>
       cout << "Enter a date (dd-mm-yyyy): ";
       cin >> date;
       cout << "Entered date: " << date << endl;

       return 0;
}
