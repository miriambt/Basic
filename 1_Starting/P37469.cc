/* Program that, given a number of seconds n, prints the number of hours, minutes and seconds represented by n.

Input: natural number n.

Output: prints three natural numbers h, m, s such that 3600h+60m+s=n, with m<60 and s<60. */

#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n; 

    // Calculations
    int h = n/3600;
    int m = n%3600/60;
    int s = n%60;

    // Write result
    cout << h << " " << m << " " << s << endl;
}