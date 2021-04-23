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
#include <cmath>
using namespace std;

void llegeix_hora (int& h, int& m, int& s) {

	// Passem la h en binari a hora en decimal
	int exp = 0;
	int residu = 0;
	int hora = 0;
	while (h > 0) {
		residu = h % 10;    
		if (residu == 1) hora += pow (2, exp);
		h /= 10;
		++exp;
	}
	h = hora;

	// Passem els m en binari a minut en decimal
	exp = 0;
	int minuts = 0;
	residu = 0;
	while (m > 0) {
		residu = m % 10;    
		if (residu == 1) minuts += pow (2, exp);
		m /= 10;
		++exp;
	}
	m = minuts;

	// Passem els segons a decimal
	exp = 0;
	int segons = 0;
	residu = 0;
	while (s > 0) {
		residu = s % 10;    
		if (residu == 1) segons += pow (2, exp);
		s /= 10;
		++exp;
	}
	s = segons;
}

void escriu_hora (int h, int m, int s) {
		cout << h << ":" << m << ":" << s << endl;
}

int main () {
	int i;
	int n; 
	cin >> n;

	while (n > 0) {
		char c;
		cin >> c;

		// Passem les hores a binari
		int h = 0;
		while (cin >> c and c!= '|') {
			if (c == '*') i = 1;
			else if (c == '$') i = 0;
			h = (h*10) + i;
		}

		// Passem els minuts a binari
		int m = 0;
		while (cin >> c and c!= '|') {
			if (c == '*') i = 1;
			else if (c == '$') i = 0;
			m = (m*10) + i;	
		}

    	// Passem els segons a binari
		int s = 0;
		while (cin >> c and c!= '|') {
			if (c == '*') i = 1;
			else if (c == '$') i = 0;
			s = (s*10) + i;	
		}
		llegeix_hora (h, m, s);
		escriu_hora (h, m, s);
	--n; 
	}
}

/* Example
Input:
3
|**$$|**|*$*$$$|
|$|$|$|
|*$***|***$**|***$**|
Output:
12:3:40
0:0:0
23:59:59
*/