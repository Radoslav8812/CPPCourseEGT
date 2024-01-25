//
//  User.cpp
//  FootBall
//
//  Created by Rado on 24.01.24.
//

#include "User.hpp"
#include <iostream>

User:: User (string userName, string passWord){
    
    this -> userName = userName;
    this -> passWord = passWord;
}

void User:: setUserName(string userName){
    this -> userName = userName;
}
string User:: getUserName(){
    return this -> userName;
}

void User:: setPassWord(string passWord){
    
    if (passWord.length() > 4 && passWord.length() < 20){
        this -> passWord = passWord;
    }
    else{
        while (!(passWord.length() > 4 && passWord.length() < 20)) {
            cout << "Invalid PassWord" << endl;
            cin >> passWord;
        }
    }
    
    this -> passWord = passWord;
    
}
string User:: getPassWord(){
    return this -> passWord;
}

//bool User:: passAuthentication(string enteredPassword){
//    return this -> passWord == enteredPassword;
//}
