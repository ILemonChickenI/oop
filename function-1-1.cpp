#include <iostream>

using namespace std;

void printer(int array[10][10]) {
	int n = 0;
	int m = 0;

	for (n; n < 10; n += 1) {
		for (m; m < 10; m += 1) {
			cout << array[n][m];
		}
	}
}