//
//  Date.cpp
//  OverloadingDate
//
//  Created by Rado on 28.01.24.
//

#include "Date.hpp"
#include <iomanip>

int daysInMonth(int month, int year) {
    
    if (month == 2) {
        // Check for leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return 29; // February has 29 days in a leap year
        } 
        else {
            return 28; // February has 28 days in a non-leap year
        }
    } 
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30; // April, June, September, November have 30 days
    } 
    else {
        return 31; // January, March, May, July, August, October, December have 31 days
    }
}

Date:: Date (int day, int month, int year) {
    
    setDay(day);
    setMonth(month);
    setYear(year);
    
}
void Date:: setDay(int day){
    this -> day = day;
}
int Date:: getDay(){
    return this -> day;
}

void Date:: setMonth(int month){
    this -> month = month;
}
int Date:: getMonth(){
    return this -> month;
}

void Date:: setYear(int year){
    this -> year = year;
}
int Date:: getYear(){
    return this -> year;
}

// decrement prefix:
Date Date:: operator--(){
    --day;
    
    if (day == 0){
        --month;
        
        if (month == 0){
            --year;
            month = 12;
        }
        
        day = daysInMonth(month, year);
    }
    
    return *this;
}

// decrement postfix:
Date Date:: operator--(int){
    
    Date currDate = *this;
    --(*this);
    return currDate;
}

ostream operator<<(ostream output, Date date) {

    output << setfill('0') << setw(2) << date.getDay() << '-';
    output << setw(2) << date.getMonth() << '-' << date.getYear();
    return output;
}

// Предефиниране на оператор >>
istream operator>>(istream input, Date date) {
    
    char dash;
    input >> date.day >> dash >> date.month >> dash >> date.year;
    return input;
}
