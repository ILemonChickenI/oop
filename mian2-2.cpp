#include <iostream>

using namespace std;

int main()
{
	int  a = 12;
	int* pointer;

	pointer = &a;

	cout << "Address: " << pointer << endl;
	cout << "Value of pointer: " << *pointer << endl;
}