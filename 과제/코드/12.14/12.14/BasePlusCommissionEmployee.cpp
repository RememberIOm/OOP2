#include <iostream>
#include <string>

#include "BasePlusCommissionEmployee.h"

// constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const std::string& first, const std::string& last, const std::string& ssn,
    double sales, double rate, double salary)
    : CommissionEmployee(first, last, ssn, sales, rate) {
    setBaseSalary(salary);
}
// set base salary
void BasePlusCommissionEmployee::setBaseSalary(double salary) {
    if (salary >= 0.0f) {
        baseSalary = salary;
    }
    else {
        throw std::invalid_argument("Salary must be >= 0.0f");
    }
}
// get base salary
double BasePlusCommissionEmployee::getBaseSalary() const { return baseSalary; }
// calculate earnings;
// override virtual function earnings in CommissionEmployee
double BasePlusCommissionEmployee::earnings() const {
    return getBaseSalary() + CommissionEmployee::earnings();
}
// print BasePlusCommissionEmployee's information
void BasePlusCommissionEmployee::print() const {
    std::cout << "base-salaried ";
    CommissionEmployee::print();  // code reuse
    std::cout << ": base salary : " << getBaseSalary();
}