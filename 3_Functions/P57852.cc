/* Greatest common divisor of four 
Write a function that computes the greatest common divisor of four natural numbers a, b, c and d using the fast version 
of the Euclidean algorithm. */

#include <iostream>
#include <cmath>
using namespace std;

int gcd2(int x, int y) {
    while (y != 0) {
    	int r = x%y;
    	x = y;
    	y = r;
    }
    return x;
}

int gcd4(int x, int y, int w, int z) {
	return gcd2(gcd2(w, gcd2(x, y)), z);
}

int main() {
	int x, y, w, z;
	cin >> x >> y >> z >> w;

	int d = gcd4 (x, y, w, z);

	cout << d << endl;
}

/* Example
gcd4(66, 12, 1200, 36) → 6 
gcd4(10, 6, 21, 35) → 1
*/