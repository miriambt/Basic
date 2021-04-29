/* Parells consecutius
Feu un programa que, donada una seqüència de naturals x1 … xn acabada en -1, calculi el nombre de parells consecutius (xi, xi+1) de la seqüència tals que xi + xi+1 < xi−1 + xi.

Entrada

L’entrada consisteix en el nombre de casos a tractar n, seguit de n seqüències de naturals acabades en -1.

Sortida

Per a cada cas, escriviu quants parells consecutius de la seqüència compleixen la propietat demanada.

Observació

No podeu usar vectors o similars.
*/

#include <iostream>
using namespace std;

int main () {
	int n;
	cin >> n;
	while (n > 0) {
		int compt = 0;
		int a;
		cin >> a;
		if (a == -1) cout << compt << endl;
		else {
			int b;
			cin >> b;
			if (b == -1) cout << compt << endl;
			else {
				int c;
				while (cin >> c and c != -1) {
					int sum1 = a + b;
					int sum2 = b + c;
					if (sum1 > sum2) ++compt;
					a = b;
					b = c;	
				}
			cout << compt << endl;
			}
		}
		--n;
	}
}


/* Example:
Input
5
7 3 4 2 1 -1
-1
0 0 1 1 0 0 2 -1
200 -1
0 3 -1

Output
3
0
2
0
0
*/