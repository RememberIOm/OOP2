#ifndef DATE_H
#define DATE_H

#include <string>

class Date
{
public:
	static const unsigned int monthsPerYear{ 12 };
	explicit Date(unsigned int = 1, unsigned int = 1, unsigned int = 1900);
	void currentDate();
	std::string toString() const;
	~Date();
private:
	unsigned int month;
	unsigned int day;
	unsigned int year;

	unsigned int checkDay(int) const;
};

#endif