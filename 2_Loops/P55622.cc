/* Number of digits (1)
Reads a number and prints its number of digits.

Input: consists of a natural number n.

Output: print the number of digits of n.
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    cout << "The number of digits of " << n << " is ";

    int b = 1;
    while (n >= 10) {
     	n = n / 10;
    	++b;
    }
    cout << b << "." << endl;
}

/* Example
Input: 12345
Output: The number of digits of 12345 is 5.
*/