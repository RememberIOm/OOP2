#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	Date n1(7, 20, 2018), n2;

	cout << "A.\n" << n1.toString() << "\n\nB.\n" << n2.toString() << "\n\nC.\n";

	n1.currentDate();

	cout << n1.toString();

	return 0;
}