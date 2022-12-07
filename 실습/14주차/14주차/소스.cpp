#include <iostream>
#include <new>
using namespace std;

int main()
{
	double* ptr[50];

	try
	{
		for (size_t i{}; i < 50; ++i)
		{
			ptr[i] = new double[50'000'000]{};
			cout << "ptr[" << i << "] points to 50,000,000 new doubles\n";
		}
	}
	catch (bad_alloc& memoryAllocationException)
	{
		cerr << "Exception occurred: "
			<< memoryAllocationException.what() << endl;
	}
}