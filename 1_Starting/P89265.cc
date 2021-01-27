/* Program that, given two intervals, tells if one is inside the other, and computes the interval corresponding 
to their intersection, or tells that it is empty.

Input: consists of four integer numbers a1, b1, a2, b2 that represent the intervals [a1,b1] and [a2,b2]. 
Assume a1≤ b1 and a2≤ b2.

Output: print ‘=’ if the intervals are equal, ‘1’ if the first is inside the second (but they are not equal), 
‘2’ if the second is inside the first (but they are not equal), or ‘?’ otherwise. 
Also, print “[]” if the intersection is empty, or “[x,y]” if this is their non-empty intersection. */

#include <iostream>
using namespace std;
int main () {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    if (a1 == a2 and b1 == b2) cout << "=";
    else if (a1 >= a2 and b2 >= b1) cout << "1";
    else if (a2 >= a1 and b1 >= b2) cout << "2";
    else cout << "?";

    cout << " , ";

    if ((a1 > b2) or (a2 > b1)) {
        cout << "[]" << endl;
    } else {
    int min, max;

       if (a1 > a2) min = a1;
       else min = a2;

       if (b1 > b2) max = b2;
       else max = b1;

    cout << "[" << min << "," << max << "]" << endl;
    }
}

/* Example
Input: 20 30   10 40
Output: 1 , [20,30]

Input: 10 20   10 20
Output: = , [10,20]
*/
