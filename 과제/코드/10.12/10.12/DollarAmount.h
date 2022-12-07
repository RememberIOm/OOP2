#pragma once

#include <string>
#include <cmath>

class DollarAmount
{
public:
	explicit DollarAmount(int64_t value) : amount{ value } {}

	DollarAmount operator+(const DollarAmount& right)
	{
		int64_t amount = this->amount + right.amount;
		return DollarAmount(amount);
	}

	DollarAmount operator-(const DollarAmount& right)
	{
		int64_t amount = this->amount - right.amount;
		return DollarAmount(amount);
	}

	DollarAmount operator*(const DollarAmount& right)
	{
		int64_t amount = this->amount * right.amount;
		return DollarAmount(amount);
	}

	DollarAmount operator/(const DollarAmount& right)
	{
		int64_t amount = this->amount / right.amount;
		return DollarAmount(amount);
	}

	void addInterest(int rate, int divisor)
	{
		DollarAmount interest{
			(amount * rate + divisor / 2) / divisor
		};

		*this + interest;
	}

	std::string toString() const {
		std::string dollars{ std::to_string(amount / 100) };
		std::string cents{ std::to_string(std::abs(amount % 100)) };
		return dollars + "." + (cents.size() == 1 ? "0" : "") + cents;
	}

private:
	int64_t amount{};
};