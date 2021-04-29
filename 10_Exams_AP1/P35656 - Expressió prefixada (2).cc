/* Expressió prefixada (2)
Feu un programa que llegeixi una expressió prefixada, i que escrigui el resultat d’avaluar-la. Els operands són naturals entre 0 i 9 (inclosos). Hi ha tres operadors possibles, identificats amb -, + i m: el canvi de signe (operació unària), la suma (operació binària), i el màxim de tres nombres (operació ternària).

Entrada

L’entrada té una expressió prefixada. Això vol dir que sempre apareix l’operador abans que el seu o els seus operands.

Per exemple, la seqüència es correspon a l’expressió matemàtica:
−8 + max3(4, 5 + 7, 9) = −8 + max3(4, 12, 9) = −8 + 12 = 4 .

Sortida

Cal escriure un enter en una línia: el resultat d’avaluar l’expressió.
*/

#include <iostream>
#include <cassert>
using namespace std;

int max3(int a, int b, int c) {
	if (a >= b and a >= c) return a;
	if (b >= a and b >= c) return b;
	else return c;
}

int avalua () {
	char c;
	cin >> c;
	if (c >= '0' and c <= '9') return c - '0';
	if (c == '-') return - avalua();
	if (c == '+') return avalua() + avalua();
	if (c == 'm') return max3(avalua(), avalua(), avalua());
	assert (false);
}


int main () {
	cout << avalua() << endl;
}


/* Example:
Input: - 8
Output: -8

Input: + 5 7
Output: 12

Input: m 1 2 3
Output: 3

Input: + - 8 m 4 + 5 7 9
Output: 4

Input: - - - + 9 8
Output: -17
*/