#include <iostream>

#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double b, double fpt)
    : Account(b), feePerTransaction(fpt) {
    Account::setAccountType("checking");
}
// credit
void CheckingAccount::credit(double c) {
    Account::credit(c + feePerTransaction);
}
// debit
bool CheckingAccount::debit(double d) {
    if (Account::debit(d)) {
        return Account::debit(feePerTransaction);
    }
    else {
        std::cout << "Error insufficient funds in checking account";
        return false;
    }
}