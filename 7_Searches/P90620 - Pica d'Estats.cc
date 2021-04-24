/* Pica d'Estats
Write a program that, given a sequence of integer numbers strictly positive ended with 0, prints if contains any peak greater than 3143 (the height of Pica d’Estats). A peak is an integer of the sequence that has a predecessor and a successor and it is strictly greater than them.

Input

Input is a sequence of integer numbers strictly positive ended with 0. At least, always there are three integer numbers (not counting the 0).

Output

The output must be “YES” if there is any peak greater than 3143, and “NO” otherwise.
*/

#include <iostream>
using namespace std;

const int ALCADA_PICA = 3143;
const int ULTIM_ELEMENT = 0;

bool pic_guapo (int x, int y, int z) {
	return x < y and y > z and y > ALCADA_PICA;
}

int main () {
	bool trobat = false;
	int a, b, c;
	cin >> a >> b >> c;
	while (not trobat and c != ULTIM_ELEMENT) {
		if (pic_guapo (a, b, c)) {
			trobat = true;
		} else {
			a = b;
			b = c;
			cin >> c;
		}
	}
	cout << (trobat ? "YES" : "NO") << endl;
}


/* 
Example:
Input:
21 41 51 32 26 37 37 27 12 31 42 30 0

Output:
NO

Input:
1234 912 1021 921 1012 3150 4653 5678 0

Output:
NO

Input:
1234 912 1021 9012 1012 3150 256 68 29 29 0

Output:
YES
*/