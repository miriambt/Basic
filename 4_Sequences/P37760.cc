/* Trigonometry 
Reads a sequence of angles in degrees, and prints their sine and their cosine.

Input: consists of a sequence of real numbers that represent angles in degrees.

Output: for each given angle, print a line with its sine and its cosine. Print all the numbers with six digits after the decimal point.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(6);
    double n;
	
	while (cin >> n) {
		double a = n * 2 * M_PI / 360;
		cout << sin (a) << " " << cos (a) << endl;
	}
}

/* Example
Input: 90
Output: 1.000000 0.000000
*/