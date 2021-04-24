/* Completely parenthesed expression
Write a program that reads a completely parenthesed expression, and prints the result of evaluating it. The three possible operators are sum, substraction and multiplication. 
The operands are natural numbers between 0 and 9 (both included).
*/

#include <iostream>
#include <cassert>
using namespace std;

int expressio() {
	char c;
	cin >> c;
	if (c >= '0' and c <= '9') return c - '0';
	else {
		assert(c == '(');
		
		int r1 = expressio();
		char op;
		cin >> op;
		int r2 = expressio();
		char tanca;
		cin >> tanca;
		assert (tanca == ')');
		
		if (op == '+') return r1 + r2;
		if (op == '-') return r1 - r2;
		if (op == '*') return r1 * r2;
		
		assert (false);
	}
}

int main () {
	cout << expressio () << endl;
}

/* Example

Input: 9
Output: 9

Input: ( 3 + 4 )
Output: 7

Input: ( 8 * ( 4 + 3 ) )
Output: 56

Input: ( ( 2 - 8 ) * ( 4 + 3 ) )
Output: -42
*/