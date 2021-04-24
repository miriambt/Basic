/* Recursive factorial
Write a function that returns n!.

Solve this problem recursively.
*/

#include <iostream>
using namespace std;

// Prec: n >= 0
int factorial(int n) {
	if (n == 0) return 1;
	else return n * (factorial(n-1));
}

int main () {

	int n; 
	cin >> n;

	cout << factorial(n) << endl;
}


/* Input/output:
factorial(0) → 1
factorial(1) → 1
factorial(2) → 2
factorial(3) → 6
factorial(4) → 24
*/