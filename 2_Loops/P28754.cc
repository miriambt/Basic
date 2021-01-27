/* Reversed number in binary
Reads a number and prints its binary representation reversed.

Input: consists of a natural number.

Output: print, reversed, the binary representation of the number, with as many zeros at its left as required.
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int b;
    while (n >= 2) {
    	b = n % 2;
    	n = n / 2;
    	cout << b;
    }
    cout << n << endl;
}

/* Example
Input: 65547
Output: 11010000000000001
*/