/* Recursive greatest common divisor
Write a recursive function that computes the greatest common divisor of two natural numbers a and b using the fast version of the Euclidean algorithm.

Precondition: neither a nor b are negative, and at least one of them is strictly greater than zero.
*/

#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a%b);
}

int main () {
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
}


/* Input/output:
gcd(66, 12) → 6
gcd(100, 21) → 1
gcd(0, 10) → 10
*/