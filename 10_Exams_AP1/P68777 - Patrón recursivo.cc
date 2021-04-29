/* Patrón recursivo
Haced un programa que lea una letra i escriba su patrón correspondiente, tal como se puede deducir de los ejemplos.

Entrada

La entrada consiste en una letra minúscula entre ‘a’ y ‘j’.

Salida

Escribid una línea con el patrón correspondiente a la letra.

Observación: no usar strings o similares.

Pista: pensad una solución recursiva.
*/

#include <iostream>
using namespace std;

void sequencia (char c) {
	if (c == 'a') cout << c;
	else {
		for (int i = 'a'; i < c; ++i) { 
			cout << c;
			sequencia(c-1);
		}
		cout << c;
	}
}

int main () {
	char c;
	cin >> c;
	sequencia(c);
	cout << endl;
}


/* Example:
Input: a
Output: a

Input: b
Output: bab

Input: c
Output: cbabcbabc

Input: d
Output: dcbabcbabcdcbabcbabcdcbabcbabcd
*/