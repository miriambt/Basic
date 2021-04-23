/* Minimum and maximum
Write a procedure
     void min_max(int a, int b, int& mn, int& mx);
to store in mn the minimum of a and b, and store in mx the maximum of a and b. For instance, if called with a =7 and b = −3, the values after the call must be mn =−3 and mx = 7.

Observation You only need to submit the required procedure; your main program will be ignored.
*/

#include <iostream>
using namespace std;

void min_max (int a, int b, int& mn, int& mx) {
	if (a > b) {
		mn = b;
		mx = a;
	} else {
		mn = a;
		mx = b;
	}
}

int main () {
	int a, b, mn, mx;
	cin >> a >> b;
	
	min_max (a, b, mn, mx);
	cout << mn << " " << mx << endl;
}

/* Example
Input: min_max(7, -3)
Output: -3 7

Input: min_max(23, 23)
Output: 23 23
*/