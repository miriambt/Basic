/* Which is missing?
Write a program that reads sequences with all the numbers between 1 and n but one, and tells which one is missing.

Input

Input consists of several sequences. Every sequence begins with a number n between 1 and 104 followed by n − 1 natural numbers. Every number between 1 and n appears exactly once, except one of them, which is missing.

Output

For every sequence, print the missing number.
*/

#include <iostream>
using namespace std;

int suma(int n) {
	if (n == 0) return 0;
	return n + suma(n-1);
}

int main () {
	int n;
	while (cin >> n) {
		int a = suma(n);
	
		int num;
		for (int i = n - 1; i > 0 and cin >> num; --i) {
			a = a - num;
		}
		cout << a << endl;
	}
}

/* Example:
Input:
5   3 2 1 5
2   1
10  5 4 6 7 1 2 9 10 8

Output:
4
2
3
*/