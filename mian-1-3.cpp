#include <iostream>
#include "function1-3.h"
using namespace std;

int main() {
	int first[3] = { 1,2,3 };
	int second[3];

	cpyia(first, second, 3);

	cout << "The new array is: ";

	for (int m = 0; m < 3; m++) {
		cout << second[m] <<  " ";
	}
	
}