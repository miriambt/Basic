/* Maximum of four integer numbers 
Write a function that returns the maximum of four given integer numbers a, b, c and d. */

#include <iostream>
#include <cmath>
using namespace std;

int max4 (int a, int b, int c, int d) {
    int m = a;
	if (b > m) m = b;
	if (c > m) m = c;
	if (d > m) m = d; 
	return m;
}

int main () {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << max4 (a, b, c, d) << endl;
}