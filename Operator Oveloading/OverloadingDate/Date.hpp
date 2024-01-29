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
#include <fstream>

using namespace std;

class Date{
  
private:
    int day;
    int month;
    int year;
    
public:
    Date(int day, int month, int year);
    
    // prefix and postfix
    Date operator--();
    Date operator--(int);
    
    void setDay(int);
    int getDay();
    
    void setMonth(int);
    int getMonth();
    
    void setYear(int);
    int getYear();
    
    // overloaded input/output
    friend ostream operator<<(ostream output, Date date);
    friend istream operator>>(istream input, Date date);
    
};

#endif /* Date_hpp */
