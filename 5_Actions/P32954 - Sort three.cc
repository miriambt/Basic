/* Sort threee
Write a procedure
     void sort3(int& a, int& b, int& c);
to sort a, b and c in nondecreasing order. For instance, if called with a =7, b = −3 and c = 1, the values after the call must be a =−3, b = 1 and c = 7.

Observation You only need to submit the required procedure; your main program will be ignored.
*/

#include <iostream>
using namespace std;

void sort3 (int& a, int& b, int& c) {
	if (a > b) {
		if (b > c) {
			int m = a;
			a = c;
			c = m;
		} else if (c < a) {
			int m = a;
			a = b;
			b = c;
			c = m;
		} else {
			int m = a;
			a = b;
			b = m;
		}
	} else {
		if (c < b and c > a) {
			int m = b;
			b = c;
			c = m;
		} else if (c < b and c < a) {
			int m = a;
			int n = b;
			a = c;
			b = m;
			c = n;
		}
		if (b > c and c == a) {
			int m = b;
			b = c;
			c = m;

		}
	}
}


int main () {
	int a, b, c;
	cin >> a >> b >> c;
	sort3 (a, b, c);
	cout << a << " " << b << " " << c << endl;
}

/* Example
Input: sort3(7, -3, 1)
Output: -3 1 7

Input: sort3(2, 1, 0)
Output: 0 1 2
*/