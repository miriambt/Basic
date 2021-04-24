/* Multiples of three
WA well-kown mathematical property states that a natural number is a multiple of three if and only if the sum of its digits is also a multiple of three. 
For instance, the sum of the digits of 8472 is 8 + 4 + 7 + 2 = 21, which is a multiple of three. Therefore, 8472 is also a multiple of three.

Implement a recursive function that tells if a strictly positive natural number n is a multiple of three or not.
     bool is_multiple_3(int n);

*/

#include <iostream>
using namespace std;

int suma_digits(int x) {
	if (x < 10) return x;
	else return x % 10 + suma_digits(x/10);
}

bool is_multiple_3(int x) {
	if (suma_digits(x) % 3 == 0) return true;
	else return false;
}

int main () {
	int x;
	cin >> x;
	cout << (is_multiple_3(x) ? "true":"false") << endl;
}

/* Input/output:
is_multiple_3(8472) → true
is_multiple_3(8473) → false
is_multiple_3(4) → false
*/