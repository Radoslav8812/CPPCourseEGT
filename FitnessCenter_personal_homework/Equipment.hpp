//
//  Equipment.hpp
//  FitnessCenter
//
//  Created by Rado on 18.01.24.
//

#ifndef Equipment_hpp
#define Equipment_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Equipment{
  
private:
    string name;
    
public:
    Equipment(string name);
    ~Equipment();
    
    void showInfo();
};

#endif /* Equipment_hpp */
