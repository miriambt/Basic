/* I-th (3)
Write a program that, given an integer number i and a sequence of natural numbers x1, …, xn, prints xi.

Input

Input begins with an integer number i, followed by the sequence x1, …, xn.

Output

If the position i is correct, print the content of i as it is shown in the examples. Otherwise, print “Incorrect position.”.
*/

#include <iostream>
using namespace std;

int main () {
	
	int position;
	cin >> position;
	
	int compt = 0;
	int number_seq;
	bool found = false;
	
	while (not found and cin >> number_seq and compt < position) {
		++ compt;
		if (compt == position and number_seq >= 0) found = true;
	}

	if (found == true) cout << "At the position " << position << " there is a(n) " << number_seq << "." << endl;
	else cout << "Incorrect position." << endl;
}

/* 
Example:
Input: 5
1 3 5 7 9 0 2 4 6 8
Output:
At the position 5 there is a(n) 9.

Input: 7
16 8 4 2
Output: 
Incorrect position.
*/