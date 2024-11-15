#include "Transaction.h"
using namespace std;

Transaction::Transaction(int acc_no, double amt, char dc)
    : account_number(acc_no), amount(amt), debit_credit(dc) {}

// Overloaded operator for printing transaction details
ostream &operator<<(ostream &os, const Transaction &t) {
    os << "Transaction for account " << t.account_number << ": "
       << (t.debit_credit == 'D' ? "Debit " : "Credit ")
       << t.amount;
    return os;
}
