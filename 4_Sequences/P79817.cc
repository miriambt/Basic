/* Powers 
Write a program to compute powers.

Input: consists of several pairs of integer numbers a and b. Assume b ≥ 0.

Output: for every pair a,b, print ab. Supose, as usual, that 00 = 1.
*/

#include <iostream>
using namespace std;
int main () {
	int a;
	int b;
	
	while (cin >> a) {
		cin >> b;
		int power = 1;
			while (b >= 1) {
				power = power * a; 
				--b;
			}
	cout << power << endl;
	}
}

/* Example
Input: 
3 2
2 8
5 0
0 3
0 0
-2 3

Output: 
9
256
1
0
1
-8
*/