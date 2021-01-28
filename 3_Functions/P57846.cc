/* Maximum of two integer numbers 
Write a function that returns the maximum of two given integer numbers a and b. */

#include <iostream>
#include <cmath>
using namespace std; 

int max2 (int a, int b) {
	if (a > b) return a;
	return b;               // else
}

int main () {
	int a, b;
	cin >> a >> b;
	cout << max2(a, b) << endl;
}