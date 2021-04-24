/* Primality
Write a program that reads a sequence of natural numbers and, for each one, tells if it is a prime number or not. Remember that a natural number is prime if and only if it is greater than 1 and it does not have any positive divisor other than 1 and itself.

Input

Input consists of a number n, followed by n natural numbers.

Output

For every given natural number, tell in a line if it is prime or not, following the format of the example.

Hint

For every given n, at most about √n  steps are needed to know if it is prime or not.
*/

#include <iostream>
using namespace std;

int main () {
	int n;
	cin >> n;

	for (int c = 0; c < n; ++c) {
		int p;
		cin >> p;

		bool is_prime = true;
		int i = 2;
		while (is_prime and i*i <= p) {
			if (p%i == 0) is_prime = false;
			++i;
		}

		if (p > 1 and is_prime) cout << p << " is prime" << endl;
		else cout << p << " is not prime" << endl;
	}
}


/* 
Example:
Input: 4
7 10 101 161
Output:
7 is prime
10 is not prime
101 is prime
161 is not prime
*/