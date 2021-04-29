/* Concatenació composta
Donada una seqüència de nombres naturals x1, x2 …, sigui ci la concatenació de xi i xi+1. Trobeu la mínima i tal que ci és un nombre compost (no primer).

Entrada

L’entrada consisteix en una seqüència de dos o més naturals estrictament positius. Cada ci té, com a màxim, 8 dígits.

Sortida

Per a cada cas, escriviu el primer ci que és un nombre compost. Si no existeix, escriviu ‘no’.

Observació

No podeu usar vectors o similars.
*/

#include <iostream>
#include <cmath>
using namespace std;


int nombre_digits(int b) {
	if (b < 10) return 1;
	else return 1 + nombre_digits(b/10);
}

bool es_primer(int c) {
	int es_primer = true;
	for (int i = 2; i*i <= c and es_primer; ++i) {
		if (c % i == 0) {
			es_primer = false;
		}
	} return es_primer;
}

int main () {
	int a, b, c;
	cin >> a;
	bool trobat = false;
	while (cin >> b) {
		if (not trobat) {
			c = a * pow(10, nombre_digits(b)) + b;
			if (not es_primer(c)) trobat = true;
			a = b;
		} 
	}
	if (not es_primer(c)) cout << c << endl;
	else cout << "no" << endl;
}


/* Example:
Input: 7 1 29 25
Output: 129

Input: 3 1 7 9 7
Output: no
*/