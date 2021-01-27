/* Square
Given a number n, prints a “square of size n”.

Input: consists of a natural number n ≥ 1.

Output: follow the examples.
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    
    int a = 0;
    while (a < n) {

        int b = 0;
        while (b < n) {
    	b = b + 1;
    	cout << "#";
        }

   cout << endl;
   a = a +1;

   }
}

/* Example
Input: 4
Output: 
####
####
####
####
*/