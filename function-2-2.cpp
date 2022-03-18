#include <iostream>

using namespace std;

int binary_to_number(char binary_digits[], int number_of_digits) {
	int dec = 0;
	int power = 0;

	for (number_of_digits; number_of_digits >= 0; number_of_digits = number_of_digits - 1) {
		dec += (binary_digits[number_of_digits] - 48) * (pow(2, power));
		power += 1;
	}

	return dec;
}