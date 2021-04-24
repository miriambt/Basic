/* First position
Write a program that reads a sequence of natural numbers and prints the position of the first even number.

Input

Input consists of a sequence of natural numbers that contains, at least, one even number.

Output

Print the position of the first even number of the sequence.
*/

#include <iostream>
using namespace std;

int main () {
	bool found = false;
	int n;           
	int s = 0;
	
	while (not found and cin >> n) {
		if (n % 2 == 0) found = true;
		++s;
	} 
	cout << s << endl;
}

/* 
Example:
Input: 1 3 5 7 9 0 2 4 6 8
Output: 6

Input: 16 8 4 2
Output: 1
*/