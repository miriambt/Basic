/* Average
Write a program that reads a sequence of numbers and prints their average.

Input: consists of a non-empty sequence of strictly positive real numbers.

Output: print the average of the numbers with 2 digits after the decimal point.
*/

#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(2);
	
	double n;
	double s = 0;
	int compt = 0;
	
	while (cin >> n) {
		s += n;
		++compt;
	}
	double m = s / compt;
	cout << m << endl;
}

/* Example
Input: 1 4 9
Output: 4.67
*/