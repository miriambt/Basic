/* Reduction of digits
Write a function that, given a natural number x, returns the reduction of its digits.

In this exercise, we say that reducing the digits of a number means computing the sum of its digits. If the sum has just one digit, this is already the result. 
Otherwise, we apply the same process again to the sum, until we get a single digit. Solve this problem using a recursive function to return the sum of the digits of a 
natural number x.
*/

#include <iostream>
using namespace std;

int suma_digits(int x) {
	if (x < 10) return x;
	else return x % 10 + suma_digits(x/10);
}

int reduction_of_digits(int x) {
	if (suma_digits (x) < 10) return suma_digits(x);
	else return reduction_of_digits(suma_digits(x));
}

int main () {
	int x;
	cin >> x;
	cout << reduction_of_digits(x) << endl;
}

/* Input/output:
reduction_of_digits(33) → 6
reduction_of_digits(5699) → 2
reduction_of_digits(0) → 0
*/