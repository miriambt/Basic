/* The sequence of Collatz 
Let n be any strictly positive natural number. Consider the following process. If n is an even number, we divide it by two. 
Otherwise, we multiply it by 3 and add 1 to it. When we reach 1, we stop. For instance, starting with 3, we obtain the 
sequence 3,  10,  5,  16,  8,  4,  2,  1 . Since 1937 it is conjectured that this process ends for any initial n, 
although nobody has been able to prove it. In this problem, we do not ask you for a proof. This program prints the number 
of steps that it takes to reach 1 for every given n.

Input: consists of several natural numbers n ≥ 1.

Output: for every n, print how many steps are needed to reach 1. Suppose that this number is well defined, that is, that the conjecture of the statement is true.
*/

#include <iostream>
using namespace std;

bool even_or_odd_number(int n) {
	if (n % 2 == 0) return true;   // even number
	else return false;             // odd number
}

int main () {
	int n; 
	
	while (cin >> n) {
		int compt = 0;
		
		while (n != 1) {
			if (even_or_odd_number(n)) n /= 2;
			else n = 3 * n + 1;  
			++compt;
		}
	cout << compt << endl;
	}
}

/* Example
Input: 
3
1
40

Output:
7
0
8
*/