#include <iostream>

using namespace std;

int main() {
	char n[10];
	int m;
	cout << "Enter your binary number: ";
	cin  >> n;
	cout << "Enter the size of your binary number: ";
	cin >> m;
	cout << "The decimal of n is: " << binary_to_number(n, m-1) << endl;
	return 0;
}