/* Mixing in base 2
Given a natural number x > 0 with n bits, we denote with xn−1… x0 its representation in base 2. For example, x = 8 in base 2 is 1000, so x3 = 1 and x2 = x1 = x0 = 0.

Write a program to mix the base 2 representations of two given natural numbers x and y with the same number of bits n. That is, print xn−1 yn−1 … x0 y0.

Input

Input consists of several cases, each with two natural numbers with the same number of bits, between 1 and 30.

Output

For every case, print the mixing of the representations in base 2 of the two numbers.
*/

#include <iostream>
#include <cmath>
using namespace std;

void mixing_base_2(int a, int b) {
	if (a != 0) {
		mixing_base_2 (a/2, b/2);
		cout << a%2;
		cout << b%2;
	}
}

int main () {
	int a, b;
	while (cin >> a >> b) {
		mixing_base_2(a, b);
		cout << endl;
	}
}

/* Example:
Input:
8 15
1 1
2 3
1000 600
900000 1000000

Output:
11010101
11
1101
11101011100111000000
1111011110011010100011101001100000000000
*/