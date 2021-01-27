/* Program that, given two intervals, computes the interval corresponding to their intersection, or tells that it is empty.

Input: consists of four integer numbers a1, b1, a2, b2 that represent the intervals [a1,b1] and [a2,b2]. Assume a1≤ b1 and a2≤ b2.

Output: prints “[]” if their intersection is empty, or “[x,y]” if this is their non-empty intersection.*/

#include <iostream>
using namespace std;
int main () {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    cout << "[";
    if (a1 >= a2 and a1 <= b2) cout << a1 << ",";
    if (a2 > a1 and a2 <= b1) cout << a2 << ",";

    if (b1 <= b2 and b1 >= a2) cout << b1;
    if (b2 < b1 and b2 >= a1) cout << b2;
    cout << "]" << endl;

}


/* Example
Input: 20 30   10 40
Output: [20,30]

Input: 10 20   10 20
Output: [10,20]
*/