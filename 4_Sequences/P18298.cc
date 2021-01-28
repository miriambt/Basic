/* Roman numbers 
Reads several numbers and prints their equivalent Roman number. */

#include <iostream>
using namespace std;

void romanitzar(int n, char a, char b, char c) {
	if (n == 9) cout << a << c;
	else if (n == 8) cout b << a << a << a;
	else if (n == 7) cout << b << a << a;
    else if (n == 6) cout << b << a;
    else if (n == 5) cout << b;
    else if (n == 4) cout << a << b;
    else if (n == 3) cout << a << a << a;
    else if (n == 2) cout << a << a;
    else if (n == 1) cout << a;
}
int main() {   
    int n;
    while (cin >> n) {
        cout << n << " = ";

        romanitzar(n/1000,'M','?','?'); n = n%1000;
        romanitzar(n/100,'C','D','M'); n = n%100;
        romanitzar(n/10,'X','L','C'); n = n%10;
        romanitzar(n,'I','V','X');
        
        cout << endl;
    }
}

/* 
Example:
Input: 
1
4
10
40
41
16
2708
999
3005

Output:
1 = I
4 = IV
10 = X
40 = XL
41 = XLI
16 = XVI
2708 = MMDCCVIII
999 = CMXCIX
3005 = MMMV
*/