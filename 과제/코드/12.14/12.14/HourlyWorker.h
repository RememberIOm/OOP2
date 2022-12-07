#pragma once

#include "Employee.h"

class HourlyWorker : public Employee {
public:
    HourlyWorker(const std::string&, const std::string&, const std::string&,
        double = 0.0f, double = 0.0f);

    void setWage(double);
    double getWage() const;

    void setHours(double);
    double getHours() const;

    // overridden functions
    virtual double earnings() const;
    virtual void print() const;

private:
    const double BASE_HOURS = 40.0f;
    const double OVERTIME_RATE = 1.5f;
    double wage;
    double hours;
};