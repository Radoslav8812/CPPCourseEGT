//
//  main.cpp
//  BankAccount
//
//  Created by Rado on 8.01.24.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

using namespace std;

int main()
{
    //vector <Account> accountVect;
    //
    //Account account1(50.00);
    //SavingsAccount account2(25.00, 0.3);
    //CheckingAccount account3(80.00, 1.0);
//
    //accountVect.push_back(account1);
    //accountVect.push_back(account2);
    //accountVect.push_back(account3);
    //
    //cout << fixed << setprecision(2);
//
    /////initial balance !
    //cout << "Account balance :" << account1.getBalance() << endl;
    //cout << "Account balance :" << account2.getBalance() << endl;
    //cout << "Account balance :" << account3.getBalance() << endl;
//
    //cout << "Debit 25.00$ from Account1" << endl;
    //account1.debit(25.00);
    //cout << "Debit 30.00 from Account2" << endl;
    //account2.debit(30.00);
    //cout << "Debit 40.00 from Account3" << endl;
    //account3.debit(40.00);
//
    //cout << "Account balance :" << account1.getBalance() << endl;
    //cout << "Account balance :" << account2.getBalance() << endl;
    //cout << "Account balance :" << account3.getBalance() << endl;
//
    //cout << "Debit 40.00$ from Account1" << endl;
    //account1.credit(40.00);
    //cout << "Debit 65.00 from Account2" << endl;
    //account2.credit(65.00);
    //cout << "Debit 20.00 from Account3" << endl;
    //account3.credit(20.00);
//
    //cout << "Account balance :" << account1.getBalance() << endl;
    //cout << "Account balance :" << account2.getBalance() << endl;
    //cout << "Account balance :" << account3.getBalance() << endl;
//
    //double interestEarned = account2.calculateInterest();
    //cout << " adding $ " << interestEarned << "Interest to account2 " << endl;
    //account2.credit(interestEarned);
//
    //cout << "New account2 balance : $" << account2.getBalance() << endl;

    vector<Account*> dynamicVect;
    
    SavingsAccount savingsAccount (999.99, 0.02);
    CheckingAccount checkingAccount (499.99, 1.50);
    
    dynamicVect.push_back(&savingsAccount);
    dynamicVect.push_back(&checkingAccount);
    
    cout << fixed << setprecision(2);
    
    for (Account* accPtr : dynamicVect){
        
        double withDrawAmount;
        double depositAmount;
        
        cout << "Enter withdraw amount for the account: ";
        cin >> withDrawAmount;
        
        if (accPtr -> debit(withDrawAmount)) {
            cout << "Withdraw success" << endl;
        }else{
            cout << "Withdraw failed. Not enough money!" << endl;
        }
        
        cout << "Enter deposit amount for the account: ";
        cin >> depositAmount;
        
        accPtr -> credit(depositAmount);
        cout << "Deposit is successful." << endl;
        
        // using dynamic cast to determine account type :
        SavingsAccount* savingAccPtr = dynamic_cast<SavingsAccount*>(accPtr);
        
        if (savingAccPtr != nullptr){
            double interestEarned = savingAccPtr -> calculateInterest();
            savingAccPtr -> credit(interestEarned);
            cout << "Interest of $" << interestEarned << " added to SavingsAccount." << endl;
        }
        
        // Print updated account balance
        cout << "Updated account balance: $" << accPtr -> getBalance() << endl;
        cout << endl;
        
        // Cleanup memory
        for (Account* accPtr : dynamicVect) {
            delete accPtr;
        }
    }
    return 0;
}
