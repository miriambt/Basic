/* Approximation of e
Input

Input consists of several natural numbers n between 0 and 20.

Output

For every given n, print with 10 digits after the decimal point the approximation of e that we get by adding the n first terms of the series above.

Observation

Because of overflow reasons, do all the computations for this exercise using real numbers.*/

#include <iostream>
using namespace std;


double factorial(int x) {
	if (x == 0) return 1;
	else return x * factorial(x-1);
}

double apprixmation_of_e(int n) {
	double suma = 0;
	for (int i = 0; i < n; ++i) {
		suma += 1 / factorial(i);
	} return suma;
}

int main () {
	cout.setf (ios::fixed);
    cout.precision (10);
	int n;
	while (cin >> n) {
		cout << "With " << n << " term(s) we get " << apprixmation_of_e(n) << "." << endl;
	}
}

/* Example:
Input:
0
1
3
20

Output:
With 0 term(s) we get 0.0000000000.
With 1 term(s) we get 1.0000000000.
With 3 term(s) we get 2.5000000000.
With 20 term(s) we get 2.7182818285.
*/