/* Polynomial evaluation (2) 

Reads a number x and a polynomial p(z) = c0 z^0 + c1 z^1 + ⋯ + cn z^n, and computes p(x).

Input: consists of a real number x followed by the description of the polynomial p(z): the real coefficients cn, cn−1, …, c0 in this order. (The first sample input/output corresponds to the evaluation of p(z) = 3 + 4z + 5z2 at x = 2.)

Output: prints p(x) with 4 digits after the decimal point.

Hint: the expected solution uses Horner’s rule.
*/

#include <iostream> 
#include <cmath>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);
	
	double x;
	cin >> x;
	double a;
	cin >> a;
	double suma = a;
	
	while (cin >> a) {
		double producte = suma * x;
		suma = producte + a;	
	}
	cout << suma << endl;
}

// sum = 5
// product = 5 * 2
// sum = (5 * 2) + 4
//product = ((5 * 2) + 4) * 2
// sum = (((5 * 2) + 4) * 2) + 3