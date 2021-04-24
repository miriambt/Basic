/* Fermat's last theorem (1)
Input

Input consists of four natural numbers a, b, c, d such that a≤ b and c≤ d.

Output

Print a line following the format of the examples, with a natural solution to the equation
  x2 + y2 = z2
that fulfills a≤ x≤ b and c≤ y≤ d. If there is more than one solution, print the one with the smallest x. If there is a tie in x, print the solution with the smallest y. 
If there are no solutions, print “No solution!”.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	bool found = false;
	for (int i = a; i <= b and not found; ++i)	{
		for (int j = c; j <= d and not found; ++j) {
			double n = sqrt (i*i + j*j);
			int num = int (n);
			if (n == double (num)) {
				cout << i << "^2 + " << j << "^2 = " << num << "^2" << endl;
				found = true;
			}
		}
	}
	if (not found) cout << "No solution!" << endl;
}


/* 
Example:
Input: 2 5 4 13

Output: 3^2 + 4^2 = 5^2

Input: 1 1 1 1

Output: No solution!
*/