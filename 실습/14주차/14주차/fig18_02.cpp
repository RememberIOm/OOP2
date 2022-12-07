#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
	Stack<double> doubleStack;
	const size_t doubleStackSize{ 5 };
	double doubleValue{ 1.1 };

	cout << "Pushing elements onto doubleStack\n";

	for (size_t i{}; i < doubleStackSize; ++i)
	{
		doubleStack.push(doubleValue);
		cout << doubleValue << " ";
		doubleValue += 1.1;
	}

	cout << "\n\nPopping elements from doubleStack\n";

	while (!doubleStack.isEmpty())
	{
		cout << doubleStack.top() << " ";
		doubleStack.pop();
	}

	cout << "\nStack is empty, cannot pop.\n";

	Stack<int> intStack;
	const size_t intStackSize{ 10 };
	int intValue{ 1 };

	cout << "\nPushing elements onto intStack\n";

	for (size_t i{}; i < intStackSize; ++i)
	{
		intStack.push(intValue);
		cout << intValue++ << " ";
	}

	cout << "\n\nPopping elements from intStack\n";

	while (!intStack.isEmpty())
	{
		cout << intStack.top() << " ";
		intStack.pop();
	}

	cout << "\nStack is empty, cannot pop." << endl;
}