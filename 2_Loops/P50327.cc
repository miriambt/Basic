/* Reversed number 
Reads a number and prints it reversed.

Input: consists of a natural number.

Output: print the number reversed, with as many zeros at its left as it has at its right.
*/
 
 #include <iostream>
 using namespace std;
 int main () {
    int n;
    cin >> n;      
    
    while (n >= 10 ) {
        int a = n % 10;
        cout << a;
        n = n / 10;    // a /= b --> a = a/b
    } cout << n << endl;
 }

/* Example
Input: 90800
Output: 00809
*/