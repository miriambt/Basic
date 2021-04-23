/* El rellotge de l'Amalia
Being n a natural number greater than zero. Consider this algorithm:

If n = 1, stop.
If n is an even number, divide it by 2.
If n is an odd number, multiply it by 3 and add 1.
For instance, starting with 6 we obtain 6 → 3 → 10 → 5 → 16 → 8 → 4 → 2 → 1.

The conjecture 3n + 1 says that starting with any natural number n > 0, it always arrives to 1. Although it has not still been proved, using computers we know that is true 
for numbers n ≤ 4035225266123964416.

Your task is to write a program that reads two natural numbers m and p and prints which natural numbers between 1 and m arrive to 1 in p or more steps. It must print also
which is the greatest number contained in their steps.

Your program must implement and use the procedure
     void converge(int n, int& k, int& far);
that, given an integer strictly positive |n|, stores at the parameter |k| the number of steps that needs |n| to arrive to 1, and at the parameter |far| the greatest number seen in the process. 
For instance, |converge(6, k, far);| stores an 8 at |k| and a 16 at |far|. Similarly, |converge(4, k, far);| stores a 2 at |k| and a 4 at |far|, and |converge(1, k, far);| stores a 0 at |k| and an 1 at |far|.

Input

The input is two natural numbers m and p, with 1 ≤ m ≤ 50000.

Output

Your program must print all the numbers between 1 and m that arrive to 1 in p or more steps, one per line. Besides, print also the greatest produced number, following the
format of the instances.
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
Input: 16 0
Output:
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
The greatest reached number is 160.
*/