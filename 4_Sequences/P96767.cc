/* Polynomial evauluation (1) 
Reads a number x and a polynomial p(z) = c0 z^0 + c1z^1 + ⋯ + cn z^n, and computes p(x).

Input: consists of a real number x followed by the description of the polynomial p(z): the real coefficients c0, c1, …, cn in this order. (The first sample input/output corresponds to the evaluation of p(z) = 3 + 4z + 5z2 at x = 2.)

Output: prints p(x) with 4 digits after the decimal point.
*/ 

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	cout.setf (ios::fixed);
	cout.precision (4);
	
	double x;                  // value of x
	cin >> x;

	double a;                  // coefficient of x
	cin >> a;
	double s = a;
	double valorx = x;
	
	while (cin >> a) {
		double b = a * valorx;
		s += b;
		valorx = valorx * x; 
	}
	cout << s << endl;
}

/* Example
Input: 
2
3 4 5
Output: 31.0000

Input:
3
0 0 10
Output: 90.0000
*/