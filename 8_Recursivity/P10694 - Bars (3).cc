/* Bars (3)
Write a program that reads a natural number n, and prints 2n − 1 bars of asterisks, following the pattern that can be deduced from the examples.

Input

Input consists of a natural number n > 0.

Output

Print 2n − 1 lines, following the pattern that can be deduced from the examples.
*/

#include <iostream>
using namespace std;

void barres_3(int n) {
	if (n == 1) cout << "*" << endl;
	else {
		barres_3(n-1);
		barres_3(n-1);
		for (int i = 0; i < n; ++i) cout << "*";
		cout << endl;
	}
}

int main () {
	int n;
	cin >> n;
	barres_3(n);
}


/* Example

Input:
1

Output:
*

Input:
2

Output:
*
*
**

Input:
3

Output:
*
*
**
*
*
**
***
*/