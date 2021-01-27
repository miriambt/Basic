/*First cubes 

Reads a number n, and prints 03,13,…,(n−1)3,n3.

Input: consists of a natural number n.

Output: print a line with 03,13,…,(n−1)3,n3. Separate the numbers with commas. */ 

#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int c = 0;
    while (c < n) {
    	int p = c*c*c; 
    	cout << p << ",";
    	++c;
    }
    int p = n*n*n;
    cout << p << endl;
}

/* Example
Input: 5
Output: 0,1,8,27,64,125 
*/