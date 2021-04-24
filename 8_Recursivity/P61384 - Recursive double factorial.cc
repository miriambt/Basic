/* Recursive double factorial
Write a recursive function that returns n!!.

Recall that n!! = n × (n − 2) × (n − 4) × …. For instance, 9!! = 9 × 7 × 5 × 3 × 1 = 945 and 8!! = 8 × 6 × 4 × 2 = 384. By definition, 0!! = 1!! = 1.
*/

#include <iostream>
using namespace std;

int double_factorial(int n) {
	if (n == 0 or n == 1) return 1;
	else return n * (double_factorial(n-2));
}

int main () {
	int n;
	cin >> n;

	cout << double_factorial(n) << endl;
}


/* Input/output:
double_factorial(9) → 945
double_factorial(8) → 384
double_factorial(1) → 1
double_factorial(0) → 1
double_factorial(19) → 654729075
*/