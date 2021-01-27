/* Program that, given two intervals, tells if one is inside the other.

Input: consists of four integer numbers a1, b1, a2, b2 that represent the intervals [a1,b1] and [a2,b2]. Assume a1≤ b1 and a2≤ b2.

Output: prints ‘=’ if the intervals are equal, ‘1’ if the first is inside the second (but they are not equal), ‘
2’ if the second is inside the first (but they are not equal), or ‘?’ otherwise.*/

#include <iostream>
using namespace std;
int main () {
       
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    if (a1 == a2 and b1 == b2) cout << "=" << endl;

    if (a1 > a2) {
    	if (b1 <= b2) cout << "1" << endl;
    	else cout << "?" << endl; 	
    }

    if (a1 < a2) {
    	if (b2 <= b1) cout << "2" << endl;
    	else cout << "?" << endl;
    }
    if (a1 == a2) {
    	if (b1 < b2) cout << "1" << endl;
    	if (b2 < b1) cout << "2" << endl;
    }
}

/* Example
Input: 20 30   10 40
Output: 1

Input: 10 20   10 20
Output: =

Input: 20 30   10 20
Output: ?
*/