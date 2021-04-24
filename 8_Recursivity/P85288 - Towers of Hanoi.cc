/* Towers of Hanoi
The Towers of Hanoi is a game that consists of three rods and n disks of different sizes that can slide onto any rod. The game starts with the disks stacked in order of 
size on the left rod, the biggest disk at the bottom. The aim of the game is to move all the disks from the left rod (A) to the right rod (C), using the middle rod (B) as 
auxiliary. All the moves have to follow these rules:

	- In each step, only one disk can be moved.
	- Each move consists of taking the upper disk from one of the rods and sliding it onto another rod, over the other disks that may already be present on that rod.
	- No disk can be placed over a smaller disk.

Write a program that solves the game of the Towers of Hanoi, using the minimal number of movements.

Input

Input consists of a single natural number n between 1 and 18.

Output

Print the shortest sequence of movements for the given n. 
*/

#include <iostream>
using namespace std;

void hanoi(int n, char origen, char desti, char auxiliar) {
	if (n == 1) cout << origen << " => " << desti << endl;    // Mou n discos de la torre origen a la torre destí, passant per l'auxiliar.
	else {
		hanoi(n-1, origen, auxiliar, desti);
		cout << origen << " => " << desti << endl;
		hanoi(n-1, auxiliar, desti, origen);
	}
}

int main () {
	int n;
	cin >> n;
	hanoi(n, 'A', 'C', 'B');
}


/* Example

Input:
1

Output:
A => C

Input:
2

Output:
A => B
A => C
B => C

Input:
3

Output:
A => C
A => B
C => B
A => C
B => A
B => C
A => C
*/