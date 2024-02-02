//
//  User.hpp
//  FootBall
//
//  Created by Rado on 24.01.24.
//

#ifndef User_hpp
#define User_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class User{
  
private:
    string userName;
    string passWord;
    
    
public:
    User(string userName, string passWord);
    
    void setUserName(string);
    string getUserName();
    
    void setPassWord(string);
    string getPassWord();
    
    
};

#endif /* User_hpp */
