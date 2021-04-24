/* I-th (1)
Write a program that, given an integer number i and a sequence of natural numbers x1, …, xn, prints xi.

Input

Input begins with a number i, followed by the sequence x1, …, xn ended with −1. It is known that 1 ≤ i ≤ n.

Output

Print the content of the position i as it is shown in the examples.
*/

#include <iostream>
using namespace std;

int main () {
	int position;
	cin >> position;
	int compt = 0;
	int number_seq;
	
	while (compt < position) {
		cin >> number_seq;
		++ compt;
	} 
	cout << "At the position " << position << " there is a(n) " << number_seq << "." << endl;
}

/* 
Example:
Input: 5
1 3 5 7 9 0 2 4 6 8 -1
Output:
At the position 5 there is a(n) 9.

Input: 4
16 8 4 2 -1
Output: 
At the position 4 there is a(n) 2.
*/