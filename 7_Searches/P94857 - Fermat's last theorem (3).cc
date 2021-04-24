/* Fermat's last theorem (3)
Input

Input has several cases. Each case consists of four natural numbers a, b, c, d such that a≤ b and c≤ d.

Output

For every case, print in a line the number of solutions to the equation
  x2 + y2 = z2
that fulfill a ≤ x ≤ b and c ≤ y ≤ d.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int a, b, c, d;
    while (cin >> a >> b >> c >> d) {
    
    int nombre_solucions = 0;
        for (int i = a; i <= b; ++i) {
            for (int j = c; j <= d; ++j) {
                double n = sqrt (i*i + j*j);
                int num = int (n);
                if (n == double (num)) ++nombre_solucions;
            }
        }
    cout << nombre_solucions << endl;
    }
}

/* 
Example:
Input: 2 5 4 13
1 1 2 3

Output: 2
0
*/