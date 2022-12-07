#pragma once

#include "Employee.h"

class CommissionEmployee : public Employee {
public:
    CommissionEmployee(const std::string&, const std::string&,
        const std::string&, double = 0.0f, double = 0.0f);

    void setCommissionRate(double);
    double getCommissionRate() const;

    void setGrossSales(double);
    double getGrossSales() const;

    // keyword virtual signals intent to override
    virtual double earnings() const;
    virtual void print() const;

private:
    double grossSales;
    double commissionRate;
};