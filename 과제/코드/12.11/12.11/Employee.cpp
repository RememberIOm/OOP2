#include <sstream>
#include <array>
#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(const string& first, const string& last,
	const string& ssn, int year, int month, int day)
	: firstName(first), lastName(last), socialSecurityNumber(ssn) {
	Employee::setDate(month, day, year);
}

void Employee::setFirstName(const string& first) { firstName = first; }

string Employee::getFirstName() const { return firstName; }

void Employee::setLastName(const string& last) { lastName = last; }

string Employee::getLastName() const { return lastName; }

void Employee::setSocialSecurityNumber(const string& ssn) {
	socialSecurityNumber = ssn;
}

string Employee::getSocialSecurityNumber() const {
	return socialSecurityNumber;
}

string Employee::toString() const {
	return getFirstName() + " "s + getLastName() +
		"\nsocial security number: "s + getSocialSecurityNumber() +
		"\nbirthday: "s + getBirthDay();
}

void Employee::setDate(int mm, int dd, int yy) {
	if (mm >= 1 && mm <= 12) {
		month = mm;
	}
	else {
		throw invalid_argument{ "Month must be 1-12" };
	}

	if (yy >= 1900 && yy <= 2100) {
		year = yy;
	}
	else {
		throw invalid_argument{ "Year must be >= 1900 and <= 2100" };
	}

	if ((mm == 2 && leapYear(year) && dd >= 1 && dd <= 29) || (dd >= 1 && dd <= days[mm])) {
		day = dd;
	}
	else {
		throw invalid_argument{
			"Day is out of range for current month and year" };
	}
}

int Employee::getMonth() const
{
	return month;
}

bool Employee::leapYear(int testYear) {
	return (testYear % 400 == 0 || (testYear % 100 != 0 && testYear % 4 == 0));
}

const array<unsigned int, 13> Employee::days{
	0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

string Employee::getBirthDay() const {
	static string monthName[13]{ "", "January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December" };
	return monthName[month] + ' ' + to_string(day) + ", " + to_string(year);
}