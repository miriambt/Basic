/* Perfect primes
Given a natural number n, let s(n) be the sum of the digits of n. In this exercise, we say that n is a perfect prime if the infinite sequence n, s(n), s(s(n)), …only 
contains prime numbers. For instance, 977 is a perfect prime, because 977, 9 + 7 + 7 = 23, 2 + 3 = 5, 5, …, are all prime numbers.

Write a recursive function that tells if a natural number n is a perfect prime or not. We have n ≥ 0.
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

/* Input/output:
is_perfect_prime(977) → true
is_perfect_prime(978) → false
is_perfect_prime(0) → false
is_perfect_prime(11) → true
*/