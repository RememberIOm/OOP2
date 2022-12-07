#pragma once

#include "Employee.h"

class SalariedEmployee : public Employee {
public:
    SalariedEmployee(const std::string&, const std::string&, const std::string&,
        double = 0.0f);

    void setWeeklySalary(double);
    double getWeeklySalary() const;

    // keyword virtual signals intent to override
    virtual double earnings() const;
    virtual void print() const;

private:
    double weeklySalary;
};