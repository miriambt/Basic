/* Read a rational number (1)
Write a procedure
     void read_rational(int& num, int& den);
to read a rational number given in the form “numerator”/“denominator”, and store these two values in num and den, respectively. Additionally, you must remove all common 
factors from num and den. For instance, if the input has 66/12. The values after the call must be num = 11 and den = 2.

Precondition
1 ≤ num ≤ 109 and 1 ≤ den ≤ 109

Observation You only need to submit the required procedure; your main program will be ignored.
*/

#include <iostream>
using namespace std;

void read_rational (int& num, int& den) {
	char c;
	cin >> num >> c >> den;
	int x = num;
	int y = den;
    while (y != 0) {
    	int r = x%y;
    	x = y;
    	y = r;
	}
	num /= x;
	den /= x;
}

int main () {
	int num, den;
	read_rational (num, den);
	cout << num << " " << den << endl;
}