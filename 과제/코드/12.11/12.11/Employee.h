#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
public:
	Employee(const std::string&, const std::string&, const std::string&, int, int, int);
	virtual ~Employee() = default;

	void setFirstName(const std::string&);
	std::string getFirstName() const;

	void setLastName(const std::string&);
	std::string getLastName() const;

	void setSocialSecurityNumber(const std::string&);
	std::string getSocialSecurityNumber() const;

	virtual double earnings() const = 0;
	virtual double earnings(int) const = 0;
	virtual std::string toString() const;

	void setDate(int, int, int);
	int getMonth() const;
	static bool leapYear(int);
	std::string getBirthDay() const;
private:
	std::string firstName;
	std::string lastName;
	std::string socialSecurityNumber;
	unsigned int month;
	unsigned int day;
	unsigned int year;
	static const std::array<unsigned int, 13> days;
};

#endif
