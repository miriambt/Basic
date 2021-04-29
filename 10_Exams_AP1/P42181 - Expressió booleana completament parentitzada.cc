/* Expressió booleana completament parentitzada
Feu un programa que llegeixi una expressió booleana completament parentitzada, i que escrigui el resultat d’avaluar-la. Els operadors admissibles són 
conjunció i disjunció (binaris) i negació (unari).

Entrada

Els valors booleans es representen per ‘0’ i ‘1’. La conjunció, la disjunció i la negació es representen amb ‘*’, ‘+’ i ‘!’ respectivament.

L’entrada és una expressió completament parentitzada. Això vol dir que sempre apareixen parèntesis al voltant de les expressions amb operadors binaris. 
Per exemple, l’expressió cert ∧ fals vindria donada així: (1*0) l’expressió fals ∨ (cert ∧ fals) vindria donada així: (0+(1*0)) l’expressió 
¬(fals ∨ (cert ∧ fals)) vindria donada així: !(0+(1*0))

Sortida

Cal escriure el resultat d’avaluar l’expressió en una línia.

Pista

Fixeu-vos que una expressió és d’una d’aquestes possibilitats: o bé és directament un dígit zero o u; o bé és l’operador unari de negació, seguit d’una expressió; o bé és un parèntesi obert, seguit d’una expressió, d’un operador binari, 
d’una altra expressió, i d’un parèntesi tancat.
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
Input: (0+(1*0))
Output: 0

Input: !(0+(1*0))
Output: 1

Input: !!!!0
Output: 0

Input: !(!0+!1)
Output: 0
*/