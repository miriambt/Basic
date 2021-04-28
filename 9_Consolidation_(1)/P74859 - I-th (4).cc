/* I-th (4)
Write a program that, given several test cases, each one composed by an integer number i and a sequence of natural numbers x1, x2, …, xn, prints each xi.

Input

Input has several cases. Each case begins with an integer number i, followed by a sequence x1, …, xn ended with −1.

Output

For each case, if the position i is correct, print the content of i as it is shown in the examples. Otherwise, print “Incorrect position.”.
*/

#include <iostream>
using namespace std;

int main () {
	int i;
	while (cin >> i) {
		int num;
		int n;
		int trobat = false;
		for (int j = 1; cin >> num and num != -1; ++j) {
			if (j == i) {
				n = num;
				trobat = true;
			}
		}
		if (trobat == true) cout << "At the position " << i << " there is a(n) " << n << "." << endl;
		else cout << "Incorrect position." << endl;
	}
}

/* Example:
Input:
5
1 3 5 7 9 0 2 4 6 8 -1
7
16 8 4 2 -1

Output:
At the position 5 there is a(n) 9.
Incorrect position.
*/