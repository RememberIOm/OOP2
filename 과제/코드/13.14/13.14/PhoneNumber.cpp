#include <iomanip>
#include "PhoneNumber.h"
using namespace std;

ostream& operator << (ostream& output, const PhoneNumber& number)
{
	output << "Area code: " << number.areaCode << "\nExchange: "
		<< number.exchange << "\nLine: " << number.line << "\n"
		<< "(" << number.areaCode << ") " << number.exchange << "-"
		<< number.line << "\n";
	return output;
}

istream& operator >> (istream& input, PhoneNumber& number)
{
	string strPhoneNumber;
	getline(cin, strPhoneNumber);
	if (strPhoneNumber.length() != 14)
	{
		input.clear(ios_base::failbit);
	}
	else if ((strPhoneNumber[1] == '0' or strPhoneNumber[1] == '1') and (strPhoneNumber[6] == '0' or strPhoneNumber[6] == '1'))
	{
		input.clear(ios_base::failbit);
	}
	else if (strPhoneNumber[2] != '0' and strPhoneNumber[2] != '1')
	{
		input.clear(ios_base::failbit);
	}

	if (!input.fail())
	{
		number.areaCode = strPhoneNumber.substr(1, 3);
		number.exchange = strPhoneNumber.substr(6, 8);
		number.line = strPhoneNumber.substr(10, 13);
	}

	return input;
}