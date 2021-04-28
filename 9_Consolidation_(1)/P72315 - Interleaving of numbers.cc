/* P0012. Interleaving of numbers
We define the interleaving of two natural numbers with d digits x=xdxd−1… x2x1 and y=ydyd−1… y2y1 as xdydxd−1yd−1… x2y2x1y1. For example, the interleaving of 4123 and 5679 is 45162739. Write a program that reads pairs of natural numbers and prints their interleavings.

For the sake of practice, define and use a function
     int interleaving(int x, int y);
to compute the interleaving of two natural numbers x and y.

Input

Input consists of several pairs of natural numbers with the same number of digits.

Output

Print the interleaving of every given pair.

Observation

To avoid overflows, no given number will have more than four digits, but your program should not take this fact into account.
*/

#include<iostream>
using namespace std;
 
int intercalacio(int x, int y) {
    int num;
    if (x < 10 and y < 10) num = x*10 + y;
    else num = (x%10)*10 + y%10 + intercalacio(x/10, y/10)*100;
    return num;
}
 
int main() {
    int x, y;
    while (cin >> x >> y) {
        cout << intercalacio(x,y) << endl;
    }
}


/* Example:
Input:
4123 5679
312 435
22 91
8 7
3 0
0 3
0 0

Output:
45162739
341325
2921
87
30
3
0
*/