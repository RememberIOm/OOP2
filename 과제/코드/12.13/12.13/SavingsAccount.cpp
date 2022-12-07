#include <iostream>

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double b, double ir)
    : Account(b), interestRate(ir) {
    Account::setAccountType("savings");
}
// calculate interest
double SavingsAccount::calculateInterest() const {
    return Account::getBalance() * interestRate;
}
void SavingsAccount::credit(double c) {
    Account::credit(calculateInterest() + c);
}
bool SavingsAccount::debit(double d) {
    if (!Account::debit(d)) {
        std::cout << "Error. Insufficient funds in savings account"
            << std::endl;
        return false;
    }
    return true;
}