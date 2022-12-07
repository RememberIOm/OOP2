#pragma once
#pragma once

#include "Account.h"

class SavingsAccount : public Account {
public:
    SavingsAccount(double, double);

    double calculateInterest() const;

    void credit(double);
    bool debit(double);

private:
    double interestRate;
};