/* Mesures topogràfiques
Un dron equipat amb equips de mesura vola en línia recta per sobre d’una muntanya nevada. A cada pas i, el dron enregistra l’increment ri en l’alçada de les roques de la muntanya, i també l’increment ni en l’alçada de la neu acumulada sobre les roques. Lògicament, els increments negatius impliquen decrements. Inicialment, tant les roques com la neu tenen alçada 0.

Feu un programa que escrigui el perfil de la muntaya a partir dels parells d’increments (ri, ni) enregistrats pel dron.

Entrada

L’entrada consisteix en una seqüència de parells d’increments (ri, ni).

Sortida

Escriviu el perfil de la muntanya, segons es pot veure als exemples. Si, en algun moment alguna de les alçades esdevé negativa, cal escriure “ERROR” i aturar el programa.

Observació

No podeu usar vectors o similars.
*/

#include <iostream>
using namespace std;

int main () {
	int a, b;
	int p, q = 0;
	while (cin >> a >> b) {
		a += p;
		b += q;
		if (a >= 0 and  b >= 0) {
			for (int i = 0; i < a; ++i) cout << "X";
			for (int j = 0; j < b; ++j) cout << ".";
			cout << endl;
			p = a;
			q = b;
		}
		else {
			cout << "ERROR" << endl;
			break;
		}
	}
}


/* Example:
Input:
4 1
1 1
0 1
-1 2
-2 1
0 0
-1 -1
-1 -3
1 -2
-1 0
3 4
Output:
XXXX.
XXXXX..
XXXXX...
XXXX.....
XX......
XX......
X.....
..
X

XXX....

Input:
3 2
-4 5
20 30
Output:
XXX..
ERROR
*/