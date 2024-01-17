//
//  CheckingAccount.h
//  BankAccount
//
//  Created by Rado on 8.01.24.
//

#ifndef CheckingAccount_h
#define CheckingAccount_h

#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

class CheckingAccount : public Account
{
private:
    double transactionFee; // taksa za tranzakciq
    void chargeFee(); // spomagatelna funkciq za taksata (fee)
    //
public:
    CheckingAccount(double, double);
    ~CheckingAccount();
    
    void credit(double); // predefinirane na kredit funkciqta
    bool debit(double); // -------||------
};

#endif /* CheckingAccount_h */
