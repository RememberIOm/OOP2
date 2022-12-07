#include <string>
#include <iomanip>
#include <sstream>
#include <cmath>
using namespace std;

class Quadratic
{
public:
	// 생성자 -------------------------------------------------------------

	Quadratic(double inputA = 1, double inputB = 0, double inputC = 0)
	{
		setQuadratic(inputA, inputB, inputC);
	}

	// 값 세팅 ------------------------------------------------------------

	Quadratic& setQuadratic(double inputA, double inputB, double inputC)
	{
		setA(inputA);
		setB(inputB);
		setC(inputC);

		return *this;
	}

	Quadratic& setA(double inputA)
	{
		if (inputA != 0)
		{
			a = inputA;
		}
		else
		{
			add(1, 0, 0);
		}

		return *this;
	}

	Quadratic& setB(double inputB)
	{
		b = inputB;

		return *this;
	}

	Quadratic& setC(double inputC)
	{
		c = inputC;

		return *this;
	}

	// 겟 -------------------------------------------------------------

	double getA() const { return a; }

	double getB() const { return b; }

	double getC() const { return c; }

	char getX() const {	return variable; }

	// 연산 ------------------------------------------------------------

	Quadratic& add(double inputA, double inputB, double inputC)
	{
		a += inputA;
		b += inputB;
		c += inputC;

		return *this;
	}

	Quadratic& subtract(double inputA, double inputB, double inputC)
	{
		a -= inputA;
		b -= inputB;
		c -= inputC;

		return *this;
	}

	string toString() const
	{
		ostringstream output;
		output << getA() << "x^2 + " << getB() << "x + " << getC() << " = 0";

		return output.str();
	}

	string solve() const
	{
		double resultPlus{}, resultMinus{}, discriminant{};
		ostringstream output;

		discriminant = sqrt(pow(b, 2) - 4 * a * c);

		if (discriminant > 0)
		{
			resultPlus = ((-b) + discriminant) / (2 * a);
			resultMinus = ((-b) - discriminant) / (2 * a);

			output << "x = " << resultPlus << " or " << resultMinus;
		}
		else if (discriminant = 0)
		{
			resultPlus = ((-b) + discriminant) / (2 * a);

			output << "x = " << resultPlus;
		}
		else
		{
			output << "No Real Roots.";
		}

		return output.str();
	}

private:
	double a{}, b{}, c{};
	char variable{};
};