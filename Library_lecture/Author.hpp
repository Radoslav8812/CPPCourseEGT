//
//  Author.hpp
//  Library
//
//  Created by Rado on 19.01.24.
//

#ifndef Author_hpp
#define Author_hpp

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class Author{
    
private:
    string name;
    string surName;
    string nationality;
    
public:
    Author (string name, string surname, string nationality);
    
    void setName(string);
    string getName();
    
    void setSurName(string);
    string getSurname();
    
    void setNationality(string);
    string getNationality();
    
    void showInfo();
};
#endif /* Author_hpp */
