#include <iostream>
#include <iomanip>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main()
{
	Package package{ "sender_name", "recipient_name", "sender_address", "recipient_address",
	"sender_city", "recipient_city", "sender_state", "recipient_state",
	"sender_ZIPcode", "recipient_ZIPcode", 100.0, 50.0 };

	cout << fixed << setprecision(2)
		<< "Package information obtained by get functions: \n"
		<< "\nSender name is " << package.get_name_sender()
		<< "\nRecipient name is " << package.get_name_recipient()
		<< "\nSender address is " << package.get_address_sender()
		<< "\nRecipient address is " << package.get_address_recipient()
		<< "\nSender city is " << package.get_city_sender()
		<< "\nRecipient city is " << package.get_city_recipient()
		<< "\nSender state is " << package.get_state_sender()
		<< "\nRecipient state is " << package.get_state_recipient()
		<< "\nSender ZIPcode is " << package.get_ZIPcode_sender()
		<< "\nRecipient ZIPcode is " << package.get_ZIPcode_recipient() << endl;

	cout << "\n\nPackage's cost: $" << package.calculateCost() << endl;

	TwoDayPackage twodaypackage{ "sender_name", "recipient_name", "sender_address", "recipient_address",
	"sender_city", "recipient_city", "sender_state", "recipient_state",
	"sender_ZIPcode", "recipient_ZIPcode", 100.0, 50.0, 30.0 };

	cout << "\n\nTwo day package's cost: $" << twodaypackage.calculateCost() << endl;

	OvernightPackage overnightpackage{ "sender_name", "recipient_name", "sender_address", "recipient_address",
	"sender_city", "recipient_city", "sender_state", "recipient_state",
	"sender_ZIPcode", "recipient_ZIPcode", 100.0, 50.0, 4.0 };

	cout << "\n\nOvernight package's cost: $" << overnightpackage.calculateCost() << endl;

	return 0;
}