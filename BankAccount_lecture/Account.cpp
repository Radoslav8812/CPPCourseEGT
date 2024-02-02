//
//  Account.c
//  BankAccount
//
//  Created by Rado on 8.01.24.
//
#include <iostream>
#include <stdio.h>
#include <string>
#include "Account.h"

using namespace std;

Account:: Account(double initialBalance)
{
    if (initialBalance >= 0.0)
        initialBalance = balance;
    else
    {
        cout << " Balance can not be negative" << endl;
        balance = 0.0;
    }
}
void Account:: credit(double amount)
{
    balance = balance + amount; /// dobavq na smetkata( balance ).
}
bool Account:: debit(double amount)
{
    if (amount > balance)
    {
        cout << " debit amount exceeded account balance " << endl;
        return false;
    }
    else
    {
        balance = balance - amount;
        return true;
    }
}

void Account:: setBalance(double newBalance)
{
    balance = newBalance;
}
double Account:: getBalance()
{
    return balance;
}

Account::~Account()
{
   
}
