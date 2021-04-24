/* Increasing numbers
In this exercise, we say that a natural number is increasing if every digit is less than or equal to the digit which is on its right (if any).

Write a recursive function that tells if a natural number n is increasing or not.
*/

#include <iostream>
using namespace std;

bool is_increasing(int n) {
	if (n < 10) return true;
	else if (n > 0 and n%10 >= (n/10)%10) return is_increasing(n/10);
	return false;
}

int main () {
	int n;
	cin >> n;
	cout << (is_increasing(n) ? "true" : "false") << endl;
}

/* Input/output:
is_increasing(123378) → true
is_increasing(125433) → false
is_increasing(7) → true
*/