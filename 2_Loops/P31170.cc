/* Multiplication table

Reads a number n and prints the “multiplication table” of n.

Input: consists of a natural number n between 1 and 9.

Output: print the “multiplication table” of n.

*/

#include <iostream>
using namespace std;
int main () {
    
    int n;
    cin >> n;

    int c = 1;
    while (c <= 10) {
    	int p = n * c;
    	cout << n << "*" << c << " = " << p << endl;
    	c++;
    }
}

/* Example
Input: 2
Output:
2*1 = 2
2*2 = 4
2*3 = 6
2*4 = 8
2*5 = 10
2*6 = 12
2*7 = 14
2*8 = 16
2*9 = 18
2*10 = 20
*/