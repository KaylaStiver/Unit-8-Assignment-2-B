// Kayla Stiver
// CIS 1202 800
// April 28th 2022

#include <iostream>

using namespace std;

template <typename H>

H half(H num) {
	return (num / 2);
}

int main() {

	int a = 3;
	float b = 7.5f;
	double c = 6.2;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	return 0;
}