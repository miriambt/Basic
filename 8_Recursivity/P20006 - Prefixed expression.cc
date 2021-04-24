/* Prefixed expression
Write a program that reads a prefixed expression, and prints the result of evaluating it. The three possible operators are sum, 
substraction and multiplication. The operands are natural numbers between 0 and 9 (both included).

The expression 8 * (4 + 3) would be written: * 8 + 4 3
The expression (2 − 8) * (4 + 3) would be written: * - 2 8 + 4 3
*/

#include <iostream>
#include <cassert>
using namespace std;
 
int avalua() {
	char c;
	cin >> c;
	if (c >= '0' and c <= '9') return c - '0';
	if (c == '*') return avalua() * avalua();
	if (c == '+') return avalua() + avalua();
	if (c == '-') return avalua() - avalua();
	assert (false);
} 

int main () {
	cout << avalua() << endl;
}



/* Example

Input: 9
Output: 9

Input: + 4 3
Output: 7

Input: * 8 + 4 3
Output: 56

Input: * - 2 8 + 4 3
Output: -42
*/