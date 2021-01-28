/* Logarithms 
Write a program that computes logarithms in several bases.

Input: consists of a sequence of pairs of natural numbers b and n, such that b≥ 2 and n≥ 1.

Output: for every pair, print ⌊ logb n ⌋. */

#include <iostream>
using namespace std;

int main() {
	int a, b;
	while (cin >> a) {
		cin >> b;
		int compt = 0;

		while (b >= a) {
			b = b / a;
			++compt;
		}
		cout << compt << endl;
	}
}

/* Example
Input:
2 8
2 9
2 15
2 16
3 6
10 1
10 10
10 100
10 1000

Output: 
3
3
3
4
1
0
1
2
3
*/