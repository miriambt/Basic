/* Reads two numbers a and b, and prints all numbers between a and b.

Input: consists of two natural numbers a and b.

Output: print a line with a,a+1,…,b−1,b. Separate the numbers with commas. */

#include <iostream>
using namespace std;

int main () {
    int a, b;
    cin >> a >> b;

    if (a <= b) {
        while (a < b) {
    	    cout << a << ",";
    	    ++a;
        } 
    cout << b << endl;
    } else cout << endl;
}