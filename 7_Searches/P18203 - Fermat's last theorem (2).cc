/* Fermat's last theorem (2)
Input

Input has several lines, each one with four natural numbers a,b,c,d such that a≤ b and c≤ d.

Output

Print a line following the format of the examples, with a natural solution to the equation

  x3 + y3 = z3
that fulfills the restrictions of a line. If there are two or more lines with solution, print the first found. If there are several solutions for the same line, print the one with the smallest x. If there is a tie in x, print the solution with the smallest y. If there are no lines with solution, print “No solution!”.
*/

#include<iostream>
using namespace std;
 
int main() {
    bool found = false;
    int a, b, c, d, x, y, z;
    
    while (cin >> a >> b >> c >> d) {
        if (a <= b and c <= d) {
            if ((a == 0 or c == 0) and not found) {
                found = true;
                z = a + c;
                x = a;
                y = c;
            }
        }
    }
    if (found) cout << x << "^3 + " << y << "^3 = " << z << "^3" << endl;
    else cout << "No solution!" << endl;
}


/* 
Example:
Input: 2 5 4 13

Output: No solution!

Input: 1 1 1 1
0 1 0 1
1 100 1 100

Output: 0^3 + 0^3 = 0^3
*/