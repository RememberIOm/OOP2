#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
#include <string>

class PhoneNumber
{
	friend std::ostream& operator << (std::ostream&, const PhoneNumber&);
	friend std::istream& operator >> (std::istream&, PhoneNumber&);
private:
	std::string areaCode;
	std::string exchange;
	std::string line;
};

#endif // !PHONENUBER_H
