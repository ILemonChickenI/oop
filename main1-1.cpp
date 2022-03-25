#include <iostream>
#include "function1-1.h"

using namespace std;

int main()
{
	string arr[3][2] = { "12","34" ,"56" };
	string copy[3][2];

	cout << "The copied array is: " << arr;

	copy_2d_strings(arr, copy, 3);

	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 2; y++) {
			cout << copy[x][y] << endl;
		}
	}
	return 0;
}