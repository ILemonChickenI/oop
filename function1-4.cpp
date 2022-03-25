#include <iostream>

using namespace std;

void cpyda(double* old_array, double* new_array, int length) {

	double* a = new double[length];
	a = old_array;
	for (int n = 0; n < length; n++) {
		new_array[n] = *(a + n);
	}
}