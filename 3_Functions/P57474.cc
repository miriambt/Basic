/* Iterative factorial 
Write an iterative function that, given a natural n, returns its factorial n!. */

#include <iostream>
#include <cmath>
using namespace std;

int factorial (int n) {
	int f = 1;
	int i = 1;
	
	while (i <= n) { 
        f = f * i;
        ++i;
	}
	return f; 
}

int main () {
	int a;
	cin >> a;
	cout << factorial (a) << endl;
}