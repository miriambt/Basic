/* Next prime number
Write a program that reads a sequence of prime numbers and, for each one, prints the next prime number.

Input

Input is all natural numbers, and consists of a sequence of prime numbers ended with a non-prime number.

Output

For every given prime number, print in a line the next prime number.
*/

#include <iostream>
using namespace std;

bool is_prime (int n) {
	int prime = true;
	int i = 2;
	while (prime and i*i <= n) {
		if (n%i == 0) prime = false;
		++i;
	}
	return prime;
}

int next_prime (int n) {
	while (not is_prime (n)) {
		++n;
	}
	return n;
}


int main () {
	int n;
	while (cin >> n and is_prime (n) and n > 1) cout << next_prime (n+1) << endl;
}


/* 
Example:
Input:
7
2
107
12

Output:
11
3
109
*/