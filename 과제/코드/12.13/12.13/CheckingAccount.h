#pragma once

#include "Account.h"

class CheckingAccount : public Account {
public:
    CheckingAccount(double, double);

    void credit(double);
    bool debit(double);

private:
    double feePerTransaction;
};