#include <iostream>
#include "function1-4.h"
using namespace std;

int main() {
	double first[3] = { 1.4,2.5,3.6 };
	double second[3];

	cpyda(first, second, 3);

	cout << "The new array is: ";

	for (int m = 0; m < 3; m++) {
		cout << second[m] << " ";
	}

}