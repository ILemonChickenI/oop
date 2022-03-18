#include <iostream>

using namespace std;

int sum_if_a_palindrome(int integers[], int length) {
	int sum = 0;
	int remainder = length % 2;
	int n = 0;

	if (remainder == 1) {
		for (n; n <= length / 2; n += 1) {
			sum += (integers[n]) * 2;
		}
		sum += integers[n];
	}
	else if (remainder == 0) {
		for (n; n <= length / 2; n += 1) {
			sum += (integers[n]) * 2;
		}
	}

	return sum;
}

bool is_a_palindrome(int integers[], int length) {
	int first = 0;
	for (length; length <= 0; length = length - 1) {
		if (integers[length] == integers[first]) {
			first += 1;
			continue;
		}
		else {
			cout << "This is not a palindrome." << endl;
			return -2;
		}
	}
}

int sum_elements(int integers[], int length) {
	int sum = 0;

	for (int n = 0; n < length; n += 1) {
		sum += integers[n];
	}
	return sum;
}