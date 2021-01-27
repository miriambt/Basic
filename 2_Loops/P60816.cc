/* Reversed number in hexadecimal
Reads a number and prints its hexadecimal representation reversed. Follow the convention to use the letters from ‘A’ to ‘F’ 
to represent the values from 10 to 15.

Input: consists of a natural number.

Output: print, reversed, the hexadecimal representation of the number, with as many zeros at its left as required.
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n; 

    if (n >= 10 and n <= 15) {
            if (n == 10 ) cout << "A" << endl;
            else if (n == 11) cout << "B" << endl;
            else if (n == 12) cout << "C" << endl;
            else if (n == 13) cout << "D" << endl;
            else if (n == 14) cout << "E" << endl;
            else if (n == 15) cout << "F" << endl;
    } else {

    int hex;
    while (n >= 16) { 
        hex = n % 16;
        n = n / 16;
        
        if (hex >= 10 and hex <= 15) {
            if (hex == 10 ) cout << "A";
            else if (hex == 11) cout << "B";
            else if (hex == 12) cout << "C";
            else if (hex == 13) cout << "D";
            else if (hex == 14) cout << "E";
            else if (hex == 15) cout << "F";      
        } else cout << hex; 
    }
        
    cout << n << endl;
    }
}

/* Example
Input: 1000000000
Output: 00ACA9B3
*/