/* Program that tells if a year is or is not a leap year. A leap year has 366 days. After the Gregorian reform, 
the leap years are those multiple of four that do not end with two zeros, and also the years ending with two zeros
such that, after removing these two zeros, are divisible by four. Thus, 1800 and 1900, although being multiples
of four, were not leap years; by contrast, 2000 was a leap year.

Input: natural number between 1800 and 9999.

Output: if the year is a leap year, print “YES”; otherwise print “NO”. */

#include <iostream>
using namespace std;

int main () {
    int y;
    cin >> y;
    	
    if (y%100 != 0) {                         // Is the year multiple of 100?        
        if (y%4 == 0) cout << "YES" << endl;  // Is the year multiple of 4?
        else cout << "NO" << endl;
    }
        
    else if (y/100%4 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
} 