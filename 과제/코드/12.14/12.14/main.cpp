#include <iomanip>
#include <iostream>
#include <vector>

#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
#include "Employee.h"
#include "HourlyWorker.h"
#include "PieceWorker.h"
#include "SalariedEmployee.h"

int main(int argc, const char* argv[]) {
    std::vector<Employee*> employees;

    employees.push_back(
        new SalariedEmployee("John", "Smi.hpp", "111-11-1111", 800));
    employees.push_back(
        new CommissionEmployee("Sue", "Jones", "222-22-2222", 10000, .06));
    employees.push_back(new BasePlusCommissionEmployee(
        "Bob", "Lewis", "333-33-3333", 5000, .04, 300));
    employees.push_back(
        new PieceWorker("Eamon", "Holmes", "444-44-4444", 200, 1.25));
    employees.push_back(
        new HourlyWorker("Jesus", "Christ", "555-55-5555", 45, 5.00));

    for (std::size_t i = 0; i < employees.size(); ++i) {
        std::cout << std::endl;
        employees[i]->print();
        std::cout << "\nEarned $" << employees[i]->earnings() << std::endl;
    }

    for (std::size_t i = 0; i < employees.size(); ++i) {
        delete employees[i];
    }

    return 0;
}