/* Sum of fractions

Input consists of several triples of natural numbers a, b and k, such that 1 ≤ a≤ b and k ≥ 1.

Output

For each triple, print in a line the result of the sum with four digits after the decimal point.
*/

#include <iostream>
using namespace std;

double suma(double a, double b, double k) {
	double s = 0;
	double p = 0;
	while (a + p*k <= b) {
		s += 1/(a + p*k);
		++p;
	}
	return s;
}

int main () {
	cout.setf(ios::fixed);
    cout.precision(4);
	double a, b, k;
	while (cin >> a >> b >> k) {
		cout << suma(a, b, k) << endl;
	}
}

/* Example:
Input:
1 3 1
5 5 2
5 6 2
5 7 2

Output:
1.8333
0.2000
0.2000
0.3429
*/