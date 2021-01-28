/* Palindromic numbers 
Write a function that tells whether the natural number n is a palindromic number or not. */

#include <iostream>
#include <cmath> 
using namespace std;

int reversersed_numbers (int n) { 	
	int b = 0;
	while (n > 0) {
		int a = n % 10;
		b = b * 10 + a;
		n = n / 10;
	}
	return b;
}

bool is_palindromic (int n) {
	return (reversersed_numbers (n) == n);
}

int main () {
	int n;
	cin >> n;
	
	if (is_palindromic (n)) cout << "true" << endl;
	else cout << "false" << endl;
}

/* Example
is_palindromic(12321) → true 
is_palindromic(0) → true 
is_palindromic(4004) → true 
is_palindromic(12) → false 
is_palindromic(100201) → false 
*/