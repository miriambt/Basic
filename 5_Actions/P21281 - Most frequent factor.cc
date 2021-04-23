/* Most frequent factor
Write a procedure
     void factor(int n, int& f, int& q);
to store in f the most frequent factor of n, and store in q how many times it appears. If there is a tie, choose the smallest factor. For instance, if called with n = 450 = 21 · 32 · 52, the values after the call must be f =3 and q = 2.
Precondition
n ≥ 2
Observation You only need to submit the required procedure; your main program will be ignored.
*/

#include <iostream>
#include <cmath>
using namespace std;

void factor (int n, int& f, int& q) {
	int i = 2;               // start dividing by n/2.    
	int s = q;
	q = 0;                   // number of times we divide by n/i;
	while (i*i <= n) {
		s = 0;
		while (n % i == 0) {
			n = n / i;
			++s;
		} 
			if (s > q) {
				q = s;  
				f = i;
			}
	++i;
	}
	if (q == 0) {
		f = n;
		q = 1;
	}
}

int main () {
	int n;
	cin >> n;

	int f = 0;
	int q = 0;
	factor (n, f, q);
	cout << f << " " << q << endl;
}

/* Example
Input: factor(450)
Output: 3 2

Input: factor(23)
Output: 23 1
*/