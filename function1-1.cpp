#include <iostream>

using namespace std;

void copy_2d_strings(std::string first[][2], std::string second[][2], int n) {
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < 2; y++) {
			second[x][y] = first[x][y];
		}
	}
}