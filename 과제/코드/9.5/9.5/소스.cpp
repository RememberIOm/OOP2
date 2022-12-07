#include <iostream>
#include "Çì´õ.h"
using namespace std;

int main()
{
	double inputA{}, inputB{}, inputC{};
	cout << "input A : ";
	cin >> inputA;
	cout << "\ninput B : ";
	cin >> inputB;
	cout << "\ninput C : ";
	cin >> inputC;

	Quadratic q(inputA, inputB, inputC);

	while (true)
	{
		cout << "\n\n1. add / 2. subtract / 3. toString / 4. solve / 5. quit\ninput: ";
		int input{};
		cin >> input;

		if (input == 1 or input == 2)
		{
			double A{}, B{}, C{};
			cout << "\n\ninput A : ";
			cin >> A;
			cout << "input B : ";
			cin >> B;
			cout << "input C : ";
			cin >> C;

			if (input == 1) { q.add(A, B, C); }
			else { q.subtract(A, B, C); }			
			
			cout << "\nresult : " << q.toString();
		}
		else if (input == 3)
		{
			cout << "\n\nresult : " << q.toString();
		}
		else if (input == 4)
		{
			cout << q.solve();
		}
		else if (input == 5)
		{
			break;
		}
	}	

	return 0;
}