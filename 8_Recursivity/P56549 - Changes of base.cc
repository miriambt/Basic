/* Changes of base
Use recursion in order to write a program that prints every given number in binary, octal and hexadecimal notation.

Input

Input consists of several natural numbers.

Output

For every given number, print its binary, octal and hexadecimal notation. Follow the format of the example.
*/

#include <iostream>
using namespace std;

int sum(int n) {
	if (n >= 10) return n%10 + sum(n/10);
	else return n;
}

bool is_prime(int n) {
	if (n <= 1) return false;
	for (int i = 2; i*i <= n; ++i) {
		if (n % i == 0) return false;
	}
	return true;
}

bool is_perfect_prime(int n) {
	if (n < 10) {
		return is_prime(n);
	} else {
		if (not is_prime(n)) return false;	
		return is_perfect_prime(sum(n));
	}
}

int main () {
	int n;
	cin >> n;
	cout << (is_perfect_prime(n) ? "true" : "false") << endl;
}

/* Example

Input:
9
12
1024
0
1000000000

Output:
9 = 1001, 11, 9
12 = 1100, 14, C
1024 = 10000000000, 2000, 400
0 = 0, 0, 0
1000000000 = 111011100110101100101000000000, 7346545000, 3B9ACA00
*/