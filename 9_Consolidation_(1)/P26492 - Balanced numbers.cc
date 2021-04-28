/* Uncle Ernie the Magician
In this exercise, we say that a natural number is balanced if the sum of the digits in even positions is equal to the sum of the digits in odd positions. For instance, 1463 and 48015 are balanced numbers.

Write a function that tells if a natural number n is balanced or not.
*/

#include <iostream>
using namespace std;

bool is_balanced(int n) {
	int i = 0;
	int s_odd = 0;
	int s_even = 0;
	
	while (n > 0) {
		if (i % 2 == 0) s_odd += n % 10;
		if (i % 2 != 0) s_even += n % 10;
		++i;
		n /= 10;
	}
	return s_even == s_odd;
}

int main () {
	int n;
	cin >> n;
	cout << is_balanced(n) << endl;
}

/* Example:
Input:
1463
48015
277242355
471003930

Output:
1
1
0
0
*/