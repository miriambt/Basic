/* Gratest common divisor
Computes the greatest common divisor of two numbers.

Input: consists of two strictly positive natural numbers a and b.

Output: print the greatest common divisor of a and b.

Observation: although the solution to this exercise does not need to be very efficient, it should not be too slow.
*/

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    cout << "The gcd of " << x << " and " << y << " is ";
    
    while (y != 0) {
    	int r = x%y;
    	x = y;
    	y = r;
    }
    cout << x << "." << endl;
}

/* Example
Input: 16104 3216
Output: The gcd of 16104 and 3216 is 24.
*/