#pragma once

#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee {
public:
    BasePlusCommissionEmployee(const std::string&, const std::string&,
        const std::string&, double = 0.0f, double = 0.0f,
        double = 0.0f);

    void setBaseSalary(double);
    double getBaseSalary() const;

    // keyword virtual signals intent to override
    virtual double earnings() const;  // calculate earnings
    virtual void print() const;       // print BasePlusCommissionEmployee object

private:
    double baseSalary;
};