#include "Account.h"
using namespace std;

Account::Account(int acc_no, const string &desc, double bal)
    : account_number(acc_no), description(desc), balance(bal) {}

void Account::applyTransaction(const Transaction &t) {
    if (t.debit_credit == 'D')
        balance += t.amount;
    else if (t.debit_credit == 'C')
        balance -= t.amount;
    transactions.push_back(t);
}

ostream &operator<<(ostream &os, const Account &acc) {
    os << "Account " << acc.account_number << ": " << acc.description
       << ", Balance: " << acc.balance;
    return os;
}
