//
//  SavingsAccount.h
//  BankAccount
//
//  Created by Rado on 8.01.24.
//

#ifndef SavingsAccount_h
#define SavingsAccount_h

#include "Account.h"
#include <iostream>
#include <string>

using namespace std;

class SavingsAccount : public Account
{
public:
    SavingsAccount(double, double); /// <- balance & interest rate !
    
       double calculateInterest(); // calculate 

private:
    double interestRate;
};

#endif /* SavingsAccount_h */
