/* Reads a number n, and prints all numbers between 0 and n.

Input: natural number n.

Output: print in order all natural numbers between 0 and n. */

#include <iostream>
using namespace std;

int main () {

	int n;                  
	cin >> n;

    int c = 0;
	while (c <= n) {
		cout << c << endl;
		c = c + 1;
	}
}