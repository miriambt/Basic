/* Program that reads two natural numbers a and b, with b > 0, and prints the integer division d and the remainder r of a divided by b.
By definition, d i r must be the only integer numbers such that 0 ≤ r < b and d · b + r = a.

Input: a and b, with b > 0.

Output: prints a line with the integer division and the remainder of a divided by b, separated by a space. */

#include <iostream>
using namespace std;

int main () {
    int D, d; 
    cin >> D >> d; 
        
    int Q = D / d;
    int r = D % d; 

    cout << Q << " " << r << endl; 
}