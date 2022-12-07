#pragma once

#include <string>

class Account {
public:
    explicit Account(double);

    virtual void credit(double);
    virtual bool debit(double);

    double getBalance() const { return balance; }
    void setAccountType(const std::string& at) { accountType = at; }
    std::string getAccountType() const { return accountType; }

private:
    double balance;
    std::string accountType;
};