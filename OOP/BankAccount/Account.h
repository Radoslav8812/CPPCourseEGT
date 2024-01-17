//
//  Account.h
//  BankAccount
//
//  Created by Rado on 8.01.24.
//

#ifndef Account_h
#define Account_h

#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    double balance;
    
public:
    Account(double);
    virtual ~Account(); // Virtual destructor
    
    void setBalance(double);
    double getBalance();
    
    void credit(double); //dobavq kolichestvo kum balansa na potrebitelq.
    bool debit(double); //izvajda kolichestvo ot potrebitelskiq balans.
};

#endif/* Account_h */
