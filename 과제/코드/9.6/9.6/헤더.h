#include <sstream>
#include <cmath>
using namespace std;

class Rational
{
private:
	int numerator_{ 1 }, denominator_{ 1 };

public:
	//constructor
	Rational(int input_numerator = 1, int input_denominator = 1)
		: numerator_{ input_numerator }, denominator_{ input_denominator }
	{
		if (get_denominator() == 0) { set_denominator(1); }
	}

	//member fn
	int GCD(int a, int b)
	{
		if (a % b == 0) { return b; }
		else { return GCD(b, a % b); }
	}

	int get_numerator() const { return numerator_; }
	int get_denominator() const { return denominator_; }

	Rational& set_numerator(int input_numerator)
	{
		numerator_ = input_numerator;
		return *this;
	}
	Rational& set_denominator(int input_denominator)
	{
		denominator_ = input_denominator;
		return *this;
	}

	Rational& reduce_fraction()
	{
		int gcd{ GCD(abs(get_numerator()), get_denominator()) };
		set_numerator(get_numerator() / gcd);
		set_denominator(get_denominator() / gcd);

		return *this;
	}

	Rational& add(int input_numerator, int input_denominator)
	{
		int lcm{ get_denominator() * input_denominator / GCD(get_denominator(), input_denominator) },
			first_fraction_multiply{ lcm / get_denominator() },
			second_fraction_multiply{ lcm / input_denominator };

		set_numerator((get_numerator() * first_fraction_multiply) + (input_numerator * second_fraction_multiply));
		set_denominator(lcm);

		reduce_fraction();

		return *this;
	}

	Rational& subtract(int input_numerator, int input_denominator)
	{
		int lcm{ get_denominator() * input_denominator / GCD(get_denominator(), input_denominator) },
			first_fraction_multiply{ lcm / get_denominator() },
			second_fraction_multiply{ lcm / input_denominator };

		set_numerator((get_numerator() * first_fraction_multiply) - (input_numerator * second_fraction_multiply));
		set_denominator(lcm);

		reduce_fraction();

		return *this;
	}

	Rational& multiply(int input_numerator, int input_denominator)
	{
		set_numerator(get_numerator() * input_numerator);
		set_denominator(get_denominator() * input_denominator);

		reduce_fraction();

		return *this;
	}

	Rational& divide(int input_numerator, int input_denominator)
	{
		set_numerator(get_numerator() * input_denominator);
		set_denominator(get_denominator() * input_numerator);

		reduce_fraction();

		return *this;
	}

	string toRationalString()
	{
		ostringstream output;
		output << get_numerator() << '/' << get_denominator();

		return output.str();
	}

	double toDouble()
	{
		return 1.0 * get_numerator() / get_denominator();
	}
};