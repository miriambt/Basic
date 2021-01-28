/*
Reads a sequence of characters, each one codifying a movement (‘n’ for north, ‘s’ for south, ‘e’ for east, and ‘w’ for west), and that computes the final position of an object initially located at (0, 0). Suppose that the first component corresponds to the east-west direction, that going est means adding 1 to that component, and that going south means adding 1 to the second component.

Input: consists of a sequence of characters ‘n’, ‘s’, ‘e’, or ‘w’.

Output: prints the final position of an object initially located at (0, 0).
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	char direccio;
	int a = 0;
	int b = 0;
	
	while (cin >> direccio) {
		if (direccio == 'n') --b;
		else if (direccio == 's') ++b;
		else if (direccio == 'e') ++a;
		else if (direccio == 'w') --a;
	}
	cout << "(" << a << ", " << b << ")" << endl;
}

/* Example
Input: nnnn
Output: (0, -4)

Input: ssewwwwn
Output: (-3, 1)
*/