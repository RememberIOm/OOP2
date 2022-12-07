#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// A
	cout << setw(15) << left << 40000 << endl;

	// B
	char state[80];
	cin.getline(state, 80);

	// C
	cout << 200 << ' ' << showpos << 200 << noshowpos << endl;
	
	// D
	int num{ 100 };
	cout << showbase << hex << num << endl;
	
	// E
	char charArray[10]{};

	for (int i{}; i < 9; ++i)
	{
		char temp{};
		cin >> temp;
		charArray[i] = temp;

		if (temp == 'p')
		{
			charArray[i + 1] = NULL;
			break;
		}
	}

	cout << charArray << endl;

	// F
	cout << setfill('0') << setw(9) << right << 1.234 << endl;


	return 0;
}