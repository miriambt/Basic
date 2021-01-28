/* Sum of digits 
Write a program that reads several numbers and prints the sum of the digits of each one.

Input: consists of a sequence of natural numbers.

Output: for every number, print the sum of its digits following the format of the example. */

#include <iostream> 
using namespace std;

int main() {
	int n;
	
	while (cin >> n) {
	int s = 0;
	cout << "The sum of the digits of " << n << " is ";
	
		while (n > 0) {
			int r = n % 10;
			s = s + r;
			n = n / 10;
		}
	cout << s << "." << endl;
	}
}

/* Example
Input: 
29
7
0
1020

Output: 
The sum of the digits of 29 is 11.
The sum of the digits of 7 is 7.
The sum of the digits of 0 is 0.
The sum of the digits of 1020 is 3.
*/