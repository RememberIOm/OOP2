#include <array>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <ctime>
#pragma warning(disable: 4996)
#include "Date.h"
using namespace std;

Date::Date(unsigned int mn, unsigned int dy, unsigned int yr)
	: month{ mn }, day{ checkDay(dy) }, year{ yr }
{
	if (mn < 1 || mn > monthsPerYear)
	{
		throw invalid_argument("month must be 1-12");
	}
}

void Date::currentDate()
{
	time_t temp{ time(NULL) };
	string strDate{ ctime(&temp) };

	year = stoi(strDate.substr(20, 4));
	day = stoi(strDate.substr(8, 2));

	string strDateMonth{ strDate.substr(4, 3) };

	if (strDateMonth == "Jan") { month = 1; }
	else if (strDateMonth == "Feb") { month = 2; }
	else if (strDateMonth == "Mar") { month = 3; }
	else if (strDateMonth == "Apr") { month = 4; }
	else if (strDateMonth == "May") { month = 5; }
	else if (strDateMonth == "Jun") { month = 6; }
	else if (strDateMonth == "Jul") { month = 7; }
	else if (strDateMonth == "Aug") { month = 8; }
	else if (strDateMonth == "Sep") { month = 9; }
	else if (strDateMonth == "Oct") { month = 10; }
	else if (strDateMonth == "Nov") { month = 11; }
	else if (strDateMonth == "Dec") { month = 12; }
}

string Date::toString() const
{
	const array<int, monthsPerYear + 1> kDaysPerMonth{
		0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	const array<string, monthsPerYear + 1> kNamePerMonth{
		"\0", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

	unsigned int kDay{};
	for (int i{1}; i < month; ++i)
	{
		kDay += kDaysPerMonth.at(i);
	}

	ostringstream output;
	output << month << '/' << day << '/' << year
		<< '\n' << kDay + day << ' ' << year
		<< '\n' << kNamePerMonth.at(month) << ' ' << day << ", " << year;
	return output.str();
}

Date::~Date() {}

unsigned int Date::checkDay(int testDay) const
{
	static const array<int, monthsPerYear + 1> daysPerMonth{
		0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (testDay > 0 && testDay <= daysPerMonth[month])
	{
		return testDay;
	}

	if (month == 2 && testDay == 29 && (year % 400 == 0 ||
		(year % 4 == 0 && year % 100 != 0)))
	{
		return testDay;
	}

	throw invalid_argument("Invalid day for current month and year");
}