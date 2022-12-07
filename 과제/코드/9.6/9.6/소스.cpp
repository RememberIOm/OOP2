#include <iostream>
#include "Çì´õ.h"
using namespace std;

int main()
{
	int numerator{}, denominator{};
	cout << "input numerator: "; cin >> numerator;
	cout << "input denominator: "; cin >> denominator;

	Rational A(numerator, denominator);

	while (true)
	{
		cout << "\n";

		int answer{};
		cout << "\n"
			<< "1. add / 2. subtract / 3. multiply / 4. divide / 5. string / 6. double / 7. quit"
			<< "\n"
			<< "input: ";
		cin >> answer;

		cout << "\n";

		if (answer <= 4)
		{
			int input_numerator{}, input_denominator{};
			cout << "input numerator: "; cin >> input_numerator;
			cout << "input denominator: "; cin >> input_denominator;

			cout << "\n";

			if (answer == 1)
			{
				A.add(input_numerator, input_denominator);

				cout << "result: " << A.toRationalString();
			}
			else if (answer == 2)
			{
				A.subtract(input_numerator, input_denominator);

				cout << "result: " << A.toRationalString();
			}
			else if (answer == 3)
			{
				A.multiply(input_numerator, input_denominator);

				cout << "result: " << A.toRationalString();
			}
			else if (answer == 4)
			{
				A.divide(input_numerator, input_denominator);

				cout << "result: " << A.toRationalString();
			}
		}
		else
		{
			if (answer == 5)
			{
			cout << "result: " << A.toRationalString();
			}
			else if (answer == 6)
			{
			cout << "result: " << A.toDouble();
			}
			else
			{
			break;
			}
		}
	}

	return 0;
}