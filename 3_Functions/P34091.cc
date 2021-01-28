/* Perfect numbers 
Write a function that tells if a natural n is perfect.
A natural number is called perfect if it is equal to the sum of all its divisors except itself. For instance, 28 is perfect, because 28=1+2+4+7+14. */

#include <iostream>
#include <cmath>
using namespace std;

bool is_perfect (int n) {
	int s = 1;
	for (int i = 2; i*i <= n; ++i) {
		if (n % i == 0) s = s + i + n/i;
	}
	return s == n and n != 0 and n!= 1;
}

int main () {
	int n;
	cin >> n;

	if (is_perfect (n)) cout << "true" << endl;
	else cout << "false" << endl;
}

/* Example
is_perfect(28) → true 
is_perfect(1) → false 
is_perfect(100) → false 
is_perfect(0) → false 
*/