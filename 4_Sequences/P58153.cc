/* Harmonic sequences 
Write a program that reads pairs of numbers n and m with n ≥ m, and for each pair prints Hn − Hm.

Input: consists of several pairs of natural numbers n and m such that n ≥ m.

Output: for every pair, print Hn − Hm with 10 digits after the decimal point.
*/

#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);	
	cout.precision(10);
    int n, m;
    while (cin >> n >> m) {
    	double harmonic = 0;
    	if (n > m) {
    		for (double i = m + 1; i <= n; ++i) {
    			harmonic += 1 / i;
    		}
    	}
    cout << harmonic << endl;
    }
}

/* If m < n then Hn - Hm:
        [ 1 + 1/2 +иии+ 1/m + 1/(m+1) +иии+ 1/n ] -
        [ 1 + 1/2 +иии+ 1/m ]

        Therefore, the result is 
        [ 1/(m+1) +иии+ 1/n ] */

/* Example
Input: 
3 2
7 0
4 4
100 99

Output: 
0.3333333333
2.5928571429
0.0000000000
0.0100000000
*/