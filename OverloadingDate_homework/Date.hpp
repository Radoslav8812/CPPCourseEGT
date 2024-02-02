//
//  Date.hpp
//  OverloadingDate
//
//  Created by Rado on 28.01.24.
//

#ifndef Date_hpp
#define Date_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Date{
  
protected:
    int day;
    int month;
    int year;
    
public:
    Date(int, int, int);
    
    // prefix and postfix
    Date& operator--();
    Date operator--(int);
    
    void setDay(int);
    int getDay();
    
    void setMonth(int);
    int getMonth();
    
    void setYear(int);
    int getYear();
    
    // overloaded input/output
    friend std::ostream& operator<<(std::ostream& output, Date& date);
    friend std::istream& operator>>(std::istream& input, Date& date);
    
};

#endif /* Date_hpp */
