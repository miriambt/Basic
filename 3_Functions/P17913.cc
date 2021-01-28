/* Iterative double factorial 
Write an iterative function that returns the double factorial n!! for a natural n.
Recall that n!! = n × (n − 2) × (n − 4) × …. For instance, 9!! = 9 × 7 × 5 × 3 × 1 = 945 and 8!! = 8 × 6 × 4 × 2 = 384. 
By definition, 0!! = 1!! = 1.
*/

#include <iostream>
#include <cmath>
using namespace std;

int double_factorial (int x) {
	int f = x;
	int i = x;
	if (f == 0) return 1;
	else {
	    while (i >= 3) {
		    i = i - 2;
		    f = f * i;
	    }
    return f;
    }
}

int main () {
	int n;
	cin >> n;
	cout << double_factorial (n) << endl;
}
