/* Swap
Write a procedure

     void swap2(int& a, int& b);
that swaps the value of its parameters.

Observation You only need to submit the required procedure; your main program will be ignored.
*/

#include <iostream> 
#include <cmath>
using namespace std;

void swap2 (int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}


int main () {
	int a, b;
	cin >> a >> b;

	swap2 (a, b);
	cout << a << " " << b << endl; 
}

/* Example
Input: swap2(2, 5)
Output: 5 2

Input: swap2(0, -3)
Output: -3 0
*/