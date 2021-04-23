/* Time decomposition (2)
Write a procedure
     void decompose(int n, int& h, int& m, int& s);
that, given a quantity of seconds n, computes how many hours h, minutes m and seconds s it represents. That is, we must have s + 60m + 3600h = n, with 0≤ s <60 and 0≤ m <60.

Precondition

n is a natural number.

Observation You only need to submit the required procedure; your main program will be ignored.
*/

#include <iostream>
#include <cmath>
using namespace std; 

void decompose (int n, int& h, int& m, int& s) {
	h = n / 3600;
	m = n % 3600 / 60;
	s = n % 60;
}

int main () {
	int n;
	cin >> n;
	int h, m, s;
 	decompose (n, h, m, s);
 	cout << h << " " << m << " " << s << endl;
}

/* Example
Input: decompose(147)
Output: 0 2 27

Input: decompose(100000)
Output: 27 46 40
*/