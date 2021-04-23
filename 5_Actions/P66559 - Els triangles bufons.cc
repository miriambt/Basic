/* El rellotge de l'Amalia
En Pablo i l’Amalia van anar en avió a una boda a Sevilla. Un cop a l’aeroport, l’Amalia es va adonar que s’havia deixat el rellotge a casa, així que en Pablo va entrar en una botiga d’electrònica i li va comprar un 
rellotge binari. Com que sap que l’Amalia és molt friqui, va pensar que seria una bona idea. I, en efecte, l’Amalia està molt satisfeta del regal del seu espòs, i llueix el rellotge sempre que pot. Ara bé, llegir l’hora 
en binari és una mica complicat! Ajudeu l’Amalia fent un programa que llegeixi hores en notació binària i les escrigui en notació decimal. Les hores venen donades en el format “@|hores|minuts|segons|@”, 
on cada camp ve donat en binari, usant asteriscos per marcar els uns i dòl·lars per marcar els zeros.

El vostre programa ha de definir i utilitzar l’acció
     void llegeix_hora(int& h, int& m, int& s);
que llegeix una hora en binari en el format “@|hores|minuts|segons|@” i deixa en els paràmetres de sortida h, m i s els valors corresponents.

El vostre programa també ha de definir i utilitzar l’acció
     void escriu_hora(int h, int m, int s);
que escriu en una línia la hora donada en el format “@h:m:s@”.

Entrada
L’entrada comença amb un natural n. A continuació segueixen n hores en binari, segons el format descrit. Les hores estan entre 0 i 23, i els minuts i els segons estan entre 0 i 59.

Sortida
Cal escriure cada hora de l’entrada en decimal segons el format descrit.
*/

#include <iostream>
using namespace std;

void espais (int t) {
	while (t > 0) {
		cout << " ";
		--t;
	}
}

void primera_fila (int t) {
	cout << "/\\";
}

void segona_fila (int i) {
	while (i > 0) {
		cout << "/__\\";
		--i;
	}
}

void tercera_fila (int i) {
	while (i > 0) {
		cout << "/\\";
		--i;
		if (i > 0) {
			cout << "  ";
			--i;
		}
	}
}

void escriu_triangle (int t) {
	espais (t*2-1);
	primera_fila (t);
	cout << endl;
	
	for (int i = 2; i <= t*2; ++i) {
		espais (t*2-i);
		if (i%2 == 0) {
			segona_fila (i/2);
			cout << endl;
		} else {
			tercera_fila (i);
			cout << endl;
		}

	}
}

int main () {
	int t;

	while (cin >> t and t > 0) {
		escriu_triangle (t);
		cout << endl;
	}
}

/* Example
Input:
4 1 -5
Output:
       /\
      /__\
     /\  /\
    /__\/__\
   /\  /\  /\
  /__\/__\/__\
 /\  /\  /\  /\
/__\/__\/__\/__\

 /\
/__\

*/