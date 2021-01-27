/* Topt to bottom 

Reads two numbers x and y, and prints all numbers between x and y (or between y and x), in decreasing order.

Input: two integer numbers x and y.

Output: print all integer numbers between x and y (or between y and x), in decreasing order. */

#include <iostream>
using namespace std;

int main () {
    
    int x, y;
    cin >> x >> y;
    int max, min;

    if (x > y) {
    	max = x;
    	min = y;
    } else { 
    	max = y;
    	min = x;
    }

    while (max >= min) {
    	cout << max << endl;
    	max = max -1;
    }
}
