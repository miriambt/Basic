/* Funció per als nombres xupiguais
Sigui n un nombre natural, sigui b una base múltiple de dos, i sigui dm−1 dm−2 … d1 d0 la representació de n en base b. En aquest problema, direm que n és xupiguai en base b si tots els seus dígits en posicions parelles (d0, d2, …) són més grans o iguals que b/2, i tots els seus dígits en posicions senars són més petits que b/2.

Per exemple, 50 és xupiguai en base 4, perquè s’expressa com 302. En canvi, 49 no és xupiguai en base 4, perquè s’expressa com 301. Però 49 sí que és xupiguai en base 10. Com exemple final, 59 no és xupiguai en base 10.

Escriviu una funció recursiva
     bool es_xupiguai(int n, int b);
que digui si n és o no xupiguai en base b.

Precondició

Es compleix n ≥ 1, 2 ≤ b ≤ 1000, i que b és parell.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.

Observació

No podeu usar cap procediment auxiliar. Qualsevol solució que no sigui recursiva tindrà un zero de qualificació.
*/

from jutge import read

#include <iostream>
using namespace std;

bool es_xupiguai(int n, int b) {
    if (n == 0) return true;
    while (n%b >= b/2 and (n/b)%b < b/2 and es_xupiguai(n/(b*b), b)) return true;
    return false;
}

int main () {
    int n, b;
    cin >> n >> b;
    cout << es_xupiguai(n, b) << endl;
}

/* Input/output
es_xupiguai(50, 4) → 1
es_xupiguai(49, 4) → 0
es_xupiguai(49, 10) → 1
es_xupiguai(59, 10) → 0
*/