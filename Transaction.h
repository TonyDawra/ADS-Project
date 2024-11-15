#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
using namespace std;

class Transaction {
public:
    int account_number;
    double amount;
    char debit_credit; // 'D' for debit, 'C' for credit

    // Constructor
    Transaction(int acc_no, double amt, char dc);

    // Overloaded operator for printing transaction
    friend ostream &operator<<(ostream &os, const Transaction &t);
};

#endif // TRANSACTION_H
