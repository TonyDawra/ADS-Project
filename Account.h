#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
#include <vector>
#include "Transaction.h"
using namespace std;

class Account {
public:
    int account_number;
    string description;
    double balance;
    vector<Transaction> transactions;

    Account(int acc_no, const string &desc, double bal = 0.0);

    // Methods to add/remove transactions and update balance
    void applyTransaction(const Transaction &t);

    // Overloaded operators for << and >>
    friend ostream &operator<<(ostream &os, const Account &acc);
};

#endif // ACCOUNT_H
