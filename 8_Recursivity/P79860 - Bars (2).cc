/* Bars (2)
Write a program that reads a natural number n, and prints 2n − 1 bars of asterisks, following the pattern that can be deduced from the examples.

Input

Input consists of a natural number n > 0.

Output

Print 2n − 1 lines, following the pattern that can be deduced from the examples.
*/

#include <iostream>
using namespace std;

void barres_2(int n) {
	if (n == 1) cout << "*" << endl;
	else {
		for (int i = 0; i < n; ++i) cout << "*";
		cout << endl;
		barres_2(n-1);
		barres_2(n-1);
	}
}

int main () {
	int n;
	cin >> n;
	barres_2(n);
}


/* Example

Input:
1

Output:
*

Input:
2

Output:
**
*
*

Input:
3

Output:
***
**
*
*
**
*
*
*/