#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "BasePlusCommissionEmployee.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
	const string& first, const string& last, const string& ssn, int year, int month, int day,
	double sales, double rate, double salary)
	: CommissionEmployee(first, last, ssn, year, month, day, sales, rate) {
	setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
	if (salary < 0.0) {
		throw invalid_argument("Salary must be >= 0.0");
	}

	baseSalary = salary;
}

double BasePlusCommissionEmployee::getBaseSalary() const {
	return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const {
	return getBaseSalary() + CommissionEmployee::earnings();
}

double BasePlusCommissionEmployee::earnings(int month_input) const {
	if (month_input == getMonth())
	{
		return getBaseSalary() + CommissionEmployee::earnings() + 100.00;
	}
	else
	{
		return getBaseSalary() + CommissionEmployee::earnings();
	}
}

string BasePlusCommissionEmployee::toString() const {
	ostringstream output;
	output << fixed << setprecision(2);
	output << "base-salaried " << CommissionEmployee::toString()
		<< "; base salary: " << getBaseSalary();
	return output.str();
}