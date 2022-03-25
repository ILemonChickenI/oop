#include <iostream>

using namespace std;

void cpyia(int old_array[], int new_array[], int length) {
	int* a = new int[length];
	a = old_array;
	for (int n = 0; n < length; n++) {
		new_array[n] = *(a + n);
	}
}