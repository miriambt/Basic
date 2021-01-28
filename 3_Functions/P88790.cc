/* Iterative greatest common divisor 
Write an iterative function that computes the greatest common divisor of two natural numbers a and b using the fast version 
of the Euclidean algorithm. */

#include <iostream>
#include <cmath> 
using namespace std;

int gcd (int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main () {
	int a, b;
	cin >> a >> b;
	cout << gcd (a, b) << endl;
}

/* Exmaple
gcd(66, 12) → 6 
gcd(100, 21) → 1 
gcd(0, 10) → 10 
*/
