/* Function for three equal consecutive digits
Write a recursive function that, given two natural numbers n and b, returns true if and only if n has three or more equal consecutive digits when expressed in base b.

For example, the number 44344 does not have three equal consecutive digits in base 10. By contrast, 159 in ternary is 12220, so it does have three equal consecutive digits in base 3.

Precondition

It holds 0 ≤ n ≤ 109 and 2 ≤ b ≤ 100.
*/

#include <iostream>
using namespace std;

bool tres_digits_seguits_iguals(int n, int b) {
	while (n > 0) {
		return (n%b == n/b%b and n/b%b == n/(b*b)%b) or (tres_digits_seguits_iguals(n/b,b));
	} return false;
}

int main () {
	int n, b;
	cin >> n >> b;
	cout << tres_digits_seguits_iguals(n, b) << endl;
}
