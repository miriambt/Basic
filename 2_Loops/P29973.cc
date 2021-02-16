/* Triangle
Given a number n, prints a “triangle of size n”.

Input: consists of a natural number n.

Output: print n lines, in such a way that the i-th line contains i asterisks.
*/

#include <iostream>
using namespace std;

int main () {
    int a;
    cin >> a;

    int b = 1;
    while (b <= a) {
    	
    	int c = 1;
    	while (c <= b) {
            cout << "*";
            ++c;
        }

    cout << endl;
    ++b;
    }   
}

/* Example
Input: 4
Output: 
*
**
***
****
*/
